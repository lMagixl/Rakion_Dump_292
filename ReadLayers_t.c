
/* public: virtual void __thiscall CBrushShadowMap::ReadLayers_t(class CTStream *) */

void __thiscall CBrushShadowMap::ReadLayers_t(CBrushShadowMap *this,CTStream *param_1)

{
  CTStream *pCVar1;
  int iVar2;
  bool bVar3;
  CTStream *this_00;
  int *piVar4;
  CBrushShadowLayer *pCVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint local_8;
  undefined1 local_4;
  
  this_00 = param_1;
                    /* 0x140e50  2967  ?ReadLayers_t@CBrushShadowMap@@UAEXPAVCTStream@@@Z */
  iVar8 = DAT_36238ac4;
  bVar3 = false;
  local_4 = DAT_36238ac8;
  piVar4 = (int *)CTStream::PeekID_t(param_1);
  iVar2 = DAT_36238ad4;
  if (*piVar4 == iVar8) {
    local_8 = DAT_36238acc;
    local_4 = DAT_36238ad0;
    CTStream::ExpectID_t(param_1,(CChunkID *)&local_8);
    pCVar1 = (CTStream *)**(int **)(param_1 + 0x14);
    *(int **)(param_1 + 0x14) = *(int **)(param_1 + 0x14) + 1;
    if ((int)pCVar1 < 1) {
      return;
    }
    param_1 = pCVar1;
    do {
      pCVar5 = (CBrushShadowLayer *)FUN_361bf99c(0x38);
      if (pCVar5 == (CBrushShadowLayer *)0x0) {
        pCVar5 = (CBrushShadowLayer *)0x0;
      }
      else {
        pCVar5 = (CBrushShadowLayer *)CBrushShadowLayer::CBrushShadowLayer(pCVar5);
      }
      *(undefined4 *)(pCVar5 + 0x34) = 0x12345678;
      CListHead::AddTail((CListHead *)(this + 0x90),(CListNode *)(pCVar5 + 4));
      *(CBrushShadowMap **)(pCVar5 + 0x14) = this;
      *(undefined4 *)(pCVar5 + 0x18) = 0;
      *(undefined4 *)pCVar5 = **(undefined4 **)(this_00 + 0x14);
      iVar8 = *(int *)(this_00 + 0x14);
      puVar6 = (uint *)(iVar8 + 4);
      *(uint **)(this_00 + 0x14) = puVar6;
      if (((byte)*pCVar5 & 2) == 0) {
        uVar10 = *puVar6;
        *(int *)(this_00 + 0x14) = iVar8 + 8;
        if (uVar10 == 0) {
          *(undefined4 *)(pCVar5 + 0x30) = 0;
        }
        else {
          CTStream::Seek_t(this_00,uVar10,1);
          *(undefined4 *)(pCVar5 + 0x30) = 0;
        }
        bVar3 = true;
        CListNode::Remove((CListNode *)(pCVar5 + 4));
        CBrushShadowLayer::~CBrushShadowLayer(pCVar5);
        operator_delete(pCVar5);
      }
      else {
        uVar10 = *puVar6;
        *(int *)(this_00 + 0x14) = iVar8 + 8;
        local_8 = uVar10;
        if (uVar10 == 0) {
          bVar3 = true;
          *(undefined4 *)(pCVar5 + 0x30) = 0;
        }
        else {
          puVar7 = AllocMemory(uVar10);
          *(undefined4 **)(pCVar5 + 0x30) = puVar7;
          puVar11 = *(undefined4 **)(this_00 + 0x14);
          for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar7 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar7 = puVar7 + 1;
          }
          for (uVar9 = uVar10 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined1 *)puVar7 = *(undefined1 *)puVar11;
            puVar11 = (undefined4 *)((int)puVar11 + 1);
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
          *(uint *)(this_00 + 0x14) = *(int *)(this_00 + 0x14) + uVar10;
        }
        *(undefined4 *)(pCVar5 + 0x1c) = **(undefined4 **)(this_00 + 0x14);
        iVar8 = *(int *)(this_00 + 0x14);
        *(undefined4 **)(this_00 + 0x14) = (undefined4 *)(iVar8 + 4);
        *(undefined4 *)(pCVar5 + 0x20) = *(undefined4 *)(iVar8 + 4);
        iVar8 = *(int *)(this_00 + 0x14);
        *(undefined4 **)(this_00 + 0x14) = (undefined4 *)(iVar8 + 4);
        *(undefined4 *)(pCVar5 + 0x24) = *(undefined4 *)(iVar8 + 4);
        iVar8 = *(int *)(this_00 + 0x14);
        *(undefined4 **)(this_00 + 0x14) = (undefined4 *)(iVar8 + 4);
        *(undefined4 *)(pCVar5 + 0x28) = *(undefined4 *)(iVar8 + 4);
        *(int *)(this_00 + 0x14) = *(int *)(this_00 + 0x14) + 4;
      }
      param_1 = param_1 + -1;
    } while (param_1 != (CTStream *)0x0);
  }
  else {
    local_4 = DAT_36238ad8;
    piVar4 = (int *)CTStream::PeekID_t(param_1);
    iVar8 = DAT_36238ae4;
    if (*piVar4 == iVar2) {
      local_8 = DAT_36238adc;
      local_4 = DAT_36238ae0;
      CTStream::ExpectID_t(param_1,(CChunkID *)&local_8);
      *(undefined4 *)(this + 0x50) = **(undefined4 **)(param_1 + 0x14);
      iVar8 = *(int *)(param_1 + 0x14);
      *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar8 + 4);
      *(undefined4 *)(this + 0x54) = *(undefined4 *)(iVar8 + 4);
      iVar8 = *(int *)(param_1 + 0x14);
      piVar4 = (int *)(iVar8 + 4);
      *(int **)(param_1 + 0x14) = piVar4;
      pCVar1 = (CTStream *)*piVar4;
      *(int *)(param_1 + 0x14) = iVar8 + 8;
      param_1 = pCVar1;
      if ((int)pCVar1 < 1) {
        return;
      }
      do {
        pCVar5 = (CBrushShadowLayer *)FUN_361bf99c(0x38);
        if (pCVar5 == (CBrushShadowLayer *)0x0) {
          puVar6 = (uint *)0x0;
        }
        else {
          puVar6 = (uint *)CBrushShadowLayer::CBrushShadowLayer(pCVar5);
        }
        puVar6[0xd] = 0x12345678;
        CListHead::AddTail((CListHead *)(this + 0x90),(CListNode *)(puVar6 + 1));
        puVar6[5] = (uint)this;
        puVar6[6] = 0;
        *puVar6 = **(uint **)(this_00 + 0x14);
        iVar8 = *(int *)(this_00 + 0x14);
        piVar4 = (int *)(iVar8 + 4);
        *(int **)(this_00 + 0x14) = piVar4;
        iVar2 = *piVar4;
        *(int *)(this_00 + 0x14) = iVar8 + 8;
        if (iVar2 != 0) {
          CTStream::Seek_t(this_00,iVar2,1);
        }
        puVar6[0xc] = 0;
        *puVar6 = *puVar6 & 0xfffffffe;
        puVar6[7] = **(uint **)(this_00 + 0x14);
        iVar8 = *(int *)(this_00 + 0x14);
        *(uint **)(this_00 + 0x14) = (uint *)(iVar8 + 4);
        puVar6[8] = *(uint *)(iVar8 + 4);
        iVar8 = *(int *)(this_00 + 0x14);
        *(uint **)(this_00 + 0x14) = (uint *)(iVar8 + 4);
        puVar6[9] = *(uint *)(iVar8 + 4);
        iVar8 = *(int *)(this_00 + 0x14);
        *(uint **)(this_00 + 0x14) = (uint *)(iVar8 + 4);
        puVar6[10] = *(uint *)(iVar8 + 4);
        param_1 = param_1 + -1;
        *(int *)(this_00 + 0x14) = *(int *)(this_00 + 0x14) + 4;
      } while (param_1 != (CTStream *)0x0);
      goto LAB_361412c5;
    }
    local_4 = DAT_36238ae8;
    piVar4 = (int *)CTStream::PeekID_t(param_1);
    if (*piVar4 != iVar8) {
      return;
    }
    local_4 = DAT_36238af0;
    local_8 = DAT_36238aec;
    CTStream::ExpectID_t(param_1,(CChunkID *)&local_8);
    iVar8 = *(int *)(param_1 + 0x14);
    *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar8 + 4);
    *(undefined4 *)(this + 0x50) = *(undefined4 *)(iVar8 + 4);
    iVar8 = *(int *)(param_1 + 0x14);
    *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar8 + 4);
    *(undefined4 *)(this + 0x54) = *(undefined4 *)(iVar8 + 4);
    iVar8 = *(int *)(param_1 + 0x14);
    piVar4 = (int *)(iVar8 + 4);
    *(int **)(param_1 + 0x14) = piVar4;
    pCVar1 = (CTStream *)*piVar4;
    *(int *)(param_1 + 0x14) = iVar8 + 8;
    param_1 = pCVar1;
    if ((int)pCVar1 < 1) {
      return;
    }
    do {
      pCVar5 = (CBrushShadowLayer *)FUN_361bf99c(0x38);
      if (pCVar5 == (CBrushShadowLayer *)0x0) {
        puVar6 = (uint *)0x0;
      }
      else {
        puVar6 = (uint *)CBrushShadowLayer::CBrushShadowLayer(pCVar5);
      }
      puVar6[0xd] = 0x12345678;
      CListHead::AddTail((CListHead *)(this + 0x90),(CListNode *)(puVar6 + 1));
      puVar6[5] = (uint)this;
      puVar6[6] = 0;
      *puVar6 = **(uint **)(this_00 + 0x14);
      iVar8 = *(int *)(this_00 + 0x14);
      *(uint **)(this_00 + 0x14) = (uint *)(iVar8 + 4);
      puVar6[0xb] = *(uint *)(iVar8 + 4);
      *(int *)(this_00 + 0x14) = *(int *)(this_00 + 0x14) + 4;
      if (puVar6[0xb] == 0) {
        bVar3 = true;
        puVar6[0xc] = 0;
      }
      else {
        iVar8 = puVar6[0xb] + 7;
        uVar9 = (int)(iVar8 + (iVar8 >> 0x1f & 7U)) >> 3;
        local_8 = uVar9;
        puVar7 = AllocMemory(uVar9);
        puVar6[0xc] = (uint)puVar7;
        puVar11 = *(undefined4 **)(this_00 + 0x14);
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *puVar7 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar7 = puVar7 + 1;
        }
        for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined1 *)puVar7 = *(undefined1 *)puVar11;
          puVar11 = (undefined4 *)((int)puVar11 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        *(uint *)(this_00 + 0x14) = *(int *)(this_00 + 0x14) + uVar9;
      }
      puVar6[7] = **(uint **)(this_00 + 0x14);
      iVar8 = *(int *)(this_00 + 0x14);
      *(uint **)(this_00 + 0x14) = (uint *)(iVar8 + 4);
      puVar6[8] = *(uint *)(iVar8 + 4);
      iVar8 = *(int *)(this_00 + 0x14);
      *(uint **)(this_00 + 0x14) = (uint *)(iVar8 + 4);
      puVar6[9] = *(uint *)(iVar8 + 4);
      iVar8 = *(int *)(this_00 + 0x14);
      *(uint **)(this_00 + 0x14) = (uint *)(iVar8 + 4);
      puVar6[10] = *(uint *)(iVar8 + 4);
      *(int *)(this_00 + 0x14) = *(int *)(this_00 + 0x14) + 4;
      uVar10 = *puVar6;
      if ((((uVar10 & 1) != 0) && (puVar6[0xc] == 0)) && ((uVar10 & 0xc) == 0)) {
        *puVar6 = uVar10 | 8;
      }
      param_1 = param_1 + -1;
    } while (param_1 != (CTStream *)0x0);
  }
  if (!bVar3) {
    return;
  }
LAB_361412c5:
  CListHead::AddTail((CListHead *)(*(int *)(DAT_362cbf0c + 0x34) + 0x28),(CListNode *)(this + 0x88))
  ;
  return;
}

