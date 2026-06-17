
/* void __cdecl TR_DiscardShadingInfos(class CTerrain *) */

void __cdecl TR_DiscardShadingInfos(CTerrain *param_1)

{
  CListNode *pCVar1;
  CListNode *this;
  
                    /* 0x173190  3750  ?TR_DiscardShadingInfos@@YAXPAVCTerrain@@@Z */
  this = *(CListNode **)(param_1 + 0xc);
  while (pCVar1 = *(CListNode **)this, pCVar1 != (CListNode *)0x0) {
    *(uint *)(*(int *)(this + 0x2c) + 0x10) = *(uint *)(*(int *)(this + 0x2c) + 0x10) & 0xffffffdf;
    CListNode::Remove(this);
    *(undefined4 *)(this + 8) = 0;
    this = pCVar1;
  }
  return;
}

