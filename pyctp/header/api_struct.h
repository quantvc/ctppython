#include <Python.h>
#include "ThostFtdcUserApiStruct.h"

PyObject *register_struct(PyObject * self, PyObject * args);

PyObject *new_CThostFtdcRspUserLoginField(CThostFtdcRspUserLoginField * p);
CThostFtdcRspUserLoginField *from_CThostFtdcRspUserLoginField(PyObject * p);

PyObject *new_CThostFtdcRspInfoField(CThostFtdcRspInfoField * p);
CThostFtdcRspInfoField *from_CThostFtdcRspInfoField(PyObject * p);

PyObject *new_CThostFtdcUserLogoutField(CThostFtdcUserLogoutField * p);
CThostFtdcUserLogoutField *from_CThostFtdcUserLogoutField(PyObject * p);


PyObject *new_CThostFtdcSpecificInstrumentField(CThostFtdcSpecificInstrumentField * p);
CThostFtdcSpecificInstrumentField *from_CThostFtdcSpecificInstrumentField(PyObject * p);


PyObject *new_CThostFtdcDepthMarketDataField(CThostFtdcDepthMarketDataField * p);
CThostFtdcDepthMarketDataField *from_CThostFtdcDepthMarketDataField(PyObject * p);


PyObject *new_CThostFtdcForQuoteRspField(CThostFtdcForQuoteRspField * p);
CThostFtdcForQuoteRspField *from_CThostFtdcForQuoteRspField(PyObject * p);


PyObject *new_CThostFtdcFensUserInfoField(CThostFtdcFensUserInfoField * p);
CThostFtdcFensUserInfoField *from_CThostFtdcFensUserInfoField(PyObject * p);


PyObject *new_CThostFtdcReqUserLoginField(CThostFtdcReqUserLoginField * p);
CThostFtdcReqUserLoginField *from_CThostFtdcReqUserLoginField(PyObject * p);

