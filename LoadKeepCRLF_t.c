
/* public: void __thiscall CTString::LoadKeepCRLF_t(class CTFileName const &) */

void __thiscall CTString::LoadKeepCRLF_t(CTString *this,CTFileName *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  CTFileStream local_80 [20];
  undefined4 *local_6c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x23a00  2549  ?LoadKeepCRLF_t@CTString@@QAEXABVCTFileName@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620eeda;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTFileStream::CTFileStream(local_80);
  local_4 = 0;
  CTFileStream::Open_t(local_80,param_1,1);
  uVar1 = CTStream::GetStreamSize((CTStream *)local_80);
  StringFree(*(char **)this);
  puVar2 = (undefined4 *)FUN_360232c0(uVar1);
  *(undefined4 **)this = puVar2;
  if (0 < (int)uVar1) {
    puVar4 = local_6c;
    for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar2 = puVar2 + 1;
    }
    for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar2 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    local_6c = (undefined4 *)((int)local_6c + uVar1);
  }
  *(undefined1 *)(uVar1 + *(int *)this) = 0;
  local_4 = 0xffffffff;
  CTFileStream::~CTFileStream(local_80);
  ExceptionList = local_c;
  return;
}

