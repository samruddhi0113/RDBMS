DECLARE
  a int;
  b int;
  c int;
BEGIN

   a:=&a;
   b:=&b;
   c:=a*b;
  DBMS_OUTPUT.PUT_LINE('MULTIPLICATION = ');
END;
/