
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CShadowMap::Cache(long) */

void __thiscall CShadowMap::Cache(CShadowMap *this,long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  int unaff_EBX;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long unaff_retaddr;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  
                    /* 0x923c0  1116  ?Cache@CShadowMap@@QAEXJ@Z */
  DAT_362c9a34 = 1;
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | 1;
  if (*(void **)(this + 0x34) != (void *)0x0) {
    FreeMemory(*(void **)(this + 0x34));
    *(undefined4 *)(this + 0x34) = 0;
  }
  lVar1 = GetMipmapOffset(0xf,*(int *)(this + 0x28) >> ((byte)param_1 & 0x1f),
                          *(int *)(this + 0x2c) >> ((byte)param_1 & 0x1f));
  iVar3 = *(int *)(this + 0x30);
  iVar7 = lVar1 * 4;
  iVar2 = (**(code **)(*(int *)this + 0xc))(this + 0x1c);
  if (iVar2 != 0) {
    if ((unaff_EBX != 0) && (iVar3 == 0)) {
      FreeMemory(*(void **)(this + 0x30));
    }
    *(CShadowMap **)(this + 0x30) = this + 0x1c;
    *(long *)(this + 0x3c) = param_1;
    *(int *)(this + 0x38) = iVar7;
    iVar3 = CListNode::IsLinked((CListNode *)(this + 8));
    goto joined_r0x36092521;
  }
  if ((unaff_EBX == 0) || (iVar3 != 0)) {
    pvVar4 = AllocMemory(iVar7);
    *(void **)(this + 0x30) = pvVar4;
LAB_360924e1:
    *(int *)(this + 0x38) = iVar7;
  }
  else if (param_1 < *(int *)(this + 0x3c)) {
    pvVar4 = AllocMemory(iVar7);
    uVar6 = *(uint *)(this + 0x38);
    if ((int)uVar6 < iVar7) {
      puVar8 = *(undefined4 **)(this + 0x30);
      puVar9 = (undefined4 *)
               ((int)pvVar4 +
               ((int)((iVar7 - uVar6) + ((int)(iVar7 - uVar6) >> 0x1f & 3U)) >> 2) * 4);
      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar6 = uVar6 & 3; param_1 = unaff_retaddr, uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
    }
    FreeMemory(*(void **)(this + 0x30));
    *(void **)(this + 0x30) = pvVar4;
    goto LAB_360924e1;
  }
  iVar3 = *(int *)(this + 0x3c) + -1;
  if (*(int *)(this + 0x18) <= *(int *)(this + 0x3c) + -1) {
    iVar3 = *(int *)(this + 0x18);
  }
  *(long *)(this + 0x3c) = param_1;
  if (DAT_362cce78 == 0) {
    if (DAT_362c53c4 == 0) goto LAB_3609250b;
    fVar12 = (float)((*(int *)(this + 0x2c) >> ((byte)param_1 & 0x1f)) *
                    (*(int *)(this + 0x28) >> ((byte)param_1 & 0x1f))) * 1.0 * _DAT_36227cf0;
    if (fVar12 < _DAT_3622879c) {
      fVar12 = _DAT_3622879c;
    }
    fVar12 = (fVar12 - _DAT_3622879c) * _DAT_362253ec;
    if (fVar12 <= _DAT_36227cf0) {
      fVar12 = fVar12 + fVar12;
      uVar11 = 0x7f7f0000;
      uVar10 = 0x7f0000;
    }
    else {
      fVar12 = (fVar12 - _DAT_36227cf0) + (fVar12 - _DAT_36227cf0);
      uVar11 = 0x7f000000;
      uVar10 = 0x7f7f0000;
    }
    uVar10 = LerpColor(uVar10,uVar11,fVar12);
    iVar3 = 0;
    if (0 < (int)(*(int *)(this + 0x38) + (*(int *)(this + 0x38) >> 0x1f & 3U)) >> 2) {
      do {
        *(ulong *)(*(int *)(this + 0x30) + iVar3 * 4) =
             uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(*(int *)(this + 0x38) + (*(int *)(this + 0x38) >> 0x1f & 3U)) >> 2);
    }
  }
  else {
    DAT_362c53c4 = 0;
LAB_3609250b:
    (*(code *)**(undefined4 **)this)(param_1,iVar3,0);
  }
  iVar3 = CListNode::IsLinked((CListNode *)(this + 8));
joined_r0x36092521:
  if (iVar3 == 0) {
    CListHead::AddTail((CListHead *)(_pGfx + 0xb0c),(CListNode *)(this + 8));
  }
  return;
}

