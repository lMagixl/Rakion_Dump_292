
/* void __cdecl ClearToDefault(class Plane<float,3> &) */

void __cdecl ClearToDefault(Plane<float,3> *param_1)

{
                    /* 0x15500  1287  ?ClearToDefault@@YAXAAV?$Plane@M$02@@@Z */
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

