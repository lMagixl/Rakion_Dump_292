
uint * __thiscall
FUN_3601a850(void *this,uint *param_1,int param_2,int param_3,uint param_4,uint param_5,
            void *param_6,void *param_7)

{
  int iVar1;
  void **ppvVar2;
  void *extraout_ECX;
  uint uVar3;
  uint uVar4;
  uint unaff_EDI;
  uint in_stack_00000030;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3620e4f8;
  local_c = ExceptionList;
  local_4 = 0;
  uVar3 = param_4;
  uVar4 = param_5;
  ExceptionList = &local_c;
  ppvVar2 = &local_c;
  if (param_2 != param_3) {
    do {
      iVar1 = param_2;
      if (((uVar4 != 0) && (uVar3 <= *(uint *)(param_2 + 0x98))) &&
         (*(uint *)(param_2 + 0x98) - uVar3 < uVar4)) {
        FUN_36016fb0(&param_6,(_String_base *)(param_2 + 0xc),0,0xffffffff,unaff_EDI);
        uVar4 = *(int *)(iVar1 + 0x98) - param_4;
        uVar3 = param_4;
        param_5 = uVar4;
      }
      FUN_3600eb00(&param_2);
      this = extraout_ECX;
      ppvVar2 = ExceptionList;
    } while (param_2 != param_3);
  }
  ExceptionList = ppvVar2;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  std::_String_val<char,class_std::allocator<char>_>::_String_val<char,class_std::allocator<char>_>
            ((_String_val<char,class_std::allocator<char>_> *)(param_1 + 2),this);
  param_1[8] = 0xf;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_36016fb0((_String_val<char,class_std::allocator<char>_> *)(param_1 + 2),
               (_String_base *)&param_6,0,0xffffffff,unaff_EDI);
  if (0xf < in_stack_00000030) {
    operator_delete(param_7);
  }
  ExceptionList = local_c;
  return param_1;
}

