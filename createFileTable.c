
/* private: void __thiscall Xenesis2::Foundation::File::xFileManager::createFileTable(class
   std::map<class std::basic_string<char,struct Xenesis2::Foundation::File::i_char_traits,class
   std::allocator<char> >,struct Xenesis2::Foundation::File::XFSFileInfo,struct std::less<class
   std::basic_string<char,struct Xenesis2::Foundation::File::i_char_traits,class
   std::allocator<char> > >,class std::allocator<struct std::pair<class
   std::basic_string<char,struct Xenesis2::Foundation::File::i_char_traits,class
   std::allocator<char> > const ,struct Xenesis2::Foundation::File::XFSFileInfo> > > &,struct
   Xenesis2::Foundation::File::XFSFileInfo *,int) */

void __thiscall
Xenesis2::Foundation::File::xFileManager::createFileTable
          (xFileManager *this,
          map<class_std::basic_string<char,struct_Xenesis2::Foundation::File::i_char_traits,class_std::allocator<char>_>,struct_Xenesis2::Foundation::File::XFSFileInfo,struct_std::less<class_std::basic_string<char,struct_Xenesis2::Foundation::File::i_char_traits,class_std::allocator<char>_>_>,class_std::allocator<struct_std::pair<class_std::basic_string<char,struct_Xenesis2::Foundation::File::i_char_traits,class_std::allocator<char>_>_const_,struct_Xenesis2::Foundation::File::XFSFileInfo>_>_>
          *param_1,XFSFileInfo *param_2,int param_3)

{
  XFSFileInfo XVar1;
  undefined4 uVar2;
  XFSFileInfo *pXVar3;
  _String_val<char,class_std::allocator<char>_> *p_Var4;
  int iVar5;
  void *this_00;
  uint unaff_EDI;
  undefined4 *puVar6;
  undefined4 in_stack_fffffdf4;
  void *in_stack_fffffdf8;
  undefined4 auStack_1f0 [28];
  undefined4 uStack_180;
  char local_160;
  undefined4 local_158 [2];
  _String_val<char,class_std::allocator<char>_> local_150 [4];
  void *local_14c;
  undefined4 local_13c;
  uint local_138;
  undefined4 local_134 [32];
  _String_val<char,class_std::allocator<char>_> local_b4 [4];
  void *local_b0;
  undefined4 local_a0;
  uint local_9c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x1d0c0  4152
                       ?createFileTable@xFileManager@File@Foundation@Xenesis2@@AAEXAAV?$map@V?$basic_string@DUi_char_traits@File@Foundation@Xenesis2@@V?$allocator@D@std@@@std@@UXFSFileInfo@File@Foundation@Xenesis2@@U?$less@V?$basic_string@DUi_char_traits@File@Foundation@Xenesis2@@V?$allocator@D@std@@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DUi_char_traits@File@Foundation@Xenesis2@@V?$allocator@D@std@@@std@@UXFSFileInfo@File@Foundation@Xenesis2@@@std@@@2@@std@@PAUXFSFileInfo@234@H@Z
                        */
  local_c = 0xffffffff;
  puStack_10 = &LAB_3620e8f6;
  local_14 = ExceptionList;
  local_160 = '\x01';
  ExceptionList = &local_14;
  if (param_3 != 0) {
    while (param_3 = param_3 + -1, local_160 == '\x01') {
      pXVar3 = param_2;
      puVar6 = auStack_1f0;
      for (iVar5 = 0x20; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar6 = *(undefined4 *)pXVar3;
        pXVar3 = pXVar3 + 4;
        puVar6 = puVar6 + 1;
      }
      std::_String_val<char,class_std::allocator<char>_>::
      _String_val<char,class_std::allocator<char>_>
                ((_String_val<char,class_std::allocator<char>_> *)&stack0xfffffdf4,0);
      in_stack_fffffdf8 = (void *)((uint)in_stack_fffffdf8 & 0xffffff00);
      pXVar3 = param_2;
      do {
        XVar1 = *pXVar3;
        pXVar3 = pXVar3 + 1;
      } while (XVar1 != (XFSFileInfo)0x0);
      FUN_36017150(&stack0xfffffdf4,(_String_base *)param_2,(int)pXVar3 - (int)(param_2 + 1));
      p_Var4 = FUN_36019b60(this_00,local_b4,in_stack_fffffdf4,in_stack_fffffdf8);
      local_c = 0;
      std::_String_val<char,class_std::allocator<char>_>::
      _String_val<char,class_std::allocator<char>_>(local_150);
      local_138 = 0xf;
      local_13c = 0;
      local_14c = (void *)((uint)local_14c & 0xffffff00);
      uStack_180 = 0x3601d1a5;
      FUN_36016fb0(local_150,(_String_base *)p_Var4,0,0xffffffff,unaff_EDI);
      p_Var4 = p_Var4 + 0x1c;
      puVar6 = local_134;
      for (iVar5 = 0x20; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar6 = *(undefined4 *)p_Var4;
        p_Var4 = p_Var4 + 4;
        puVar6 = puVar6 + 1;
      }
      local_c = CONCAT31(local_c._1_3_,1);
      iVar5 = FUN_3601c8f0(param_1,local_158,(_String_base *)local_150);
      uVar2 = *(undefined4 *)(iVar5 + 4);
      if (0xf < local_138) {
        operator_delete(local_14c);
      }
      local_138 = 0xf;
      local_13c = 0;
      local_14c = (void *)((uint)local_14c & 0xffffff00);
      local_c = 0xffffffff;
      if (0xf < local_9c) {
        operator_delete(local_b0);
      }
      param_2 = param_2 + 0x80;
      local_9c = 0xf;
      local_a0 = 0;
      local_b0 = (void *)((uint)local_b0 & 0xffffff00);
      if (param_3 == 0) {
        ExceptionList = local_14;
        return;
      }
      local_160 = (char)uVar2;
    }
  }
  ExceptionList = local_14;
  return;
}

