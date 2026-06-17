
/* public: __thiscall AccountInfo_s::AccountInfo_s(struct AccountInfo_s const &) */

AccountInfo_s * __thiscall AccountInfo_s::AccountInfo_s(AccountInfo_s *this,AccountInfo_s *param_1)

{
  char *pcVar1;
  int iVar2;
  AccountInfo_s *pAVar3;
  AccountInfo_s *pAVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1c490  5  ??0AccountInfo_s@@QAE@ABU0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620e853;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined2 *)(this + 8) = *(undefined2 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  this[0x24] = param_1[0x24];
  FUN_3601a490(this + 0x28,param_1 + 0x28);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined2 *)(this + 0x5c) = *(undefined2 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  this[0x6c] = param_1[0x6c];
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  local_4 = 0;
  this[0x74] = param_1[0x74];
  _eh_vector_copy_constructor_iterator_
            (this + 0x78,param_1 + 0x78,0x28,0x78,FUN_3601b340,FUN_36019530);
  _eh_vector_copy_constructor_iterator_
            (this + 0x1338,param_1 + 0x1338,0x424,6,FUN_3601b5b0,FUN_36019680);
  *(undefined4 *)(this + 0x2c10) = *(undefined4 *)(param_1 + 0x2c10);
  *(undefined4 *)(this + 0x2c14) = *(undefined4 *)(param_1 + 0x2c14);
  *(undefined4 *)(this + 0x2c18) = *(undefined4 *)(param_1 + 0x2c18);
  *(undefined4 *)(this + 0x2c1c) = *(undefined4 *)(param_1 + 0x2c1c);
  this[0x2c20] = param_1[0x2c20];
  *(undefined4 *)(this + 0x2c24) = *(undefined4 *)(param_1 + 0x2c24);
  *(undefined2 *)(this + 0x2c28) = *(undefined2 *)(param_1 + 0x2c28);
  *(undefined4 *)(this + 0x2c2c) = *(undefined4 *)(param_1 + 0x2c2c);
  *(undefined4 *)(this + 0x2c30) = *(undefined4 *)(param_1 + 0x2c30);
  *(undefined4 *)(this + 0x2c34) = *(undefined4 *)(param_1 + 0x2c34);
  *(undefined4 *)(this + 0x2c38) = *(undefined4 *)(param_1 + 0x2c38);
  *(undefined4 *)(this + 0x2c3c) = *(undefined4 *)(param_1 + 0x2c3c);
  *(undefined4 *)(this + 0x2c40) = *(undefined4 *)(param_1 + 0x2c40);
  this[0x2c44] = param_1[0x2c44];
  this[0x2c45] = param_1[0x2c45];
  *(undefined4 *)(this + 0x2c46) = *(undefined4 *)(param_1 + 0x2c46);
  *(undefined4 *)(this + 0x2c4a) = *(undefined4 *)(param_1 + 0x2c4a);
  *(undefined4 *)(this + 0x2c4e) = *(undefined4 *)(param_1 + 0x2c4e);
  *(undefined4 *)(this + 0x2c52) = *(undefined4 *)(param_1 + 0x2c52);
  this[0x2c56] = param_1[0x2c56];
  *(undefined4 *)(this + 0x2c57) = *(undefined4 *)(param_1 + 0x2c57);
  *(undefined4 *)(this + 0x2c5b) = *(undefined4 *)(param_1 + 0x2c5b);
  *(undefined4 *)(this + 0x2c5f) = *(undefined4 *)(param_1 + 0x2c5f);
  this[0x2c63] = param_1[0x2c63];
  this[0x2c64] = param_1[0x2c64];
  pAVar3 = param_1 + 0x2c65;
  pAVar4 = this + 0x2c65;
  for (iVar2 = 0x1d; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  *(undefined2 *)pAVar4 = *(undefined2 *)pAVar3;
  pAVar4[2] = pAVar3[2];
  pAVar3 = param_1 + 0x2cdc;
  pAVar4 = this + 0x2cdc;
  for (iVar2 = 0x16; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  *(undefined2 *)pAVar4 = *(undefined2 *)pAVar3;
  pAVar4[2] = pAVar3[2];
  pAVar3 = param_1 + 0x2d38;
  pAVar4 = this + 0x2d38;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  FUN_3601a590(this + 0x2d54,(int)(param_1 + 0x2d54));
  local_4._0_1_ = 1;
  FUN_3601a590(this + 0x2d60,(int)(param_1 + 0x2d60));
  *(undefined4 *)(this + 0x2d6c) = *(undefined4 *)(param_1 + 0x2d6c);
  *(undefined4 *)(this + 0x2d70) = *(undefined4 *)(param_1 + 0x2d70);
  local_4._0_1_ = 2;
  this[0x2d74] = param_1[0x2d74];
  pcVar1 = StringDuplicate(*(char **)(param_1 + 0x2d78));
  *(char **)(this + 0x2d78) = pcVar1;
  local_4._0_1_ = 3;
  *(undefined4 *)(this + 0x2d7c) = *(undefined4 *)(param_1 + 0x2d7c);
  FUN_3601a590(this + 0x2d80,(int)(param_1 + 0x2d80));
  *(undefined4 *)(this + 0x2d8c) = *(undefined4 *)(param_1 + 0x2d8c);
  this[0x2d90] = param_1[0x2d90];
  *(undefined4 *)(this + 0x2d94) = *(undefined4 *)(param_1 + 0x2d94);
  *(undefined4 *)(this + 0x2d98) = *(undefined4 *)(param_1 + 0x2d98);
  *(undefined4 *)(this + 0x2d9c) = *(undefined4 *)(param_1 + 0x2d9c);
  this[0x2da0] = param_1[0x2da0];
  *(undefined4 *)(this + 0x2da4) = *(undefined4 *)(param_1 + 0x2da4);
  *(undefined4 *)(this + 0x2da8) = *(undefined4 *)(param_1 + 0x2da8);
  *(undefined4 *)(this + 0x2dac) = *(undefined4 *)(param_1 + 0x2dac);
  this[0x2db0] = param_1[0x2db0];
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_36018840(this + 0x2db4,(int)(param_1 + 0x2db4));
  *(undefined4 *)(this + 0x2dc4) = *(undefined4 *)(param_1 + 0x2dc4);
  *(undefined4 *)(this + 0x2dc8) = *(undefined4 *)(param_1 + 0x2dc8);
  *(undefined4 *)(this + 0x2dcc) = *(undefined4 *)(param_1 + 0x2dcc);
  *(undefined2 *)(this + 0x2dd0) = *(undefined2 *)(param_1 + 0x2dd0);
  pAVar3 = param_1 + 0x2dd4;
  pAVar4 = this + 0x2dd4;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_1 + 0x2dfc;
  pAVar4 = this + 0x2dfc;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  *(undefined2 *)pAVar4 = *(undefined2 *)pAVar3;
  *(undefined4 *)(this + 0x2e30) = *(undefined4 *)(param_1 + 0x2e30);
  pAVar3 = param_1 + 0x2e34;
  pAVar4 = this + 0x2e34;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  pAVar3 = param_1 + 0x2e50;
  pAVar4 = this + 0x2e50;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
    pAVar3 = pAVar3 + 4;
    pAVar4 = pAVar4 + 4;
  }
  *(undefined2 *)pAVar4 = *(undefined2 *)pAVar3;
  ExceptionList = local_c;
  return this;
}

