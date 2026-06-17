
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FUN_36044080(void *this,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            uint param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3)

{
  int iVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar3;
  uint uVar4;
  uint extraout_ECX;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_34 [28];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_362111d9;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb4;
  local_18 = DAT_362abd90;
  ExceptionList = &local_10;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_34,param_3);
  iVar1 = *(int *)((int)this + 4);
  uVar4 = 0;
  local_8 = 0;
  if (iVar1 != 0) {
    uVar4 = (*(int *)((int)this + 0xc) - iVar1) / 0x1c;
  }
  if (param_2 != 0) {
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x1c;
    }
    if (0x9249249U - iVar1 < param_2) {
      FUN_36043470();
      uVar4 = extraout_ECX;
    }
    if (*(int *)((int)this + 4) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x1c;
    }
    if (uVar4 < iVar1 + param_2) {
      if (0x9249249 - (uVar4 >> 1) < uVar4) {
        uVar4 = 0;
      }
      else {
        uVar4 = uVar4 + (uVar4 >> 1);
      }
      if (*(int *)((int)this + 4) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x1c;
      }
      if (uVar4 < iVar1 + param_2) {
        iVar1 = FUN_36043390((int)this);
        uVar4 = iVar1 + param_2;
      }
      pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               FUN_361bf99c(uVar4 * 0x1c);
      local_8 = CONCAT31(local_8._1_3_,1);
      pbVar3 = FUN_36043ad0(*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                              **)((int)this + 4),param_1,pbVar2);
      FUN_36043d60(pbVar3,param_2,local_34);
      FUN_36043ad0(param_1,*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                             **)((int)this + 8),pbVar3 + param_2 * 0x1c);
      local_8 = 0;
      iVar1 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar1 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x1c;
      }
      if (*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
           ((int)this + 4) !=
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0) {
        FUN_36044050(*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       **)((int)this + 4),
                     *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       **)((int)this + 8));
        operator_delete(*(void **)((int)this + 4));
      }
      *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
       ((int)this + 0xc) = pbVar2 + uVar4 * 0x1c;
      *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
       ((int)this + 8) = pbVar2 + (param_2 + iVar1) * 0x1c;
      *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
       ((int)this + 4) = pbVar2;
    }
    else {
      pbVar2 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                ((int)this + 8);
      if ((uint)(((int)pbVar2 - (int)param_1) / 0x1c) < param_2) {
        FUN_36043ad0(param_1,pbVar2,param_1 + param_2 * 0x1c);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_36044020(*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       **)((int)this + 8),param_2 - (*(int *)((int)this + 8) - (int)param_1) / 0x1c,
                     local_34);
        iVar1 = *(int *)((int)this + 8) + param_2 * 0x1c;
        *(int *)((int)this + 8) = iVar1;
        local_8 = 0;
        FUN_36043590(param_1,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                              *)(iVar1 + param_2 * -0x1c),local_34);
      }
      else {
        pbVar3 = FUN_36043ad0(pbVar2 + param_2 * -0x1c,pbVar2,pbVar2);
        *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
         ((int)this + 8) = pbVar3;
        FUN_36043620(param_1,pbVar2 + param_2 * -0x1c,pbVar2);
        FUN_36043590(param_1,param_1 + param_2 * 0x1c,local_34);
      }
    }
  }
  local_8 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_34);
  ExceptionList = local_10;
  return;
}

