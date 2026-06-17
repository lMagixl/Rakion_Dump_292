
void __cdecl FUN_361e6077(int *param_1,uint *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte local_20 [4];
  undefined1 local_1c [4];
  byte local_18;
  byte local_17;
  byte local_16;
  byte local_15;
  byte local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  if (param_1[0x16] != 0) {
    FUN_361de341(param_1,s_Out_of_place_IHDR_3624bd54);
  }
  if (param_3 != 0xd) {
    FUN_361de341(param_1,s_Invalid_IHDR_chunk_3624bd40);
  }
  param_1[0x16] = param_1[0x16] | 1;
  FUN_361e571b(param_1,local_20,0xd);
  FUN_361e5feb(param_1,0);
  uVar2 = FUN_361e56e5(local_20);
  uVar3 = FUN_361e56e5(local_1c);
  local_10 = (uint)local_16;
  local_c = (uint)local_15;
  local_8 = (uint)local_14;
  if ((((uVar2 == 0) || (0x7fffffff < uVar2)) || (uVar3 == 0)) || (0x7fffffff < uVar3)) {
    FUN_361de341(param_1,s_Invalid_image_size_in_IHDR_3624bd24);
  }
  if (((local_18 != 1) && (local_18 != 2)) &&
     ((local_18 != 4 && ((local_18 != 8 && (local_18 != 0x10)))))) {
    FUN_361de341(param_1,s_Invalid_bit_depth_in_IHDR_3624bd08);
  }
  if (((local_17 == 1) || (local_17 == 5)) || (6 < local_17)) {
    FUN_361de341(param_1,s_Invalid_color_type_in_IHDR_3624bcec);
  }
  if (((local_17 == 3) && (8 < local_18)) ||
     (((local_17 == 2 || ((local_17 == 4 || (local_17 == 6)))) && (local_18 < 8)))) {
    FUN_361de341(param_1,s_Invalid_color_type_bit_depth_com_3624bcb8);
  }
  if (1 < (int)local_8) {
    FUN_361de341(param_1,s_Unknown_interlace_method_in_IHDR_3624bc94);
  }
  if (local_10 != 0) {
    FUN_361de341(param_1,s_Unknown_compression_method_in_IH_3624bc70);
  }
  if (local_c != 0) {
    FUN_361de341(param_1,s_Unknown_filter_method_in_IHDR_3624bc50);
  }
  *(undefined1 *)((int)param_1 + 0x113) = (undefined1)local_8;
  param_1[0x2e] = uVar2;
  param_1[0x2f] = uVar3;
  *(byte *)((int)param_1 + 0x117) = local_18;
  *(byte *)((int)param_1 + 0x116) = local_17;
  if (local_17 != 0) {
    if (local_17 == 2) {
      *(undefined1 *)((int)param_1 + 0x11a) = 3;
      goto LAB_361e622f;
    }
    if (local_17 != 3) {
      if (local_17 == 4) {
        *(undefined1 *)((int)param_1 + 0x11a) = 2;
      }
      else if (local_17 == 6) {
        *(undefined1 *)((int)param_1 + 0x11a) = 4;
      }
      goto LAB_361e622f;
    }
  }
  *(undefined1 *)((int)param_1 + 0x11a) = 1;
LAB_361e622f:
  bVar1 = *(char *)((int)param_1 + 0x11a) * local_18;
  *(byte *)((int)param_1 + 0x119) = bVar1;
  param_1[0x32] = bVar1 * uVar2 + 7 >> 3;
  FUN_361e0f29((int)param_1,param_2,uVar2,uVar3,local_18,local_17,(undefined1)local_8,(char)local_10
               ,(char)local_c);
  return;
}

