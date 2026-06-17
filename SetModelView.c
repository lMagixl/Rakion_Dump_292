
/* public: void __thiscall CRenderModel::SetModelView(void) */

void __thiscall CRenderModel::SetModelView(CRenderModel *this)

{
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
                    /* 0xbc790  3528  ?SetModelView@CRenderModel@@QAEXXZ */
  if ((char)this[0xc4] < '\0') {
    (*DAT_362c4640)();
  }
  else {
    (*DAT_362c4614)();
  }
  if ((0 < DAT_362a40e4) &&
     ((*(int *)(DAT_362cabb8 + 0x7c) != 0 || (*(int *)(DAT_362cabb8 + 0x80) != 0)))) {
    if ((*(uint *)(this + 0xc4) & 0x100) == 0) {
      (*DAT_362c4618)();
    }
    else {
      (*DAT_362c4644)();
    }
  }
  uStack_40 = *(undefined4 *)(this + 0x70);
  uStack_30 = *(undefined4 *)(this + 0x74);
  uStack_20 = *(undefined4 *)(this + 0x78);
  uStack_10 = *(undefined4 *)(this + 100);
  uStack_1c = *(undefined4 *)(this + 0x84);
  uStack_3c = *(undefined4 *)(this + 0x7c);
  uStack_2c = *(undefined4 *)(this + 0x80);
  uStack_28 = *(undefined4 *)(this + 0x8c);
  uStack_c = *(undefined4 *)(this + 0x68);
  uStack_38 = *(undefined4 *)(this + 0x88);
  uStack_18 = *(undefined4 *)(this + 0x90);
  uStack_8 = *(undefined4 *)(this + 0x6c);
  uStack_34 = 0;
  uStack_24 = 0;
  uStack_14 = 0;
  uStack_4 = 0x3f800000;
  (*DAT_362c4674)(&uStack_40);
  return;
}

