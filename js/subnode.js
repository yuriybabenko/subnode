var subnode       = window.subnode || {};
var subnode_form  = window.subnode_form || {};

subnode = {
	init: function()
	{
		subnode_form.removal();
		subnode_form.titleUpdate();
		subnode.preventDefaults();
	},
	
	preventDefaults: function()
	{
		$('.prevent-default').each(function(i, el){
			$(el).click(function(e){
				e.preventDefault();
			});
		});
	},
	
	formCallback: function()
	{
		subnode_form.removal();
    subnode_form.titleUpdate();
	}
}

subnode_form = {
	removal: function()
	{
		$('.subform-remove').each(function(i, el){
      el = $(el);
    
      //make sure nothing is checked by default
      el.attr('checked', false);
    
      //remove previously binded events
      el.unbind();
      
      //bind new events
      el.change(function(e){
        var items = el.parents('fieldset.collapsible');
        
        if(items.length) {
          var fieldset = $(items[0]);
          var parent   = fieldset.parent();
          var confirm  = $('.subnode-remove-confirm', fieldset)
          
          //show/hide the confirmation links
            if(el.attr('checked')) {
              confirm.fadeIn();
            }
            else {
              confirm.fadeOut();
            }
          
          //removal event handler
            $('.remove-yes', confirm).click(function(e){
              e.preventDefault();
              
              $.getJSON(Drupal.settings.basePath + 'subnode/ahah/remove/' + $('#node-form.subnode input[name=form_build_id]').attr('value') + '/' + $(el).attr('field_name') + '/' + $(el).attr('field_count'), function(data){
								if(parent && !parent.hasClass('fieldset-wrapper')) {
                  parent.remove();
                }   
                else {
                  fieldset.remove();
                }         
              });
            });
          
          //cancellation even handler
            $('.remove-no', confirm).click(function(e){
              e.preventDefault();
              
              el.attr('checked', false);
              confirm.fadeOut();
            });
        }
      });   
    });
	},
	
	titleUpdate: function()
  {
    $('.subform-title').each(function(i, el){
      //gather data
        var items = $(el).parents('fieldset.collapsible'); 
        
        if(items.length) {
          var titles = $('legend a', items[0]);
					var title = $(titles[0]);
          var original = title.html();
                  
          //remove any existing bindings
            $(el).unbind();
          
          //capture all input
            $(el).bind('keyup mouseup change', function(e){
              var val = $(el).attr('value');
              
              if(val) {
                title.html(val);          
              }
              else {
                title.html(original);
              }
              
              title.html();
            });
        }
    });
  },

	attachAhah: function()
	{
		
	}
}

if(Drupal.jsEnabled)
{
	$(document).ready(subnode.init);
}
