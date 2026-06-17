
/* public: long __thiscall CServer::GetVIPClientsCount(void) */

long __thiscall CServer::GetVIPClientsCount(CServer *this)

{
  int iVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  undefined4 *puVar3;
  int extraout_EDX;
  long lVar4;
  int iVar5;
  
                    /* 0x10a210  2189  ?GetVIPClientsCount@CServer@@QAEJXZ */
  lVar4 = 0;
  iVar5 = 0;
  iVar1 = FUN_360a59d0((undefined4 *)(this + 4));
  if (0 < iVar1) {
    puVar3 = *(undefined4 **)(this + 8);
    lVar4 = 0;
    do {
      if (iVar5 < 1) {
LAB_3610a23d:
        if (puVar3[0x13] != 0) {
          lVar4 = lVar4 + 1;
        }
      }
      else {
        iVar2 = FUN_36109550(puVar3);
        puVar3 = extraout_ECX;
        iVar1 = extraout_EDX;
        if (iVar2 != 0) goto LAB_3610a23d;
      }
      iVar5 = iVar5 + 1;
      puVar3 = puVar3 + 0x18;
    } while (iVar5 < iVar1);
  }
  return lVar4;
}

