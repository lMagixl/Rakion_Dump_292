
/* public: void __thiscall PreLoadMng::clearPrecache(void) */

void __thiscall PreLoadMng::clearPrecache(PreLoadMng *this)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  PreLoadMng *pPVar6;
  PreLoadMng *pPVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *local_8;
  PreLoadMng *local_4;
  
                    /* 0x2ec20  4136  ?clearPrecache@PreLoadMng@@QAEXXZ */
  piVar2 = *(int **)(this + 4);
  local_8 = (int *)*piVar2;
  local_4 = this;
  while (local_8 != piVar2) {
    DeleteModelInstance((CModelInstance *)local_8[3]);
    FUN_3602bef0((int *)&local_8);
  }
  puVar3 = *(undefined4 **)(this + 0x10);
  puVar4 = (undefined4 *)*puVar3;
  while (puVar4 != puVar3) {
    CStock_CModelData::Release(_pModelStock,(CModelData *)puVar4[3]);
    if (*(char *)((int)puVar4 + 0x11) == '\0') {
      puVar9 = (undefined4 *)puVar4[2];
      if (*(char *)((int)puVar9 + 0x11) == '\0') {
        cVar1 = *(char *)((int)*puVar9 + 0x11);
        puVar4 = puVar9;
        puVar9 = (undefined4 *)*puVar9;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar9 + 0x11);
          puVar4 = puVar9;
          puVar9 = (undefined4 *)*puVar9;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar4[1] + 0x11);
        puVar8 = (undefined4 *)puVar4[1];
        puVar9 = puVar4;
        while ((puVar4 = puVar8, cVar1 == '\0' && (puVar9 == (undefined4 *)puVar4[2]))) {
          cVar1 = *(char *)((int)puVar4[1] + 0x11);
          puVar8 = (undefined4 *)puVar4[1];
          puVar9 = puVar4;
        }
      }
    }
  }
  puVar3 = *(undefined4 **)(this + 0x1c);
  puVar4 = (undefined4 *)*puVar3;
  while (puVar4 != puVar3) {
    CStock_CTextureData::Release(_pTextureStock,(CTextureData *)puVar4[3]);
    if (*(char *)((int)puVar4 + 0x11) == '\0') {
      puVar9 = (undefined4 *)puVar4[2];
      if (*(char *)((int)puVar9 + 0x11) == '\0') {
        cVar1 = *(char *)((int)*puVar9 + 0x11);
        puVar4 = puVar9;
        puVar9 = (undefined4 *)*puVar9;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar9 + 0x11);
          puVar4 = puVar9;
          puVar9 = (undefined4 *)*puVar9;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar4[1] + 0x11);
        puVar8 = (undefined4 *)puVar4[1];
        puVar9 = puVar4;
        while ((puVar4 = puVar8, cVar1 == '\0' && (puVar9 == (undefined4 *)puVar4[2]))) {
          cVar1 = *(char *)((int)puVar4[1] + 0x11);
          puVar8 = (undefined4 *)puVar4[1];
          puVar9 = puVar4;
        }
      }
    }
  }
  puVar3 = *(undefined4 **)(this + 0x28);
  puVar4 = (undefined4 *)*puVar3;
  do {
    do {
      while( true ) {
        do {
          puVar9 = puVar4;
          if (puVar9 == puVar3) {
            cVar1 = *(char *)((int)*(int **)(*(int *)(this + 4) + 4) + 0x11);
            piVar2 = *(int **)(*(int *)(this + 4) + 4);
            while (cVar1 == '\0') {
              FUN_3602cda0((int *)piVar2[2]);
              piVar5 = (int *)*piVar2;
              operator_delete(piVar2);
              piVar2 = piVar5;
              cVar1 = *(char *)((int)piVar5 + 0x11);
            }
            *(int *)(*(int *)(this + 4) + 4) = *(int *)(this + 4);
            *(undefined4 *)(this + 8) = 0;
            *(undefined4 *)*(undefined4 *)(this + 4) = *(undefined4 *)(this + 4);
            *(int *)(*(int *)(this + 4) + 8) = *(int *)(this + 4);
            cVar1 = *(char *)((int)*(int **)(*(int *)(this + 0x10) + 4) + 0x11);
            piVar2 = *(int **)(*(int *)(this + 0x10) + 4);
            pPVar6 = local_4;
            while (cVar1 == '\0') {
              local_4 = pPVar6;
              FUN_3602cde0((int *)piVar2[2]);
              piVar5 = (int *)*piVar2;
              operator_delete(piVar2);
              piVar2 = piVar5;
              pPVar6 = local_4;
              cVar1 = *(char *)((int)piVar5 + 0x11);
            }
            *(int *)(*(int *)(this + 0x10) + 4) = *(int *)(this + 0x10);
            *(undefined4 *)(this + 0x14) = 0;
            *(undefined4 *)*(undefined4 *)(this + 0x10) = *(undefined4 *)(this + 0x10);
            *(int *)(*(int *)(this + 0x10) + 8) = *(int *)(this + 0x10);
            cVar1 = *(char *)((int)*(int **)(*(int *)(pPVar6 + 0x1c) + 4) + 0x11);
            piVar2 = *(int **)(*(int *)(pPVar6 + 0x1c) + 4);
            pPVar7 = pPVar6;
            while (local_4 = pPVar7, cVar1 == '\0') {
              FUN_3602ce20((int *)piVar2[2]);
              piVar5 = (int *)*piVar2;
              operator_delete(piVar2);
              piVar2 = piVar5;
              pPVar7 = local_4;
              cVar1 = *(char *)((int)piVar5 + 0x11);
            }
            *(int *)(*(int *)(pPVar6 + 0x1c) + 4) = *(int *)(pPVar6 + 0x1c);
            *(undefined4 *)(pPVar6 + 0x20) = 0;
            *(undefined4 *)*(undefined4 *)(pPVar6 + 0x1c) = *(undefined4 *)(pPVar6 + 0x1c);
            *(int *)(*(int *)(pPVar6 + 0x1c) + 8) = *(int *)(pPVar6 + 0x1c);
            cVar1 = *(char *)((int)*(int **)(*(int *)(pPVar7 + 0x28) + 4) + 0x11);
            piVar2 = *(int **)(*(int *)(pPVar7 + 0x28) + 4);
            while (cVar1 == '\0') {
              FUN_3602ce60((int *)piVar2[2]);
              piVar5 = (int *)*piVar2;
              operator_delete(piVar2);
              piVar2 = piVar5;
              cVar1 = *(char *)((int)piVar5 + 0x11);
            }
            *(int *)(*(int *)(pPVar7 + 0x28) + 4) = *(int *)(pPVar7 + 0x28);
            *(undefined4 *)(pPVar7 + 0x2c) = 0;
            *(undefined4 *)*(undefined4 *)(pPVar7 + 0x28) = *(undefined4 *)(pPVar7 + 0x28);
            *(int *)(*(int *)(pPVar7 + 0x28) + 8) = *(int *)(pPVar7 + 0x28);
            return;
          }
          CStock_CSoundData::Release(_pSoundStock,(CSoundData *)puVar9[3]);
          puVar4 = puVar9;
        } while (*(char *)((int)puVar9 + 0x11) != '\0');
        puVar4 = (undefined4 *)puVar9[2];
        if (*(char *)((int)puVar4 + 0x11) != '\0') break;
        cVar1 = *(char *)((int)*puVar4 + 0x11);
        puVar9 = (undefined4 *)*puVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar9 + 0x11);
          puVar4 = puVar9;
          puVar9 = (undefined4 *)*puVar9;
        }
      }
      puVar4 = (undefined4 *)puVar9[1];
    } while (*(char *)((int)puVar4 + 0x11) != '\0');
    do {
      puVar8 = puVar4;
      puVar4 = puVar8;
      if (puVar9 != (undefined4 *)puVar8[2]) break;
      puVar4 = (undefined4 *)puVar8[1];
      puVar9 = puVar8;
    } while (*(char *)((int)puVar4 + 0x11) == '\0');
  } while( true );
}

