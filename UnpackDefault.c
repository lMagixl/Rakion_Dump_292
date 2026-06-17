
/* public: void __thiscall CNetworkMessage::UnpackDefault(class CNetworkMessage &) */

void __thiscall CNetworkMessage::UnpackDefault(CNetworkMessage *this,CNetworkMessage *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined **local_4;
  
                    /* 0x106640  3885  ?UnpackDefault@CNetworkMessage@@QAEXAAV1@@Z */
  if (*(int *)this >> 6 == 0) {
    local_4 = &PTR_FUN_362350b0;
    Unpack(this,param_1,(CCompressor *)&local_4);
    return;
  }
  if (*(int *)this >> 6 != 1) {
    iVar1 = *(int *)(this + 4);
    uVar2 = *(int *)(this + 0x10) - 1;
    *(int *)(param_1 + 0x10) = *(int *)(this + 0x10);
    puVar4 = (undefined4 *)(iVar1 + 1);
    puVar5 = (undefined4 *)(*(int *)(param_1 + 4) + 1);
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    return;
  }
  local_4 = &PTR_LAB_36236840;
  Unpack(this,param_1,(CCompressor *)&local_4);
  return;
}

