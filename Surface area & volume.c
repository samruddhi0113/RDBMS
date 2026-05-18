DECLARE

 l float;
 b float;
 h float;
Area float;
Volume float;

BEGIN
   l:=&l;
   b:=&b;
   h:=&h;

   Area:=2*(l*b+l*h+b*h);
   Volume:=l*b*h;

   DBMS_OUTPUT.PUT_LINE('Surface area'||area);
   DBMS_OUTPUT.PUT_LINE('Volume'||Volume);

END;
/