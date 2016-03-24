 <script>
         $(document).ready(function() {
                            

                            $("#cssmenu a").each(function() {
                            var linkTitle = $(this).text();
                            $(this).attr('data-title', linkTitle);
                            });
                            });
 </script>
            <div id='cssmenu'>
                        <ul>
                            <li class='active'><a href='index.html'>Home</a></li>
                            <li><a href='about.html'>About</a></li>
                            <li><a href="#" >Lectures</a>
                                
								 <ul>
                                 
                                    <li><a href='week1.shtml'>Week1</a></li>
                                    <li><a href='week2.shtml'>Week2</a></li>
                                    <li><a href='week3.shtml'>Week3</a></li>
                                    <li><a href='week4.shtml'>Week4</a></li>
                                    <li><a href='week5.shtml'>Week5</a></li>
                                    <li><a href='week6.shtml'>Week6</a></li>
                                    <li><a href='week7.shtml'>Week7</a></li>
                                    <li><a href='week8.shtml'>Week8</a></li>
                                    <li><a href='week9.shtml'>Week9</a></li>
                                    <li><a href='week10.shtml'>Week10</a></li>
                                    <li><a href='project.shtml'>Project</a></li>
                                    <li><a href='answers.shtml'>Project Answers</a></li>
                                   
                               </ul>
                            </li>
                            <li><a href='contact.php'>Contact</a></li>
                            <li><a href='http://goformedia.tumblr.com/'>Blog</a></li>
                           
                        </ul>
            </div>
