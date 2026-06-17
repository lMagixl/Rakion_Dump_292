
/* int __cdecl IsBigger(unsigned long,unsigned long) */

int __cdecl IsBigger(ulong param_1,ulong param_2)

{
                    /* 0x62ab0  2371  ?IsBigger@@YAHKK@Z */
  return (uint)((((param_2 >> 0x18) + (param_2 >> 0x10 & 0xff) + (param_2 >> 8 & 0xff)) * 0x5556 &
                0xffff0000) <
               (((param_1 >> 0x18) + (param_1 >> 0x10 & 0xff) + (param_1 >> 8 & 0xff)) * 0x5556 &
               0xffff0000));
}

