<html>
   <head>
      <script>
   
         function dis(val)
         {
             document.getElementById("result").value+=val
         }
           

         function solve()
         {
             let x = document.getElementById("result").value
             let y = eval(x)
             document.getElementById("result").value = y
         }
           
         function clr()
         {
             document.getElementById("result").value = ""
         }
      </script>

      <style>
         .title{
         margin-bottom: 10px;
         text-align:center;
         width: 250px;
         color:Dark blue;
         border: solid Pink 2px;
         }
 
         input[type="button"]
         {
         background-color:violet;
         color:pink;
         border: solid black 2px;
         width:100%
         }
 
         input[type="text"]
         {
         background-color:royalblue;
         border: solid black 2px;
         width:100%
         }
      </style>
   </head>
   <body>
      <div class = title >NasDio Calculator</div>
      <table border="1">
         <tr>
            <td colspan="4"><input type="text" id="result"/></td>
         
         </tr>
         <tr>
                   
            <td><input type="button" value="1" onclick="dis('1')"/> </td>
            <td><input type="button" value="2" onclick="dis('2')"/> </td>
            <td><input type="button" value="3" onclick="dis('3')"/> </td>
            <td><input type="button" value="/" onclick="dis('/')"/> </td>
         </tr>
         <tr>
            <td><input type="button" value="4" onclick="dis('4')"/> </td>
            <td><input type="button" value="5" onclick="dis('5')"/> </td>
            <td><input type="button" value="6" onclick="dis('6')"/> </td>
            <td><input type="button" value="-" onclick="dis('-')"/> </td>
         </tr>
         <tr>
            <td><input type="button" value="7" onclick="dis('7')"/> </td>
            <td><input type="button" value="8" onclick="dis('8')"/> </td>
            <td><input type="button" value="9" onclick="dis('9')"/> </td>
            <td><input type="button" value="+" onclick="dis('+')"/> </td>
         </tr>
         <tr>  
            <td><input type="button" value="=" onclick="solve()"/> </td>
            <td><input type="button" value="0" onclick="dis('0')"/> </td>  
            <td><input type="button" value="c" onclick="clr()"/> </td>
            <td><input type="button" value="*" onclick="dis('*')"/> </td>
         </tr>
      </table>
   </body>
</html>
