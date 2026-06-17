
/* public: void __thiscall CServer::StopNetProcess(void) */

void __thiscall CServer::StopNetProcess(CServer *this)

{
                    /* 0x109730  3686  ?StopNetProcess@CServer@@QAEXXZ */
  if (*(int *)(this + 0x553c) != 0) {
    (**(code **)(*(int *)(this + 0x3c) + 4))();
    *(undefined4 *)(this + 0x553c) = 0;
  }
  return;
}

