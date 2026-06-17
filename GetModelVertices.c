
/* public: void __thiscall CModelInstance::GetModelVertices(class CStaticStackArray<class
   Vector<float,3> > &,class Matrix<float,3,3> &,class Vector<float,3> &,float,float) */

void __thiscall
CModelInstance::GetModelVertices
          (CModelInstance *this,CStaticStackArray<class_Vector<float,3>_> *param_1,
          Matrix<float,3,3> *param_2,Vector<float,3> *param_3,float param_4,float param_5)

{
                    /* 0x15c600  1996
                       ?GetModelVertices@CModelInstance@@QAEXAAV?$CStaticStackArray@V?$Vector@M$02@@@@AAV?$Matrix@M$02$02@@AAV?$Vector@M$02@@MM@Z
                        */
  RM_GetModelVertices(this,param_1,param_2,param_3,param_4,param_5);
  return;
}

