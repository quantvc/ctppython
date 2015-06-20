#include <Python.h>
#include "ThostFtdcMdApi.h"

class MySpiWrapper : public CThostFtdcMdSpi {
public:
    MySpiWrapper(PyObject *parent);

    virtual ~MySpiWrapper();

    virtual void OnFrontConnected();

    virtual void OnFrontDisconnected(int nReason);

    virtual void OnHeartBeatWarning(int nTimeLapse);

    virtual void OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo,
                                int nRequestID, bool bIsLast);

    virtual void OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo,
                                 int nRequestID, bool bIsLast);

    virtual void OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument,
                                    CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspUnSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument,
                                      CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspSubForQuoteRsp(CThostFtdcSpecificInstrumentField *pSpecificInstrument,
                                     CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspUnSubForQuoteRsp(CThostFtdcSpecificInstrumentField *pSpecificInstrument,
                                       CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRtnDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData);

    virtual void OnRtnForQuoteRsp(CThostFtdcForQuoteRspField *pForQuoteRsp);

private:
    PyObject *py_spi;
};

