
/* public: void __thiscall CTString::SaveKeepCRLF_t(class CTFileName const &) */

void __thiscall CTString::SaveKeepCRLF_t(CTString *this,CTFileName *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  CTFileStream local_80 [20];
  char *local_6c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x23b40  3196  ?SaveKeepCRLF_t@CTString@@QAEXABVCTFileName@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620eefe;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTFileStream::CTFileStream(local_80);
  local_4 = 0;
  CTFileStream::Create_t(local_80,param_1,2);
  pcVar5 = *(char **)this;
  pcVar2 = pcVar5;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (pcVar2 != pcVar5 + 1) {
    pcVar2 = pcVar5;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = (int)pcVar2 - (int)(pcVar5 + 1);
    pcVar2 = local_6c;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar2 = pcVar2 + 1;
    }
    local_6c = local_6c + uVar3;
  }
  local_4 = 0xffffffff;
  CTFileStream::~CTFileStream(local_80);
  ExceptionList = local_c;
  return;
}

