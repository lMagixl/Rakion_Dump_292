
/* public: unsigned long __thiscall CServer::MaskOfPlayersOnClient(long) */

ulong __thiscall CServer::MaskOfPlayersOnClient(CServer *this,long param_1)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  int iVar4;
  
                    /* 0x10a2b0  2632  ?MaskOfPlayersOnClient@CServer@@QAEKJ@Z */
  uVar3 = 0;
  iVar4 = 0;
  iVar1 = FUN_360a5a70((undefined4 *)(this + 0xc));
  if (0 < iVar1) {
    piVar2 = *(int **)(this + 0x10);
    do {
      if ((*piVar2 != 0) && (piVar2[0x29] == param_1)) {
        uVar3 = uVar3 | 1 << ((byte)iVar4 & 0x1f);
      }
      iVar4 = iVar4 + 1;
      piVar2 = piVar2 + 0x40;
    } while (iVar4 < iVar1);
  }
  return uVar3;
}

