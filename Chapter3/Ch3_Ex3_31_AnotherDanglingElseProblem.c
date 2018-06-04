/*
       Program: Ch3_Ex3_31_AnotherDanglingElseProblem.c
   Descripción: This program uses proper indentation techniques to produce a
                certain output.

                  if ( y == 8 )
                  if ( x == 5 )
                  puts( "@@@@@" );
                  else
                  puts( "#####" );
                  puts( "$$$$$" );
                  puts( "&&&&&" );

         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {

   int x;
   int y;

   // a)
   x = 5;
   y = 8;

   if (y == 8) {
      if (x == 5) {
         puts("@@@@@");
      } else {
         puts("#####");
      }
      puts("$$$$$");
      puts("&&&&&");
   }

   puts("");

   // b)
   x = 5;
   y = 8;

   if (y == 8) {
      if (x == 5) {
         puts("@@@@@");
      }
   } else {
      puts( "#####" );
      puts( "$$$$$" );
      puts( "&&&&&" );
   }

   puts("");

   // c)
   x = 5;
   y = 8;

   if ( y == 8 ) {
      if ( x == 5 ) {
        puts( "@@@@@" );
      } else {
         puts( "#####" );
         puts( "$$$$$" );
      }
   }
   puts( "&&&&&" );

   puts("");

   // d)
   x = 5;
   y = 7;

   if ( y == 8 ) {
      if ( x == 5 ) {
         puts( "@@@@@" );
      }
   } else { 
      puts( "#####" );
      puts( "$$$$$" );
      puts( "&&&&&" );
   }

   return 0;

}