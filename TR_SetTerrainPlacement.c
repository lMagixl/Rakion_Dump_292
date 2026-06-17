
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl TR_SetTerrainPlacement(class Matrix<float,3,3> const &,class Vector<float,3> const
   &) */

void __cdecl TR_SetTerrainPlacement(Matrix<float,3,3> *param_1,Vector<float,3> *param_2)

{
                    /* 0x17da50  3784
                       ?TR_SetTerrainPlacement@@YAXABV?$Matrix@M$02$02@@ABV?$Vector@M$02@@@Z */
  _DAT_36300cb8 = *(undefined4 *)param_1;
  _DAT_36300cbc = *(undefined4 *)(param_1 + 4);
  _DAT_36300cc0 = *(undefined4 *)(param_1 + 8);
  _DAT_36300cc4 = *(undefined4 *)param_2;
  _DAT_36300cc8 = *(undefined4 *)(param_1 + 0xc);
  _DAT_36300ccc = *(undefined4 *)(param_1 + 0x10);
  _DAT_36300cd0 = *(undefined4 *)(param_1 + 0x14);
  _DAT_36300cd4 = *(undefined4 *)(param_2 + 4);
  _DAT_36300cd8 = *(undefined4 *)(param_1 + 0x18);
  _DAT_36300cdc = *(undefined4 *)(param_1 + 0x1c);
  _DAT_36300ce0 = *(undefined4 *)(param_1 + 0x20);
  _DAT_36300ce4 = *(undefined4 *)(param_2 + 8);
  return;
}

