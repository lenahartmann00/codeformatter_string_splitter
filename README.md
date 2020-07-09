# Code formatter string splitter

Simple C Program that helps with code formatting when using strings.
It splits long strings in multiple lines seperated by a plus.

Problem :(
```
String longString = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Donec enim diam vulputate ut pharetra sit amet aliquam id. Varius sit amet mattis vulputate enim nulla aliquet porttitor lacus. Fusce";
```
using <b>string_splitter.c</b> :)
```
String longString = "Lorem ipsum dolor sit amet, c"+
    "onsectetur adipiscing elit, s"+
    "ed do eiusmod tempor incididu"+
    "nt ut labore et dolore magna "+
    "aliqua. Libero id faucibus ni"+
    "sl tincidunt eget nullam non."+
    " Vulputate sapien nec sagitti"+
    "s aliquam malesuada bibendum "+
    "arcu vitae. Egestas";
```

## Usage

1. Compile
      ```
      make string_splitter
      ```
      or 
      ```
      cc string_splitter.c -o string_splitter
      ```
2. Run :)
      ```
      ./string_splitter "<the_string_you_would_like_to_split>"
      ```
      or with optional argument -l
      ```
      ./string_splitter -l <length_of_the_substrings> "<the_string_you_would_like_to_split>"
      ```

## Examples
1. Quickstart
  ```
  $ ./split_string "The string you would like to split"
  "The string you would like to "+
  "split"
  ```
2. Using additional argument to adjust length of the substrings
  ```
  $ ./split_string -l 5 "The string you would like to split"
  "The s"+
  "tring"+
  " you "+
  "would"+
  " like"+
  " to s"+
  "plit"
   "split"
  ```
3. Useful for long hex strings
  ```
$ ./split_string 05fa00020626000000000002000310001300011000080001020900020b000000000000000000030b000000000000000000040b00000000000000000005020000061b0001000000000000000000071200010000080400000210000400010208000202010003020000040400000310000700010209000202280003020000040208000512001400141e28323c4b5a0000000000000000000000000006120014020000000000000000000000000000000000000000070402000510000700010209000202a0000302000004020500051200145064788ca00000000000000000000000000000000006120014000000000000000000000000000000000000000000070400000610000500010200000202000003020000041200050000000000000504000007100005000102000002020000030200000412000500000000000005040000081000050001020900020200000302040004120005000103020000050400000b10000500010200
"05fa0002062600000000000200031"+
"0001300011000080001020900020b"+
"000000000000000000030b0000000"+
"00000000000040b00000000000000"+
"000005020000061b0001000000000"+
"00000000007120001000008040000"+
"02100004000102080002020100030"+
"20000040400000310000700010209"+
"00020228000302000004020800051"+
"2001400141e28323c4b5a00000000"+
"00000000000000000006120014020"+
"00000000000000000000000000000"+
"00000000000704020005100007000"+
"10209000202a00003020000040205"+
"00051200145064788ca0000000000"+
"00000000000000000000000061200"+
"14000000000000000000000000000"+
"00000000000000007040000061000"+
"05000102000002020000030200000"+
"41200050000000000000504000007"+
"10000500010200000202000003020"+
"00004120005000000000000050400"+
"00081000050001020900020200000"+
"30204000412000500010302000005"+
"0400000b10000500010200"
  ```
