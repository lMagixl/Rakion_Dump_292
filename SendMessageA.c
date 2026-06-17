
/* public: void __thiscall CServer::SendMessageA(class CEntityMessage &) */

void __thiscall CServer::SendMessageA(CServer *this,CEntityMessage *param_1)

{
                    /* 0x1096c0  3346  ?SendMessageA@CServer@@QAEXAAVCEntityMessage@@@Z */
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(*(int *)(_pNetwork + 0x24) + 0x2c);
  if (*(int *)(_pNetwork + 0x874) != 0) {
    FUN_36100ae0(this + 0x1c84,(int *)param_1,1);
  }
  if ((*(int *)(this + 0x553c) != 0) && (*(int *)param_1 != 0x12)) {
    FUN_36100ae0(this + 0x3c,(int *)param_1,1);
  }
  return;
}

