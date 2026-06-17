
/* public: int __thiscall CServer::CharacterNameIsUsed(class CPlayerCharacter &) */

int __thiscall CServer::CharacterNameIsUsed(CServer *this,CPlayerCharacter *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x10ab50  1165  ?CharacterNameIsUsed@CServer@@QAEHAAVCPlayerCharacter@@@Z */
  puStack_8 = &LAB_36217c34;
  local_c = ExceptionList;
  iVar3 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(this + 0xc)) {
    do {
      piVar1 = (int *)(iVar3 * 0x100 + *(int *)(this + 0x10));
      if ((*piVar1 != 0) &&
         (iVar2 = CPlayerCharacter::operator==((CPlayerCharacter *)(piVar1 + 0x2e),param_1),
         iVar2 != 0)) {
        ExceptionList = local_c;
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(this + 0xc));
  }
  ExceptionList = local_c;
  return 0;
}

