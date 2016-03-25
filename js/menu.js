 function menuDrop(){ // menuDrop() is a function that applies responsive techniques to the navigation system
                                //based on viewport/ window sizes */
            if ($(window).width() <= 400){
                $("#cssmenu, .active").hide();
                $(".menu-toggle,.menu").show();
            };
            
            if ($(window).width() > 400){
                $("#cssmenu").show();
                $(".menu-toggle,.menu").hide();
            } 
        };


        $('.menu-toggle').click(function(event){
                event.preventDefault();
                
                // create menu variables
                var slideoutMenu = $('.menu');
                var slideoutMenuWidth = slideoutMenu.width();
                // slide menu
                if (slideoutMenu.hasClass("open")) {
                    slideoutMenu.animate({ left: -slideoutMenuWidth }, 200);
                } else {
                    slideoutMenu.animate({
                        left: 0
                    }, 200); }
                    
                    // toggle open class
                    slideoutMenu.toggleClass("open");
                });
        });