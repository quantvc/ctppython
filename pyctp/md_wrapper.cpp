#include "MdApi.h"
#include "api_struct.h"

MySpiWrapper::MySpiWrapper(PyObject * parent): CThostFtdcMdSpi() {
    py_spi = parent;
    Py_INCREF(py_spi);
}


void MySpiWrapper::OnFrontConnected() {
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    Py_Initialize();
    if (!PyObject_CallMethod(py_spi, "OnFrontConnected", NULL)) {
        PyErr_Print();
    }
    Py_Finalize();
    PyGILState_Release(gstate);
}


void MySpiWrapper::OnFrontDisconnected(int nReason) {
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    Py_Initialize();
    if (!PyObject_CallMethod(py_spi, "OnFrontDisconnected", "i", nReason)) {
        PyErr_Print();
    }
    Py_Finalize();
    PyGILState_Release(gstate);
}

void MySpiWrapper::OnHeartBeatWarning(int nTimeLapse) {
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    Py_Initialize();
    if (!PyObject_CallMethod(py_spi, "OnHeartBeatWarning", "i", nTimeLapse)) {
        PyErr_Print();
    }
    Py_Finalize();
    PyGILState_Release(gstate);
}


void MySpiWrapper::OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo,
                                  int nRequestID, bool bIsLast) {
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    Py_Initialize();
    if (!PyObject_CallMethod(py_spi, "OnRspUserLogin", "NNib", new_CThostFtdcRspUserLoginField(pRspUserLogin),
                             new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)) {
        PyErr_Print();
    }
    Py_Finalize();
    PyGILState_Release(gstate);
}


void MySpiWrapper::OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo,
                                   int nRequestID, bool bIsLast) {
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    Py_Initialize();
    if (!PyObject_CallMethod(py_spi, "OnRspUserLogout", "NNib", new_CThostFtdcUserLogoutField(pUserLogout),
                             new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)) {
        PyErr_Print();
    }
    Py_Finalize();
    PyGILState_Release(gstate);
}

void MySpiWrapper::OnRtnDepthMarketData(CThostFtdcDepthMarketDataField * pDepthMarketData) {
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    Py_Initialize();
    if (!PyObject_CallMethod(py_spi, "OnRtnDepthMarketData", "N",
                             new_CThostFtdcDepthMarketDataField(pDepthMarketData))) {
        PyErr_Print();
    }
    Py_Finalize();
    PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument,
                                      CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    Py_Initialize();
    if (!PyObject_CallMethod(py_spi, "OnRspSubMarketData", "NNib",
                             new_CThostFtdcSpecificInstrumentField(pSpecificInstrument),
                             new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)) {
        PyErr_Print();
    }
    Py_Finalize();
    PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspUnSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument,
                                        CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    Py_Initialize();
    if (!PyObject_CallMethod(py_spi, "OnRspUnSubMarketData", "NNib",
                             new_CThostFtdcSpecificInstrumentField(pSpecificInstrument),
                             new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)) {
        PyErr_Print();
    }
    Py_Finalize();
    PyGILState_Release(gstate);
}


void MySpiWrapper::OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    Py_Initialize();
    if (!PyObject_CallMethod(py_spi, "OnRspError", "Nib", new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)) {
        PyErr_Print();
    }
    Py_Finalize();
    PyGILState_Release(gstate);
}


void MySpiWrapper::OnRspSubForQuoteRsp(CThostFtdcSpecificInstrumentField *pSpecificInstrument,
                                       CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {

    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    Py_Initialize();
    if (!PyObject_CallMethod(py_spi, "OnRspSubForQuoteRsp", "NNib",
                             new_CThostFtdcSpecificInstrumentField(pSpecificInstrument),
                             new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)) {
        PyErr_Print();
    }
    Py_Finalize();
    PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspUnSubForQuoteRsp(CThostFtdcSpecificInstrumentField *pSpecificInstrument,
                                         CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {

    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    Py_Initialize();
    if (!PyObject_CallMethod(py_spi, "OnRspUnSubForQuoteRsp", "NNib",
                             new_CThostFtdcSpecificInstrumentField(pSpecificInstrument),
                             new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)) {
        PyErr_Print();
    }
    Py_Finalize();
    PyGILState_Release(gstate);

}

void MySpiWrapper::OnRtnForQuoteRsp(CThostFtdcForQuoteRspField * pForQuoteRsp) {
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    Py_Initialize();
    if (!PyObject_CallMethod(py_spi, "OnRtnForQuoteRsp", "N", new_CThostFtdcForQuoteRspField(pForQuoteRsp))) {
        PyErr_Print();
    }
    Py_Finalize();

    PyGILState_Release(gstate);

}





