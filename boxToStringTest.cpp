#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"

int main()
{

   struct Box b1, b2;

   initBox(&b1, 3.4, -5, 5, 7);
   assertEquals("ul=(3.4,-5), w=5,h=7", boxToString(b1), "boxToString(b1)");
   // ul=(3.4,-5), w=5,h=7
   initBox(&b2, 3.14159, 6.2831853071, 2.23456, 6.2456);
   assertEquals("ul=(3.14,6.28), w=2.23,h=6.25", boxToString(b2), "boxToString(b2)");
   assertEquals("ul=(3,6), w=2,h=6", boxToString(b2, 1), "boxToString(b2,1)");
   assertEquals("ul=(3.142,6.283), w=2.235,h=6.246", boxToString(b2, 4), "boxToString(b2,4)");
   assertEquals("ul=(3.1416,6.2832), w=2.2346,h=6.2456", boxToString(b2, 5), "boxToString(b2,5)");

   return 0;
}
