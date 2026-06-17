
undefined1 * __thiscall FUN_3601c310(void *this,undefined1 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620e7f9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)this = *param_1;
  *(undefined2 *)((int)this + 2) = *(undefined2 *)(param_1 + 2);
  FUN_3601a210((void *)((int)this + 4),(int)(param_1 + 4));
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined1 *)((int)this + 0x1c) = param_1[0x1c];
  *(undefined4 *)((int)this + 0x1d) = *(undefined4 *)(param_1 + 0x1d);
  *(undefined4 *)((int)this + 0x21) = *(undefined4 *)(param_1 + 0x21);
  *(undefined4 *)((int)this + 0x25) = *(undefined4 *)(param_1 + 0x25);
  *(undefined1 *)((int)this + 0x29) = param_1[0x29];
  *(undefined1 *)((int)this + 0x2a) = param_1[0x2a];
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined2 *)((int)this + 0x40) = *(undefined2 *)(param_1 + 0x40);
  *(undefined1 *)((int)this + 0x42) = param_1[0x42];
  *(undefined1 *)((int)this + 0x43) = param_1[0x43];
  *(undefined1 *)((int)this + 0x44) = param_1[0x44];
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  local_4 = 0;
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  _eh_vector_copy_constructor_iterator_
            ((void *)((int)this + 0x50),param_1 + 0x50,0x28,0x13,FUN_3601b340,FUN_36019530);
  *(undefined4 *)((int)this + 0x348) = *(undefined4 *)(param_1 + 0x348);
  *(undefined4 *)((int)this + 0x34c) = *(undefined4 *)(param_1 + 0x34c);
  *(undefined4 *)((int)this + 0x350) = *(undefined4 *)(param_1 + 0x350);
  FUN_360198c0((void *)((int)this + 0x354),(int)(param_1 + 0x354));
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_360198c0((void *)((int)this + 0x360),(int)(param_1 + 0x360));
  *(undefined4 *)((int)this + 0x36c) = *(undefined4 *)(param_1 + 0x36c);
  *(undefined4 *)((int)this + 0x370) = *(undefined4 *)(param_1 + 0x370);
  *(undefined4 *)((int)this + 0x374) = *(undefined4 *)(param_1 + 0x374);
  *(undefined4 *)((int)this + 0x378) = *(undefined4 *)(param_1 + 0x378);
  ExceptionList = local_c;
  return this;
}

