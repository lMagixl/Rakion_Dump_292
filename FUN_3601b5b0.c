
undefined4 * __thiscall FUN_3601b5b0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620e729;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined1 *)((int)this + 0x1c) = *(undefined1 *)(param_1 + 7);
  FUN_3601a210((void *)((int)this + 0x20),(int)(param_1 + 8));
  *(undefined1 *)((int)this + 0x2c) = *(undefined1 *)(param_1 + 0xb);
  *(undefined1 *)((int)this + 0x2d) = *(undefined1 *)((int)param_1 + 0x2d);
  *(undefined4 *)((int)this + 0x30) = param_1[0xc];
  local_4 = 0;
  *(undefined2 *)((int)this + 0x34) = *(undefined2 *)(param_1 + 0xd);
  _eh_vector_copy_constructor_iterator_
            ((void *)((int)this + 0x38),param_1 + 0xe,0xc,4,FUN_3601a350,
             (_func_void_void_ptr *)&LAB_360187c0);
  FUN_3601a350((void *)((int)this + 0x68),(int)(param_1 + 0x1a));
  local_4._0_1_ = 1;
  FUN_3601a350((void *)((int)this + 0x74),(int)(param_1 + 0x1d));
  local_4._0_1_ = 2;
  FUN_3601a350((void *)((int)this + 0x80),(int)(param_1 + 0x20));
  local_4._0_1_ = 3;
  FUN_3601a350((void *)((int)this + 0x8c),(int)(param_1 + 0x23));
  local_4._0_1_ = 4;
  FUN_3601a350((void *)((int)this + 0x98),(int)(param_1 + 0x26));
  local_4._0_1_ = 5;
  FUN_3601a350((void *)((int)this + 0xa4),(int)(param_1 + 0x29));
  *(undefined1 *)((int)this + 0xb0) = *(undefined1 *)(param_1 + 0x2c);
  *(undefined4 *)((int)this + 0xb4) = param_1[0x2d];
  local_4 = CONCAT31(local_4._1_3_,6);
  *(undefined4 *)((int)this + 0xb8) = param_1[0x2e];
  _eh_vector_copy_constructor_iterator_
            ((void *)((int)this + 0xbc),param_1 + 0x2f,0x28,0x13,FUN_3601b340,FUN_36019530);
  puVar2 = param_1 + 0xed;
  puVar3 = (undefined4 *)((int)this + 0x3b4);
  for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_3601a210((void *)((int)this + 0x418),(int)(param_1 + 0x106));
  ExceptionList = local_c;
  return this;
}

