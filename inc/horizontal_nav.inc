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
                                    <li><a href='week1.html'>Week1</a></li>
                                    <li><a href='#'>Week2</a></li>
                                    <li><a href='#'>Week3</a></li>
                                    <li><a href='#'>Week4</a></li>
                                    <li><a href='#'>Week5</a></li>
                                    <li><a href='#'>Week6</a></li>
                                    <li><a href='#'>Week7</a></li>
                                   <li><a href='#'>Week8</a></li>
                                    <li><a href='#'>Week9</a></li>
                                    <li><a href='#'>Week10</a></li>
                                   <li><a href='#'>Week11</a></li>
                                   
                               </ul>
                            </li>
                            <li><a href='contact.php'>Contact</a></li>
                            <li><a href='http://goformedia.tumblr.com/'>Blog</a></li>
                           
                        </ul>
            </div>
