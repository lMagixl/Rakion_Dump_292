
void FUN_36187a70(void)

{
  undefined1 uVar1;
  undefined2 uVar2;
  size_t sVar3;
  undefined4 *puVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  CFontInfo **this;
  char *local_88;
  undefined4 local_84;
  CTFileStream local_80 [20];
  undefined4 *local_6c;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621ad22;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTFileStream::CTFileStream(local_80);
  local_4 = 0;
  local_88 = StringDuplicate(s_Fonts_RakionFont_dat_3623dba0);
  local_84 = 0;
  local_4._0_1_ = 1;
  CTFileStream::Open_t(local_80,(CTFileName *)&local_88,1);
  local_4 = (uint)local_4._1_3_ << 8;
  StringFree(local_88);
  sVar3 = CTStream::GetStreamSize((CTStream *)local_80);
  puVar4 = (undefined4 *)thunk_FUN_361bf99c(sVar3);
  uVar5 = CTStream::GetStreamSize((CTStream *)local_80);
  puVar8 = local_6c;
  puVar10 = puVar4;
  for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  for (uVar7 = uVar5 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  }
  local_6c = (undefined4 *)((int)local_6c + uVar5);
  iVar9 = 0;
  this = &_pFontInfo;
  do {
    uVar2 = *(undefined2 *)(iVar9 + (int)puVar4);
    uVar1 = *(undefined1 *)(iVar9 + 4 + (int)puVar4);
    local_88 = (char *)CONCAT22(local_88._2_2_,*(undefined2 *)(iVar9 + 2 + (int)puVar4));
    iVar9 = iVar9 + 5;
    lVar6 = CTStream::GetStreamSize((CTStream *)local_80);
    if (lVar6 < iVar9) break;
    FUN_36187a50(this,uVar2,(short)local_88,uVar1);
    this = (CFontInfo **)((int)this + 6);
  } while ((int)this < 0x36361a3a);
  operator_delete__(puVar4);
  CTFileStream::Close(local_80);
  local_88 = StringDuplicate(s_Fonts_RakionFont_tex_3623dbb8);
  local_84 = 0;
  local_4._0_1_ = 2;
  _ptdRakionFont = CStock_CTextureData::Obtain_t(_pTextureStock,(CTFileName *)&local_88);
  local_4 = (uint)local_4._1_3_ << 8;
  StringFree(local_88);
  CTextureData::Force(_ptdRakionFont,0x200);
  local_4 = 0xffffffff;
  CTFileStream::~CTFileStream(local_80);
  ExceptionList = local_c;
  return;
}

