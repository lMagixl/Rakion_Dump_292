
int * __fastcall FUN_3611ec60(int *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36218732;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[7] = 0x7f61b1e6;
  param_1[10] = -0x9e4e1a;
  param_1[8] = 0x7f61b1e6;
  param_1[0xb] = -0x9e4e1a;
  param_1[9] = 0x7f61b1e6;
  param_1[0xc] = -0x9e4e1a;
  CAnyProjection3D::CAnyProjection3D((CAnyProjection3D *)(param_1 + 0xf));
  CAnyProjection3D::CAnyProjection3D((CAnyProjection3D *)(param_1 + 0x1b2));
  param_1[0x34c] = 0x7f61b1e6;
  param_1[0x34d] = 0x7f61b1e6;
  param_1[0x34e] = -0x9e4e1a;
  param_1[0x34f] = -0x9e4e1a;
  FUN_3611f800((CListHead *)(param_1 + 0x365));
  param_1[0x36a] = 0;
  param_1[0x36b] = 0x10;
  local_4 = 0;
  FUN_3611f850((CListHead *)(param_1 + 0x36c));
  param_1[0x371] = 0;
  param_1[0x372] = 0x10;
  FUN_360ccb50(param_1 + 0x373);
  param_1[0x377] = 0;
  param_1[0x378] = 0;
  param_1[0x379] = 0;
  param_1[0x37a] = 0x10;
  local_4._0_1_ = 3;
  FUN_3611f8d0((CListHead *)(param_1 + 0x37b));
  param_1[0x380] = 0;
  param_1[0x381] = 0x10;
  param_1[0x382] = 0;
  param_1[899] = 0;
  param_1[900] = 0;
  param_1[0x385] = 0x10;
  param_1[0x386] = 0;
  param_1[0x387] = 0;
  param_1[0x388] = 0;
  param_1[0x389] = 0x10;
  local_4._0_1_ = 6;
  CListHead::Clear((CListHead *)(param_1 + 0x38d));
  CListHead::Clear((CListHead *)(param_1 + 0x390));
  CListHead::Clear((CListHead *)(param_1 + 0x393));
  param_1[999] = 0;
  param_1[1000] = 0;
  local_4 = CONCAT31(local_4._1_3_,7);
  CListHead::Clear((CListHead *)(param_1 + 0x3f5));
  *param_1 = (int)(param_1 + -0xd8beaae) / 0xfe0;
  ExceptionList = local_c;
  return param_1;
}

