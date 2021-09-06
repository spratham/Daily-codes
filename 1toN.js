<!DOCTYPE html>
<html>
<title>Web Page Design</title>
<head>
<script>

let n = 1
 var N = parseInt(prompt("enter the value n:"));
function fun1()
{
    if (n <= N)
    {
        document.write( n+" ");
        n++;
        fun2();
    }
    else
    {
        return;
    }
}
 
function fun2()
{
    if (n <= N)
    {
        document.write(n+" ");
        n++;
        fun1();
    }
    else
    {
        return;
    }
}
 
fun1();
</script>
</head>
<body>
</body>
</html>
