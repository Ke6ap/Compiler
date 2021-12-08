program exGlobal;
const g= 0x1a81;
type gar= 1..g;
ar= array[gar] { no comment
at all! } of integer;

var
   a, b, c: integer;
procedure display;
var
   x, y, z: integer;

begin
   {(* local variables *)}
   x := 10 + 5;
   y := 20;
   z := x + y;
   
   {(*global variables *)}
   a := 30;
   b:= 40;
   (a := 43;
   c:= a + b;

end;

begin
   a:= 100;
   b:= 200;
   c:= 300;
   {
   writeln('Winthin the program exlocal');
   writeln('value of a = ', a , ' b =  ',  b, ' and c = ', c);
   
   display();}
end.