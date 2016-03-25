<script>
            function update(jscolor) {
            // 'jscolor' instance can be used as a string
            document.getElementById('body').style.backgroundColor = '#' + jscolor
        }
 

    </script>

    <script>
        function setTextColor(picker) {
            document.getElementsByTagName('article')[0].style.color = '#' + picker.toString()
        }
    </script>
    <script>
        $(function() {
            $("#tfq2b").click(function() {
                    if ($("#tfq2b").val() == "Search our website") {
                        $("#tfq2b").val("");
                    }
                });
        });
    </script>