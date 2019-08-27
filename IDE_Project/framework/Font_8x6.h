#ifndef __FONT_8x6_H
#define __FONT_8x6_H

#define CHAR_H      8                  /* Character Height (in pixels)       */
#define CHAR_W      6                  /* Character Width (in pixels)        */

 
const uint16_t Font_8x6[] = {
	 /* Space ' ' */
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   /* '!' */
   0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x04, 0x00, 
   /* '"' */
   0x0a, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   /* '#' */
   0x0a, 0x1f, 0x0a, 0x0a, 0x0a, 0x1f, 0x0a, 0x00, 
   /* '$' */
   0x04, 0x1e, 0x05, 0x0e, 0x14, 0x0f, 0x04, 0x00, 
   /* '%' */
   0x03, 0x13, 0x08, 0x04, 0x02, 0x19, 0x18, 0x00,
   /* '&' */
   0x06, 0x09, 0x05, 0x02, 0x15, 0x09, 0x16, 0x00, 
   /* ''' */
   0x06, 0x04, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 
   /* '(' */
   0x08, 0x04, 0x02, 0x02, 0x02, 0x04, 0x08, 0x00,
   /* ')' */
   0x02, 0x04, 0x08, 0x08, 0x08, 0x04, 0x02, 0x00, 
   /* '*' */
   0x00, 0x04, 0x15, 0x0e, 0x15, 0x04, 0x00, 0x00, 
   /* '+' */
   0x00, 0x04, 0x04, 0x1f, 0x04, 0x04, 0x00, 0x00,
   /* ',' */
   0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x02, 
   /* '-' */
   0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00,  
   /* '.' */
   0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x06, 0x00,
   /* '/' */
   0x10, 0x10, 0x08, 0x04, 0x02, 0x01, 0x01, 0x00, 
   /* '0' */
   0x0e, 0x11, 0x19, 0x15, 0x13, 0x11, 0x0e, 0x00, 
   /* '1' */ 
   0x08, 0x0c, 0x0a, 0x08, 0x08, 0x08, 0x08, 0x00,
   /* '2' */
   0x0e, 0x11, 0x10, 0x08, 0x04, 0x02, 0x1f, 0x00, 
   /* '3' */ 
   0x0e, 0x11, 0x10, 0x0c, 0x10, 0x11, 0x0e, 0x00, 
   /* '4' */
   0x08, 0x0c, 0x0a, 0x09, 0x1f, 0x08, 0x08, 0x00,
   /* '5' */
   0x1f, 0x01, 0x0f, 0x10, 0x10, 0x11, 0x0e, 0x00, 
   /* '6' */ 
   0x0c, 0x02, 0x01, 0x0f, 0x11, 0x11, 0x0e, 0x00, 
   /* '7' */
   0x1f, 0x10, 0x08, 0x08, 0x04, 0x04, 0x04, 0x00,
   /* '8' */ 
   0x0e, 0x11, 0x11, 0x0e, 0x11, 0x11, 0x0e, 0x00, 
   /* '9' */ 
   0x0e, 0x11, 0x11, 0x1e, 0x10, 0x08, 0x06, 0x00, 
   /* ':' */
   0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00,
   /* ';' */
   0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x04, 0x02, 
   /* '<' */
   0x08, 0x04, 0x02, 0x01, 0x02, 0x04, 0x08, 0x00,
   /* '=' */
   0x00, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x00, 0x00,
   /* '>' */
   0x02, 0x04, 0x08, 0x10, 0x08, 0x04, 0x02, 0x00, 
   /* '?' */
   0x0e, 0x11, 0x10, 0x08, 0x04, 0x00, 0x04, 0x00, 
   /* '@' */
   0x0e, 0x11, 0x19, 0x15, 0x1d, 0x01, 0x1e, 0x00,
   /* 'A' */
   0x0e, 0x11, 0x11, 0x1f, 0x11, 0x11, 0x11, 0x00, 
   /* 'B' */
   0x0f, 0x11, 0x11, 0x0f, 0x11, 0x11, 0x0f, 0x00,
   /* 'C' */
   0x0e, 0x11, 0x01, 0x01, 0x01, 0x11, 0x0e, 0x00,
   /* 'D' */
   0x07, 0x09, 0x11, 0x11, 0x11, 0x09, 0x07, 0x00, 
   /* 'E' */
   0x1f, 0x01, 0x01, 0x0f, 0x01, 0x01, 0x1f, 0x00, 
   /* 'F' */
   0x1f, 0x01, 0x01, 0x0f, 0x01, 0x01, 0x01, 0x00,
   /* 'G' */
   0x0e, 0x11, 0x01, 0x1d, 0x11, 0x11, 0x0e, 0x00, 
   /* 'H' */
   0x11, 0x11, 0x11, 0x1f, 0x11, 0x11, 0x11, 0x00, 
   /* 'I' */
   0x0e, 0x04, 0x04, 0x04, 0x04, 0x04, 0x0e, 0x00,
   /* 'J' */
   0x10, 0x10, 0x10, 0x10, 0x10, 0x11, 0x0e, 0x00, 
   /* 'K' */
   0x11, 0x09, 0x05, 0x03, 0x05, 0x09, 0x11, 0x00, 
   /* 'L' */
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x1f, 0x00,
   /* 'M' */
   0x11, 0x1b, 0x15, 0x15, 0x11, 0x11, 0x11, 0x00, 
   /* 'N' */
   0x11, 0x11, 0x13, 0x15, 0x19, 0x11, 0x11, 0x00, 
   /* 'O' */
   0x0e, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0e, 0x00,
   /* 'P' */
   0x0f, 0x11, 0x11, 0x0f, 0x01, 0x01, 0x01, 0x00, 
   /* 'Q' */
   0x0e, 0x11, 0x11, 0x11, 0x15, 0x09, 0x16, 0x00, 
   /* 'R' */
   0x0f, 0x11, 0x11, 0x0f, 0x05, 0x09, 0x11, 0x00,
   /* 'S' */
   0x1e, 0x01, 0x01, 0x0e, 0x10, 0x10, 0x0f, 0x00, 
   /* 'T' */
   0x1f, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 
   /* 'U' */
   0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0e, 0x00,
   /* 'V' */
   0x11, 0x11, 0x11, 0x0a, 0x0a, 0x04, 0x04, 0x00, 
   /* 'W' */
   0x11, 0x11, 0x11, 0x15, 0x15, 0x1b, 0x11, 0x00, 
   /* 'X' */
   0x11, 0x11, 0x0a, 0x04, 0x0a, 0x11, 0x11, 0x00,
   /* 'Y' */
   0x11, 0x11, 0x11, 0x0a, 0x04, 0x04, 0x04, 0x00, 
   /* 'Z' */
   0x1f, 0x10, 0x08, 0x04, 0x02, 0x01, 0x1f, 0x00, 
   /* '[' */
   0x0e, 0x02, 0x02, 0x02, 0x02, 0x02, 0x0e, 0x00,
   /* '\' */
   0x01, 0x01, 0x02, 0x04, 0x08, 0x10, 0x10, 0x00, 
   /* ']' */
   0x0e, 0x08, 0x08, 0x08, 0x08, 0x08, 0x0e, 0x00, 
   /* '^' */
   0x00, 0x04, 0x0a, 0x11, 0x00, 0x00, 0x00, 0x00,
   /* '_' */
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 
   /* ''' */
   0x02, 0x04, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 
   /* 'a' */
   0x00, 0x00, 0x0e, 0x10, 0x1e, 0x11, 0x1e, 0x00,
   /* 'b' */
   0x01, 0x01, 0x0f, 0x11, 0x11, 0x11, 0x0f, 0x00, 
   /* 'c' */
   0x00, 0x00, 0x0e, 0x01, 0x01, 0x01, 0x0e, 0x00, 
   /* 'd' */
   0x10, 0x10, 0x1e, 0x11, 0x11, 0x11, 0x1e, 0x00,
   /* 'e' */
   0x00, 0x00, 0x0e, 0x11, 0x0f, 0x01, 0x0e, 0x00, 
   /* 'f' */
   0x18, 0x04, 0x04, 0x0e, 0x04, 0x04, 0x04, 0x00, 
   /* 'g' */
   0x00, 0x00, 0x1e, 0x11, 0x11, 0x1e, 0x10, 0x0e,
   /* 'h' */
   0x01, 0x01, 0x0d, 0x13, 0x11, 0x11, 0x11, 0x00, 
   /* 'i' */
   0x04, 0x00, 0x06, 0x04, 0x04, 0x04, 0x0e, 0x00, 
   /* 'j' */
   0x00, 0x08, 0x00, 0x08, 0x08, 0x08, 0x09, 0x06,
   /* 'k' */
   0x01, 0x01, 0x09, 0x05, 0x03, 0x05, 0x09, 0x00, 
   /* 'l' */
   0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x0c, 0x00, 
   /* 'm' */
   0x00, 0x00, 0x0b, 0x15, 0x15, 0x11, 0x11, 0x00,
   /* 'n' */
   0x00, 0x00, 0x0d, 0x13, 0x11, 0x11, 0x11, 0x00, 
   /* 'o' */
   0x00, 0x00, 0x0e, 0x11, 0x11, 0x11, 0x0e, 0x00, 
   /* 'p' */
   0x00, 0x00, 0x0f, 0x11, 0x11, 0x0f, 0x01, 0x01,
   /* 'q' */
   0x00, 0x00, 0x1e, 0x11, 0x11, 0x1e, 0x10, 0x10, 
   /* 'r' */
   0x00, 0x00, 0x0d, 0x13, 0x01, 0x01, 0x01, 0x00, 
   /* 's' */
   0x00, 0x00, 0x1e, 0x01, 0x0e, 0x10, 0x0f, 0x00,
   /* 't' */
   0x04, 0x04, 0x0e, 0x04, 0x04, 0x04, 0x18, 0x00, 
   /* 'u' */
   0x00, 0x00, 0x11, 0x11, 0x11, 0x11, 0x0e, 0x00, 
   /* 'v' */
   0x00, 0x00, 0x11, 0x11, 0x0a, 0x0a, 0x04, 0x00,
   /* 'w' */
   0x00, 0x00, 0x11, 0x11, 0x15, 0x15, 0x0a, 0x00, 
   /* 'x' */
   0x00, 0x00, 0x11, 0x0a, 0x04, 0x0a, 0x11, 0x00, 
   /* 'y' */
   0x00, 0x00, 0x11, 0x11, 0x11, 0x1e, 0x10, 0x0e,
   /* 'z' */
   0x00, 0x00, 0x1f, 0x08, 0x04, 0x02, 0x1f, 0x00, 
   /* '{' */
   0x0c, 0x04, 0x04, 0x02, 0x04, 0x04, 0x0c, 0x00, 
   /* '|' */
   0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00,
   /* '}' */
   0x06, 0x04, 0x04, 0x08, 0x04, 0x04, 0x06, 0x00, 
   /* '~' */
   0x00, 0x00, 0x12, 0x15, 0x09, 0x00, 0x00, 0x00, 
   /* ' ' */
   0x01, 0x01, 0x0d, 0x38, 0x2c, 0x24, 0x2c, 0x00,

   /* Special Symbols  starting at character 0x80 */
   /* Circle - Empty */
   0x3f, 0x21, 0x21, 0x21, 0x21, 0x21, 0x21, 0x3f,
   /* Circle - Full */
   0x2a, 0x15, 0x2a, 0x15, 0x2a, 0x15, 0x2a, 0x15, 
   /* Square - Empty */
   0x02, 0x05, 0x05, 0x02, 0x08, 0x14, 0x14, 0x08,
   /* Square - Full */
   0x07, 0x01, 0x03, 0x1d, 0x05, 0x0c, 0x04, 0x04, 
   /* Up - Empty */
   0x06, 0x09, 0x09, 0x06, 0x00, 0x00, 0x00, 0x00, 
   /* Up - Full */
   0x00, 0x00, 0x0e, 0x11, 0x11, 0x0a, 0x1b, 0x00,
   /* Down - Empty */
   0x0e, 0x11, 0x11, 0x00, 0x11, 0x11, 0x0e, 0x00, 
   /* Down - Full */
   0x00, 0x10, 0x10, 0x00, 0x10, 0x10, 0x00, 0x00,
   /* Left - Empty */
   0x0e, 0x10, 0x10, 0x0e, 0x01, 0x01, 0x0e, 0x00,
   /* Left - Full */
   0x0e, 0x10, 0x10, 0x0e, 0x10, 0x10, 0x0e, 0x00,
   /* Right - Empty */
   0x00, 0x11, 0x11, 0x0e, 0x10, 0x10, 0x00, 0x00, 
   /* Right - Full */
   0x0e, 0x01, 0x01, 0x0e, 0x10, 0x10, 0x0e, 0x00,
   /* Wait - Empty */
   0x0e, 0x01, 0x01, 0x0e, 0x11, 0x11, 0x0e, 0x00, 
   /* Wait - Full */
   0x0e, 0x10, 0x10, 0x00, 0x10, 0x10, 0x00, 0x00, 
   /* Walk - Empty */
   0x0e, 0x11, 0x11, 0x0e, 0x11, 0x11, 0x0e, 0x00,
   /* Walk - Full */
   0x0e, 0x11, 0x11, 0x0e, 0x10, 0x10, 0x0e, 0x00
};

#endif /* __FONT_8x6_H */