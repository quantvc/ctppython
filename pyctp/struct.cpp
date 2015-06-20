#include "trader_struct.h"


static PyObject *mod = NULL;

PyObject *register_struct(PyObject * self, PyObject * args) {
    mod = PyTuple_GetItem(args, 0);
    Py_INCREF(Py_None);
    return Py_None;
}

PyObject *new_CThostFtdcDisseminationField(CThostFtdcDisseminationField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcDisseminationField", "hi",
                               p->SequenceSeries, p->SequenceNo);
}

CThostFtdcDisseminationField *from_CThostFtdcDisseminationField(PyObject * p) {
    CThostFtdcDisseminationField *t = (CThostFtdcDisseminationField *) calloc(1, sizeof(CThostFtdcDisseminationField));
    memset(t, 0, sizeof(CThostFtdcDisseminationField));
    t->SequenceSeries = PyInt_AsLong(PyObject_GetAttrString(p, "SequenceSeries"));
    t->SequenceNo = PyInt_AsLong(PyObject_GetAttrString(p, "SequenceNo"));

    return t;
};

PyObject *new_CThostFtdcReqUserLoginField(CThostFtdcReqUserLoginField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcReqUserLoginField", "ssssssssss",
                               p->TradingDay, p->BrokerID, p->UserID, p->Password, p->UserProductInfo,
                               p->InterfaceProductInfo, p->ProtocolInfo, p->MacAddress, p->OneTimePassword,
                               p->ClientIPAddress);
}

CThostFtdcReqUserLoginField *from_CThostFtdcReqUserLoginField(PyObject * p) {
    CThostFtdcReqUserLoginField *t = (CThostFtdcReqUserLoginField *) calloc(1, sizeof(CThostFtdcReqUserLoginField));
    memset(t, 0, sizeof(CThostFtdcReqUserLoginField));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
    strcpy(t->UserProductInfo, PyString_AsString(PyObject_GetAttrString(p, "UserProductInfo")));
    strcpy(t->InterfaceProductInfo, PyString_AsString(PyObject_GetAttrString(p, "InterfaceProductInfo")));
    strcpy(t->ProtocolInfo, PyString_AsString(PyObject_GetAttrString(p, "ProtocolInfo")));
    strcpy(t->MacAddress, PyString_AsString(PyObject_GetAttrString(p, "MacAddress")));
    strcpy(t->OneTimePassword, PyString_AsString(PyObject_GetAttrString(p, "OneTimePassword")));
    strcpy(t->ClientIPAddress, PyString_AsString(PyObject_GetAttrString(p, "ClientIPAddress")));

    return t;
};

PyObject *new_CThostFtdcRspUserLoginField(CThostFtdcRspUserLoginField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcRspUserLoginField", "sssssiissssss",
                               p->TradingDay, p->LoginTime, p->BrokerID, p->UserID, p->SystemName, p->FrontID,
                               p->SessionID, p->MaxOrderRef, p->SHFETime, p->DCETime, p->CZCETime, p->FFEXTime,
                               p->INETime);
}

CThostFtdcRspUserLoginField *from_CThostFtdcRspUserLoginField(PyObject * p) {
    CThostFtdcRspUserLoginField *t = (CThostFtdcRspUserLoginField *) calloc(1, sizeof(CThostFtdcRspUserLoginField));
    memset(t, 0, sizeof(CThostFtdcRspUserLoginField));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    strcpy(t->LoginTime, PyString_AsString(PyObject_GetAttrString(p, "LoginTime")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    strcpy(t->SystemName, PyString_AsString(PyObject_GetAttrString(p, "SystemName")));
    t->FrontID = PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    strcpy(t->MaxOrderRef, PyString_AsString(PyObject_GetAttrString(p, "MaxOrderRef")));
    strcpy(t->SHFETime, PyString_AsString(PyObject_GetAttrString(p, "SHFETime")));
    strcpy(t->DCETime, PyString_AsString(PyObject_GetAttrString(p, "DCETime")));
    strcpy(t->CZCETime, PyString_AsString(PyObject_GetAttrString(p, "CZCETime")));
    strcpy(t->FFEXTime, PyString_AsString(PyObject_GetAttrString(p, "FFEXTime")));
    strcpy(t->INETime, PyString_AsString(PyObject_GetAttrString(p, "INETime")));

    return t;
};

PyObject *new_CThostFtdcUserLogoutField(CThostFtdcUserLogoutField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcUserLogoutField", "ss",
                               p->BrokerID, p->UserID);
}

CThostFtdcUserLogoutField *from_CThostFtdcUserLogoutField(PyObject * p) {
    CThostFtdcUserLogoutField *t = (CThostFtdcUserLogoutField *) calloc(1, sizeof(CThostFtdcUserLogoutField));
    memset(t, 0, sizeof(CThostFtdcUserLogoutField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));

    return t;
};

PyObject *new_CThostFtdcForceUserLogoutField(CThostFtdcForceUserLogoutField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcForceUserLogoutField", "ss",
                               p->BrokerID, p->UserID);
}

CThostFtdcForceUserLogoutField *from_CThostFtdcForceUserLogoutField(PyObject * p) {
    CThostFtdcForceUserLogoutField *t = (CThostFtdcForceUserLogoutField *) calloc(1,
                                                                                  sizeof(CThostFtdcForceUserLogoutField));
    memset(t, 0, sizeof(CThostFtdcForceUserLogoutField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));

    return t;
};

PyObject *new_CThostFtdcReqAuthenticateField(CThostFtdcReqAuthenticateField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcReqAuthenticateField", "ssss",
                               p->BrokerID, p->UserID, p->UserProductInfo, p->AuthCode);
}

CThostFtdcReqAuthenticateField *from_CThostFtdcReqAuthenticateField(PyObject * p) {
    CThostFtdcReqAuthenticateField *t = (CThostFtdcReqAuthenticateField *) calloc(1,
                                                                                  sizeof(CThostFtdcReqAuthenticateField));
    memset(t, 0, sizeof(CThostFtdcReqAuthenticateField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    strcpy(t->UserProductInfo, PyString_AsString(PyObject_GetAttrString(p, "UserProductInfo")));
    strcpy(t->AuthCode, PyString_AsString(PyObject_GetAttrString(p, "AuthCode")));

    return t;
};

PyObject *new_CThostFtdcRspAuthenticateField(CThostFtdcRspAuthenticateField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcRspAuthenticateField", "sss",
                               p->BrokerID, p->UserID, p->UserProductInfo);
}

CThostFtdcRspAuthenticateField *from_CThostFtdcRspAuthenticateField(PyObject * p) {
    CThostFtdcRspAuthenticateField *t = (CThostFtdcRspAuthenticateField *) calloc(1,
                                                                                  sizeof(CThostFtdcRspAuthenticateField));
    memset(t, 0, sizeof(CThostFtdcRspAuthenticateField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    strcpy(t->UserProductInfo, PyString_AsString(PyObject_GetAttrString(p, "UserProductInfo")));

    return t;
};

PyObject *new_CThostFtdcAuthenticationInfoField(CThostFtdcAuthenticationInfoField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcAuthenticationInfoField", "ssssi",
                               p->BrokerID, p->UserID, p->UserProductInfo, p->AuthInfo, p->IsResult);
}

CThostFtdcAuthenticationInfoField *from_CThostFtdcAuthenticationInfoField(PyObject * p) {
    CThostFtdcAuthenticationInfoField *t = (CThostFtdcAuthenticationInfoField *) calloc(1,
                                                                                        sizeof(CThostFtdcAuthenticationInfoField));
    memset(t, 0, sizeof(CThostFtdcAuthenticationInfoField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    strcpy(t->UserProductInfo, PyString_AsString(PyObject_GetAttrString(p, "UserProductInfo")));
    strcpy(t->AuthInfo, PyString_AsString(PyObject_GetAttrString(p, "AuthInfo")));
    t->IsResult = PyInt_AsLong(PyObject_GetAttrString(p, "IsResult"));

    return t;
};

PyObject *new_CThostFtdcTransferHeaderField(CThostFtdcTransferHeaderField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcTransferHeaderField", "sssssssssssii",
                               p->Version, p->TradeCode, p->TradeDate, p->TradeTime, p->TradeSerial, p->FutureID,
                               p->BankID, p->BankBrchID, p->OperNo, p->DeviceID, p->RecordNum, p->SessionID,
                               p->RequestID);
}

CThostFtdcTransferHeaderField *from_CThostFtdcTransferHeaderField(PyObject * p) {
    CThostFtdcTransferHeaderField *t = (CThostFtdcTransferHeaderField *) calloc(1,
                                                                                sizeof(CThostFtdcTransferHeaderField));
    memset(t, 0, sizeof(CThostFtdcTransferHeaderField));
    strcpy(t->Version, PyString_AsString(PyObject_GetAttrString(p, "Version")));
    strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
    strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
    strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
    strcpy(t->TradeSerial, PyString_AsString(PyObject_GetAttrString(p, "TradeSerial")));
    strcpy(t->FutureID, PyString_AsString(PyObject_GetAttrString(p, "FutureID")));
    strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
    strcpy(t->BankBrchID, PyString_AsString(PyObject_GetAttrString(p, "BankBrchID")));
    strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
    strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
    strcpy(t->RecordNum, PyString_AsString(PyObject_GetAttrString(p, "RecordNum")));
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    t->RequestID = PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));

    return t;
};

PyObject *new_CThostFtdcTransferBankToFutureReqField(CThostFtdcTransferBankToFutureReqField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcTransferBankToFutureReqField", "scsdds",
                               p->FutureAccount, p->FuturePwdFlag, p->FutureAccPwd, p->TradeAmt, p->CustFee,
                               p->CurrencyCode);
}

CThostFtdcTransferBankToFutureReqField *from_CThostFtdcTransferBankToFutureReqField(PyObject * p) {
    CThostFtdcTransferBankToFutureReqField *t = (CThostFtdcTransferBankToFutureReqField *) calloc(1,
                                                                                                  sizeof(CThostFtdcTransferBankToFutureReqField));
    memset(t, 0, sizeof(CThostFtdcTransferBankToFutureReqField));
    strcpy(t->FutureAccount, PyString_AsString(PyObject_GetAttrString(p, "FutureAccount")));
    t->FuturePwdFlag = PyString_AsString(PyObject_GetAttrString(p, "FuturePwdFlag"))[0];
    strcpy(t->FutureAccPwd, PyString_AsString(PyObject_GetAttrString(p, "FutureAccPwd")));
    t->TradeAmt = PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmt"));
    t->CustFee = PyFloat_AsDouble(PyObject_GetAttrString(p, "CustFee"));
    strcpy(t->CurrencyCode, PyString_AsString(PyObject_GetAttrString(p, "CurrencyCode")));

    return t;
};

PyObject *new_CThostFtdcTransferBankToFutureRspField(CThostFtdcTransferBankToFutureRspField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcTransferBankToFutureRspField", "sssdds",
                               p->RetCode, p->RetInfo, p->FutureAccount, p->TradeAmt, p->CustFee, p->CurrencyCode);
}

CThostFtdcTransferBankToFutureRspField *from_CThostFtdcTransferBankToFutureRspField(PyObject * p) {
    CThostFtdcTransferBankToFutureRspField *t = (CThostFtdcTransferBankToFutureRspField *) calloc(1,
                                                                                                  sizeof(CThostFtdcTransferBankToFutureRspField));
    memset(t, 0, sizeof(CThostFtdcTransferBankToFutureRspField));
    strcpy(t->RetCode, PyString_AsString(PyObject_GetAttrString(p, "RetCode")));
    strcpy(t->RetInfo, PyString_AsString(PyObject_GetAttrString(p, "RetInfo")));
    strcpy(t->FutureAccount, PyString_AsString(PyObject_GetAttrString(p, "FutureAccount")));
    t->TradeAmt = PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmt"));
    t->CustFee = PyFloat_AsDouble(PyObject_GetAttrString(p, "CustFee"));
    strcpy(t->CurrencyCode, PyString_AsString(PyObject_GetAttrString(p, "CurrencyCode")));

    return t;
};

PyObject *new_CThostFtdcTransferFutureToBankReqField(CThostFtdcTransferFutureToBankReqField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcTransferFutureToBankReqField", "scsdds",
                               p->FutureAccount, p->FuturePwdFlag, p->FutureAccPwd, p->TradeAmt, p->CustFee,
                               p->CurrencyCode);
}

CThostFtdcTransferFutureToBankReqField *from_CThostFtdcTransferFutureToBankReqField(PyObject * p) {
    CThostFtdcTransferFutureToBankReqField *t = (CThostFtdcTransferFutureToBankReqField *) calloc(1,
                                                                                                  sizeof(CThostFtdcTransferFutureToBankReqField));
    memset(t, 0, sizeof(CThostFtdcTransferFutureToBankReqField));
    strcpy(t->FutureAccount, PyString_AsString(PyObject_GetAttrString(p, "FutureAccount")));
    t->FuturePwdFlag = PyString_AsString(PyObject_GetAttrString(p, "FuturePwdFlag"))[0];
    strcpy(t->FutureAccPwd, PyString_AsString(PyObject_GetAttrString(p, "FutureAccPwd")));
    t->TradeAmt = PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmt"));
    t->CustFee = PyFloat_AsDouble(PyObject_GetAttrString(p, "CustFee"));
    strcpy(t->CurrencyCode, PyString_AsString(PyObject_GetAttrString(p, "CurrencyCode")));

    return t;
};

PyObject *new_CThostFtdcTransferFutureToBankRspField(CThostFtdcTransferFutureToBankRspField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcTransferFutureToBankRspField", "sssdds",
                               p->RetCode, p->RetInfo, p->FutureAccount, p->TradeAmt, p->CustFee, p->CurrencyCode);
}

CThostFtdcTransferFutureToBankRspField *from_CThostFtdcTransferFutureToBankRspField(PyObject * p) {
    CThostFtdcTransferFutureToBankRspField *t = (CThostFtdcTransferFutureToBankRspField *) calloc(1,
                                                                                                  sizeof(CThostFtdcTransferFutureToBankRspField));
    memset(t, 0, sizeof(CThostFtdcTransferFutureToBankRspField));
    strcpy(t->RetCode, PyString_AsString(PyObject_GetAttrString(p, "RetCode")));
    strcpy(t->RetInfo, PyString_AsString(PyObject_GetAttrString(p, "RetInfo")));
    strcpy(t->FutureAccount, PyString_AsString(PyObject_GetAttrString(p, "FutureAccount")));
    t->TradeAmt = PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmt"));
    t->CustFee = PyFloat_AsDouble(PyObject_GetAttrString(p, "CustFee"));
    strcpy(t->CurrencyCode, PyString_AsString(PyObject_GetAttrString(p, "CurrencyCode")));

    return t;
};

PyObject *new_CThostFtdcTransferQryBankReqField(CThostFtdcTransferQryBankReqField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcTransferQryBankReqField", "scss",
                               p->FutureAccount, p->FuturePwdFlag, p->FutureAccPwd, p->CurrencyCode);
}

CThostFtdcTransferQryBankReqField *from_CThostFtdcTransferQryBankReqField(PyObject * p) {
    CThostFtdcTransferQryBankReqField *t = (CThostFtdcTransferQryBankReqField *) calloc(1,
                                                                                        sizeof(CThostFtdcTransferQryBankReqField));
    memset(t, 0, sizeof(CThostFtdcTransferQryBankReqField));
    strcpy(t->FutureAccount, PyString_AsString(PyObject_GetAttrString(p, "FutureAccount")));
    t->FuturePwdFlag = PyString_AsString(PyObject_GetAttrString(p, "FuturePwdFlag"))[0];
    strcpy(t->FutureAccPwd, PyString_AsString(PyObject_GetAttrString(p, "FutureAccPwd")));
    strcpy(t->CurrencyCode, PyString_AsString(PyObject_GetAttrString(p, "CurrencyCode")));

    return t;
};

PyObject *new_CThostFtdcTransferQryBankRspField(CThostFtdcTransferQryBankRspField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcTransferQryBankRspField", "sssddds",
                               p->RetCode, p->RetInfo, p->FutureAccount, p->TradeAmt, p->UseAmt, p->FetchAmt,
                               p->CurrencyCode);
}

CThostFtdcTransferQryBankRspField *from_CThostFtdcTransferQryBankRspField(PyObject * p) {
    CThostFtdcTransferQryBankRspField *t = (CThostFtdcTransferQryBankRspField *) calloc(1,
                                                                                        sizeof(CThostFtdcTransferQryBankRspField));
    memset(t, 0, sizeof(CThostFtdcTransferQryBankRspField));
    strcpy(t->RetCode, PyString_AsString(PyObject_GetAttrString(p, "RetCode")));
    strcpy(t->RetInfo, PyString_AsString(PyObject_GetAttrString(p, "RetInfo")));
    strcpy(t->FutureAccount, PyString_AsString(PyObject_GetAttrString(p, "FutureAccount")));
    t->TradeAmt = PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmt"));
    t->UseAmt = PyFloat_AsDouble(PyObject_GetAttrString(p, "UseAmt"));
    t->FetchAmt = PyFloat_AsDouble(PyObject_GetAttrString(p, "FetchAmt"));
    strcpy(t->CurrencyCode, PyString_AsString(PyObject_GetAttrString(p, "CurrencyCode")));

    return t;
};

PyObject *new_CThostFtdcTransferQryDetailReqField(CThostFtdcTransferQryDetailReqField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcTransferQryDetailReqField", "s",
                               p->FutureAccount);
}

CThostFtdcTransferQryDetailReqField *from_CThostFtdcTransferQryDetailReqField(PyObject * p) {
    CThostFtdcTransferQryDetailReqField *t = (CThostFtdcTransferQryDetailReqField *) calloc(1,
                                                                                            sizeof(CThostFtdcTransferQryDetailReqField));
    memset(t, 0, sizeof(CThostFtdcTransferQryDetailReqField));
    strcpy(t->FutureAccount, PyString_AsString(PyObject_GetAttrString(p, "FutureAccount")));

    return t;
};

PyObject *new_CThostFtdcTransferQryDetailRspField(CThostFtdcTransferQryDetailRspField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcTransferQryDetailRspField", "sssississsssdc",
                               p->TradeDate, p->TradeTime, p->TradeCode, p->FutureSerial, p->FutureID, p->FutureAccount,
                               p->BankSerial, p->BankID, p->BankBrchID, p->BankAccount, p->CertCode, p->CurrencyCode,
                               p->TxAmount, p->Flag);
}

CThostFtdcTransferQryDetailRspField *from_CThostFtdcTransferQryDetailRspField(PyObject * p) {
    CThostFtdcTransferQryDetailRspField *t = (CThostFtdcTransferQryDetailRspField *) calloc(1,
                                                                                            sizeof(CThostFtdcTransferQryDetailRspField));
    memset(t, 0, sizeof(CThostFtdcTransferQryDetailRspField));
    strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
    strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
    strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
    t->FutureSerial = PyInt_AsLong(PyObject_GetAttrString(p, "FutureSerial"));
    strcpy(t->FutureID, PyString_AsString(PyObject_GetAttrString(p, "FutureID")));
    strcpy(t->FutureAccount, PyString_AsString(PyObject_GetAttrString(p, "FutureAccount")));
    t->BankSerial = PyInt_AsLong(PyObject_GetAttrString(p, "BankSerial"));
    strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
    strcpy(t->BankBrchID, PyString_AsString(PyObject_GetAttrString(p, "BankBrchID")));
    strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
    strcpy(t->CertCode, PyString_AsString(PyObject_GetAttrString(p, "CertCode")));
    strcpy(t->CurrencyCode, PyString_AsString(PyObject_GetAttrString(p, "CurrencyCode")));
    t->TxAmount = PyFloat_AsDouble(PyObject_GetAttrString(p, "TxAmount"));
    t->Flag = PyString_AsString(PyObject_GetAttrString(p, "Flag"))[0];

    return t;
};

PyObject *new_CThostFtdcRspInfoField(CThostFtdcRspInfoField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcRspInfoField", "is",
                               p->ErrorID, p->ErrorMsg);
}

CThostFtdcRspInfoField *from_CThostFtdcRspInfoField(PyObject * p) {
    CThostFtdcRspInfoField *t = (CThostFtdcRspInfoField *) calloc(1, sizeof(CThostFtdcRspInfoField));
    memset(t, 0, sizeof(CThostFtdcRspInfoField));
    t->ErrorID = PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
    strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));

    return t;
};

PyObject *new_CThostFtdcExchangeField(CThostFtdcExchangeField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcExchangeField", "ssc",
                               p->ExchangeID, p->ExchangeName, p->ExchangeProperty);
}

CThostFtdcExchangeField *from_CThostFtdcExchangeField(PyObject * p) {
    CThostFtdcExchangeField *t = (CThostFtdcExchangeField *) calloc(1, sizeof(CThostFtdcExchangeField));
    memset(t, 0, sizeof(CThostFtdcExchangeField));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->ExchangeName, PyString_AsString(PyObject_GetAttrString(p, "ExchangeName")));
    t->ExchangeProperty = PyString_AsString(PyObject_GetAttrString(p, "ExchangeProperty"))[0];

    return t;
};

PyObject *new_CThostFtdcProductField(CThostFtdcProductField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcProductField", "ssscidiiiicccscsd",
                               p->ProductID, p->ProductName, p->ExchangeID, p->ProductClass, p->VolumeMultiple,
                               p->PriceTick, p->MaxMarketOrderVolume, p->MinMarketOrderVolume, p->MaxLimitOrderVolume,
                               p->MinLimitOrderVolume, p->PositionType, p->PositionDateType, p->CloseDealType,
                               p->TradeCurrencyID, p->MortgageFundUseRange, p->ExchangeProductID,
                               p->UnderlyingMultiple);
}

CThostFtdcProductField *from_CThostFtdcProductField(PyObject * p) {
    CThostFtdcProductField *t = (CThostFtdcProductField *) calloc(1, sizeof(CThostFtdcProductField));
    memset(t, 0, sizeof(CThostFtdcProductField));
    strcpy(t->ProductID, PyString_AsString(PyObject_GetAttrString(p, "ProductID")));
    strcpy(t->ProductName, PyString_AsString(PyObject_GetAttrString(p, "ProductName")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    t->ProductClass = PyString_AsString(PyObject_GetAttrString(p, "ProductClass"))[0];
    t->VolumeMultiple = PyInt_AsLong(PyObject_GetAttrString(p, "VolumeMultiple"));
    t->PriceTick = PyFloat_AsDouble(PyObject_GetAttrString(p, "PriceTick"));
    t->MaxMarketOrderVolume = PyInt_AsLong(PyObject_GetAttrString(p, "MaxMarketOrderVolume"));
    t->MinMarketOrderVolume = PyInt_AsLong(PyObject_GetAttrString(p, "MinMarketOrderVolume"));
    t->MaxLimitOrderVolume = PyInt_AsLong(PyObject_GetAttrString(p, "MaxLimitOrderVolume"));
    t->MinLimitOrderVolume = PyInt_AsLong(PyObject_GetAttrString(p, "MinLimitOrderVolume"));
    t->PositionType = PyString_AsString(PyObject_GetAttrString(p, "PositionType"))[0];
    t->PositionDateType = PyString_AsString(PyObject_GetAttrString(p, "PositionDateType"))[0];
    t->CloseDealType = PyString_AsString(PyObject_GetAttrString(p, "CloseDealType"))[0];
    strcpy(t->TradeCurrencyID, PyString_AsString(PyObject_GetAttrString(p, "TradeCurrencyID")));
    t->MortgageFundUseRange = PyString_AsString(PyObject_GetAttrString(p, "MortgageFundUseRange"))[0];
    strcpy(t->ExchangeProductID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeProductID")));
    t->UnderlyingMultiple = PyFloat_AsDouble(PyObject_GetAttrString(p, "UnderlyingMultiple"));

    return t;
};

PyObject *new_CThostFtdcInstrumentField(CThostFtdcInstrumentField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcInstrumentField", "sssssciiiiiiidsssssciccddcsdcdc",
                               p->InstrumentID, p->ExchangeID, p->InstrumentName, p->ExchangeInstID, p->ProductID,
                               p->ProductClass, p->DeliveryYear, p->DeliveryMonth, p->MaxMarketOrderVolume,
                               p->MinMarketOrderVolume, p->MaxLimitOrderVolume, p->MinLimitOrderVolume,
                               p->VolumeMultiple, p->PriceTick, p->CreateDate, p->OpenDate, p->ExpireDate,
                               p->StartDelivDate, p->EndDelivDate, p->InstLifePhase, p->IsTrading, p->PositionType,
                               p->PositionDateType, p->LongMarginRatio, p->ShortMarginRatio, p->MaxMarginSideAlgorithm,
                               p->UnderlyingInstrID, p->StrikePrice, p->OptionsType, p->UnderlyingMultiple,
                               p->CombinationType);
}

CThostFtdcInstrumentField *from_CThostFtdcInstrumentField(PyObject * p) {
    CThostFtdcInstrumentField *t = (CThostFtdcInstrumentField *) calloc(1, sizeof(CThostFtdcInstrumentField));
    memset(t, 0, sizeof(CThostFtdcInstrumentField));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->InstrumentName, PyString_AsString(PyObject_GetAttrString(p, "InstrumentName")));
    strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
    strcpy(t->ProductID, PyString_AsString(PyObject_GetAttrString(p, "ProductID")));
    t->ProductClass = PyString_AsString(PyObject_GetAttrString(p, "ProductClass"))[0];
    t->DeliveryYear = PyInt_AsLong(PyObject_GetAttrString(p, "DeliveryYear"));
    t->DeliveryMonth = PyInt_AsLong(PyObject_GetAttrString(p, "DeliveryMonth"));
    t->MaxMarketOrderVolume = PyInt_AsLong(PyObject_GetAttrString(p, "MaxMarketOrderVolume"));
    t->MinMarketOrderVolume = PyInt_AsLong(PyObject_GetAttrString(p, "MinMarketOrderVolume"));
    t->MaxLimitOrderVolume = PyInt_AsLong(PyObject_GetAttrString(p, "MaxLimitOrderVolume"));
    t->MinLimitOrderVolume = PyInt_AsLong(PyObject_GetAttrString(p, "MinLimitOrderVolume"));
    t->VolumeMultiple = PyInt_AsLong(PyObject_GetAttrString(p, "VolumeMultiple"));
    t->PriceTick = PyFloat_AsDouble(PyObject_GetAttrString(p, "PriceTick"));
    strcpy(t->CreateDate, PyString_AsString(PyObject_GetAttrString(p, "CreateDate")));
    strcpy(t->OpenDate, PyString_AsString(PyObject_GetAttrString(p, "OpenDate")));
    strcpy(t->ExpireDate, PyString_AsString(PyObject_GetAttrString(p, "ExpireDate")));
    strcpy(t->StartDelivDate, PyString_AsString(PyObject_GetAttrString(p, "StartDelivDate")));
    strcpy(t->EndDelivDate, PyString_AsString(PyObject_GetAttrString(p, "EndDelivDate")));
    t->InstLifePhase = PyString_AsString(PyObject_GetAttrString(p, "InstLifePhase"))[0];
    t->IsTrading = PyInt_AsLong(PyObject_GetAttrString(p, "IsTrading"));
    t->PositionType = PyString_AsString(PyObject_GetAttrString(p, "PositionType"))[0];
    t->PositionDateType = PyString_AsString(PyObject_GetAttrString(p, "PositionDateType"))[0];
    t->LongMarginRatio = PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatio"));
    t->ShortMarginRatio = PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatio"));
    t->MaxMarginSideAlgorithm = PyString_AsString(PyObject_GetAttrString(p, "MaxMarginSideAlgorithm"))[0];
    strcpy(t->UnderlyingInstrID, PyString_AsString(PyObject_GetAttrString(p, "UnderlyingInstrID")));
    t->StrikePrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "StrikePrice"));
    t->OptionsType = PyString_AsString(PyObject_GetAttrString(p, "OptionsType"))[0];
    t->UnderlyingMultiple = PyFloat_AsDouble(PyObject_GetAttrString(p, "UnderlyingMultiple"));
    t->CombinationType = PyString_AsString(PyObject_GetAttrString(p, "CombinationType"))[0];

    return t;
};

PyObject *new_CThostFtdcBrokerField(CThostFtdcBrokerField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcBrokerField", "sssi",
                               p->BrokerID, p->BrokerAbbr, p->BrokerName, p->IsActive);
}

CThostFtdcBrokerField *from_CThostFtdcBrokerField(PyObject * p) {
    CThostFtdcBrokerField *t = (CThostFtdcBrokerField *) calloc(1, sizeof(CThostFtdcBrokerField));
    memset(t, 0, sizeof(CThostFtdcBrokerField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->BrokerAbbr, PyString_AsString(PyObject_GetAttrString(p, "BrokerAbbr")));
    strcpy(t->BrokerName, PyString_AsString(PyObject_GetAttrString(p, "BrokerName")));
    t->IsActive = PyInt_AsLong(PyObject_GetAttrString(p, "IsActive"));

    return t;
};

PyObject *new_CThostFtdcTraderField(CThostFtdcTraderField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcTraderField", "ssssis",
                               p->ExchangeID, p->TraderID, p->ParticipantID, p->Password, p->InstallCount, p->BrokerID);
}

CThostFtdcTraderField *from_CThostFtdcTraderField(PyObject * p) {
    CThostFtdcTraderField *t = (CThostFtdcTraderField *) calloc(1, sizeof(CThostFtdcTraderField));
    memset(t, 0, sizeof(CThostFtdcTraderField));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
    strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
    strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
    t->InstallCount = PyInt_AsLong(PyObject_GetAttrString(p, "InstallCount"));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

    return t;
};

PyObject *new_CThostFtdcInvestorField(CThostFtdcInvestorField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcInvestorField", "sssscsissssss",
                               p->InvestorID, p->BrokerID, p->InvestorGroupID, p->InvestorName, p->IdentifiedCardType,
                               p->IdentifiedCardNo, p->IsActive, p->Telephone, p->Address, p->OpenDate, p->Mobile,
                               p->CommModelID, p->MarginModelID);
}

CThostFtdcInvestorField *from_CThostFtdcInvestorField(PyObject * p) {
    CThostFtdcInvestorField *t = (CThostFtdcInvestorField *) calloc(1, sizeof(CThostFtdcInvestorField));
    memset(t, 0, sizeof(CThostFtdcInvestorField));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorGroupID, PyString_AsString(PyObject_GetAttrString(p, "InvestorGroupID")));
    strcpy(t->InvestorName, PyString_AsString(PyObject_GetAttrString(p, "InvestorName")));
    t->IdentifiedCardType = PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardType"))[0];
    strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
    t->IsActive = PyInt_AsLong(PyObject_GetAttrString(p, "IsActive"));
    strcpy(t->Telephone, PyString_AsString(PyObject_GetAttrString(p, "Telephone")));
    strcpy(t->Address, PyString_AsString(PyObject_GetAttrString(p, "Address")));
    strcpy(t->OpenDate, PyString_AsString(PyObject_GetAttrString(p, "OpenDate")));
    strcpy(t->Mobile, PyString_AsString(PyObject_GetAttrString(p, "Mobile")));
    strcpy(t->CommModelID, PyString_AsString(PyObject_GetAttrString(p, "CommModelID")));
    strcpy(t->MarginModelID, PyString_AsString(PyObject_GetAttrString(p, "MarginModelID")));

    return t;
};

PyObject *new_CThostFtdcTradingCodeField(CThostFtdcTradingCodeField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcTradingCodeField", "ssssic",
                               p->InvestorID, p->BrokerID, p->ExchangeID, p->ClientID, p->IsActive, p->ClientIDType);
}

CThostFtdcTradingCodeField *from_CThostFtdcTradingCodeField(PyObject * p) {
    CThostFtdcTradingCodeField *t = (CThostFtdcTradingCodeField *) calloc(1, sizeof(CThostFtdcTradingCodeField));
    memset(t, 0, sizeof(CThostFtdcTradingCodeField));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
    t->IsActive = PyInt_AsLong(PyObject_GetAttrString(p, "IsActive"));
    t->ClientIDType = PyString_AsString(PyObject_GetAttrString(p, "ClientIDType"))[0];

    return t;
};

PyObject *new_CThostFtdcPartBrokerField(CThostFtdcPartBrokerField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcPartBrokerField", "sssi",
                               p->BrokerID, p->ExchangeID, p->ParticipantID, p->IsActive);
}

CThostFtdcPartBrokerField *from_CThostFtdcPartBrokerField(PyObject * p) {
    CThostFtdcPartBrokerField *t = (CThostFtdcPartBrokerField *) calloc(1, sizeof(CThostFtdcPartBrokerField));
    memset(t, 0, sizeof(CThostFtdcPartBrokerField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
    t->IsActive = PyInt_AsLong(PyObject_GetAttrString(p, "IsActive"));

    return t;
};

PyObject *new_CThostFtdcSuperUserField(CThostFtdcSuperUserField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcSuperUserField", "sssi",
                               p->UserID, p->UserName, p->Password, p->IsActive);
}

CThostFtdcSuperUserField *from_CThostFtdcSuperUserField(PyObject * p) {
    CThostFtdcSuperUserField *t = (CThostFtdcSuperUserField *) calloc(1, sizeof(CThostFtdcSuperUserField));
    memset(t, 0, sizeof(CThostFtdcSuperUserField));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    strcpy(t->UserName, PyString_AsString(PyObject_GetAttrString(p, "UserName")));
    strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
    t->IsActive = PyInt_AsLong(PyObject_GetAttrString(p, "IsActive"));

    return t;
};

PyObject *new_CThostFtdcSuperUserFunctionField(CThostFtdcSuperUserFunctionField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcSuperUserFunctionField", "sc",
                               p->UserID, p->FunctionCode);
}

CThostFtdcSuperUserFunctionField *from_CThostFtdcSuperUserFunctionField(PyObject * p) {
    CThostFtdcSuperUserFunctionField *t = (CThostFtdcSuperUserFunctionField *) calloc(1,
                                                                                      sizeof(CThostFtdcSuperUserFunctionField));
    memset(t, 0, sizeof(CThostFtdcSuperUserFunctionField));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    t->FunctionCode = PyString_AsString(PyObject_GetAttrString(p, "FunctionCode"))[0];

    return t;
};

PyObject *new_CThostFtdcInvestorGroupField(CThostFtdcInvestorGroupField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcInvestorGroupField", "sss",
                               p->BrokerID, p->InvestorGroupID, p->InvestorGroupName);
}

CThostFtdcInvestorGroupField *from_CThostFtdcInvestorGroupField(PyObject * p) {
    CThostFtdcInvestorGroupField *t = (CThostFtdcInvestorGroupField *) calloc(1, sizeof(CThostFtdcInvestorGroupField));
    memset(t, 0, sizeof(CThostFtdcInvestorGroupField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorGroupID, PyString_AsString(PyObject_GetAttrString(p, "InvestorGroupID")));
    strcpy(t->InvestorGroupName, PyString_AsString(PyObject_GetAttrString(p, "InvestorGroupName")));

    return t;
};

PyObject *new_CThostFtdcTradingAccountField(CThostFtdcTradingAccountField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcTradingAccountField", "ssdddddddddddddddddddddsiddddddsdddddddddddddd",
                               p->BrokerID, p->AccountID, p->PreMortgage, p->PreCredit, p->PreDeposit, p->PreBalance,
                               p->PreMargin, p->InterestBase, p->Interest, p->Deposit, p->Withdraw, p->FrozenMargin,
                               p->FrozenCash, p->FrozenCommission, p->CurrMargin, p->CashIn, p->Commission,
                               p->CloseProfit, p->PositionProfit, p->Balance, p->Available, p->WithdrawQuota,
                               p->Reserve, p->TradingDay, p->SettlementID, p->Credit, p->Mortgage, p->ExchangeMargin,
                               p->DeliveryMargin, p->ExchangeDeliveryMargin, p->ReserveBalance, p->CurrencyID,
                               p->PreFundMortgageIn, p->PreFundMortgageOut, p->FundMortgageIn, p->FundMortgageOut,
                               p->FundMortgageAvailable, p->MortgageableFund, p->SpecProductMargin,
                               p->SpecProductFrozenMargin, p->SpecProductCommission, p->SpecProductFrozenCommission,
                               p->SpecProductPositionProfit, p->SpecProductCloseProfit,
                               p->SpecProductPositionProfitByAlg, p->SpecProductExchangeMargin);
}

CThostFtdcTradingAccountField *from_CThostFtdcTradingAccountField(PyObject * p) {
    CThostFtdcTradingAccountField *t = (CThostFtdcTradingAccountField *) calloc(1,
                                                                                sizeof(CThostFtdcTradingAccountField));
    memset(t, 0, sizeof(CThostFtdcTradingAccountField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
    t->PreMortgage = PyFloat_AsDouble(PyObject_GetAttrString(p, "PreMortgage"));
    t->PreCredit = PyFloat_AsDouble(PyObject_GetAttrString(p, "PreCredit"));
    t->PreDeposit = PyFloat_AsDouble(PyObject_GetAttrString(p, "PreDeposit"));
    t->PreBalance = PyFloat_AsDouble(PyObject_GetAttrString(p, "PreBalance"));
    t->PreMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "PreMargin"));
    t->InterestBase = PyFloat_AsDouble(PyObject_GetAttrString(p, "InterestBase"));
    t->Interest = PyFloat_AsDouble(PyObject_GetAttrString(p, "Interest"));
    t->Deposit = PyFloat_AsDouble(PyObject_GetAttrString(p, "Deposit"));
    t->Withdraw = PyFloat_AsDouble(PyObject_GetAttrString(p, "Withdraw"));
    t->FrozenMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenMargin"));
    t->FrozenCash = PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenCash"));
    t->FrozenCommission = PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenCommission"));
    t->CurrMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "CurrMargin"));
    t->CashIn = PyFloat_AsDouble(PyObject_GetAttrString(p, "CashIn"));
    t->Commission = PyFloat_AsDouble(PyObject_GetAttrString(p, "Commission"));
    t->CloseProfit = PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfit"));
    t->PositionProfit = PyFloat_AsDouble(PyObject_GetAttrString(p, "PositionProfit"));
    t->Balance = PyFloat_AsDouble(PyObject_GetAttrString(p, "Balance"));
    t->Available = PyFloat_AsDouble(PyObject_GetAttrString(p, "Available"));
    t->WithdrawQuota = PyFloat_AsDouble(PyObject_GetAttrString(p, "WithdrawQuota"));
    t->Reserve = PyFloat_AsDouble(PyObject_GetAttrString(p, "Reserve"));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->SettlementID = PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
    t->Credit = PyFloat_AsDouble(PyObject_GetAttrString(p, "Credit"));
    t->Mortgage = PyFloat_AsDouble(PyObject_GetAttrString(p, "Mortgage"));
    t->ExchangeMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchangeMargin"));
    t->DeliveryMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "DeliveryMargin"));
    t->ExchangeDeliveryMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchangeDeliveryMargin"));
    t->ReserveBalance = PyFloat_AsDouble(PyObject_GetAttrString(p, "ReserveBalance"));
    strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
    t->PreFundMortgageIn = PyFloat_AsDouble(PyObject_GetAttrString(p, "PreFundMortgageIn"));
    t->PreFundMortgageOut = PyFloat_AsDouble(PyObject_GetAttrString(p, "PreFundMortgageOut"));
    t->FundMortgageIn = PyFloat_AsDouble(PyObject_GetAttrString(p, "FundMortgageIn"));
    t->FundMortgageOut = PyFloat_AsDouble(PyObject_GetAttrString(p, "FundMortgageOut"));
    t->FundMortgageAvailable = PyFloat_AsDouble(PyObject_GetAttrString(p, "FundMortgageAvailable"));
    t->MortgageableFund = PyFloat_AsDouble(PyObject_GetAttrString(p, "MortgageableFund"));
    t->SpecProductMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "SpecProductMargin"));
    t->SpecProductFrozenMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "SpecProductFrozenMargin"));
    t->SpecProductCommission = PyFloat_AsDouble(PyObject_GetAttrString(p, "SpecProductCommission"));
    t->SpecProductFrozenCommission = PyFloat_AsDouble(PyObject_GetAttrString(p, "SpecProductFrozenCommission"));
    t->SpecProductPositionProfit = PyFloat_AsDouble(PyObject_GetAttrString(p, "SpecProductPositionProfit"));
    t->SpecProductCloseProfit = PyFloat_AsDouble(PyObject_GetAttrString(p, "SpecProductCloseProfit"));
    t->SpecProductPositionProfitByAlg = PyFloat_AsDouble(PyObject_GetAttrString(p, "SpecProductPositionProfitByAlg"));
    t->SpecProductExchangeMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "SpecProductExchangeMargin"));

    return t;
};

PyObject *new_CThostFtdcInvestorPositionField(CThostFtdcInvestorPositionField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcInvestorPositionField", "sssccciiiiddiiddddddddddddddsiddiiiddiddidi",
                               p->InstrumentID, p->BrokerID, p->InvestorID, p->PosiDirection, p->HedgeFlag,
                               p->PositionDate, p->YdPosition, p->Position, p->LongFrozen, p->ShortFrozen,
                               p->LongFrozenAmount, p->ShortFrozenAmount, p->OpenVolume, p->CloseVolume, p->OpenAmount,
                               p->CloseAmount, p->PositionCost, p->PreMargin, p->UseMargin, p->FrozenMargin,
                               p->FrozenCash, p->FrozenCommission, p->CashIn, p->Commission, p->CloseProfit,
                               p->PositionProfit, p->PreSettlementPrice, p->SettlementPrice, p->TradingDay,
                               p->SettlementID, p->OpenCost, p->ExchangeMargin, p->CombPosition, p->CombLongFrozen,
                               p->CombShortFrozen, p->CloseProfitByDate, p->CloseProfitByTrade, p->TodayPosition,
                               p->MarginRateByMoney, p->MarginRateByVolume, p->StrikeFrozen, p->StrikeFrozenAmount,
                               p->AbandonFrozen);
}

CThostFtdcInvestorPositionField *from_CThostFtdcInvestorPositionField(PyObject * p) {
    CThostFtdcInvestorPositionField *t = (CThostFtdcInvestorPositionField *) calloc(1,
                                                                                    sizeof(CThostFtdcInvestorPositionField));
    memset(t, 0, sizeof(CThostFtdcInvestorPositionField));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    t->PosiDirection = PyString_AsString(PyObject_GetAttrString(p, "PosiDirection"))[0];
    t->HedgeFlag = PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
    t->PositionDate = PyString_AsString(PyObject_GetAttrString(p, "PositionDate"))[0];
    t->YdPosition = PyInt_AsLong(PyObject_GetAttrString(p, "YdPosition"));
    t->Position = PyInt_AsLong(PyObject_GetAttrString(p, "Position"));
    t->LongFrozen = PyInt_AsLong(PyObject_GetAttrString(p, "LongFrozen"));
    t->ShortFrozen = PyInt_AsLong(PyObject_GetAttrString(p, "ShortFrozen"));
    t->LongFrozenAmount = PyFloat_AsDouble(PyObject_GetAttrString(p, "LongFrozenAmount"));
    t->ShortFrozenAmount = PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortFrozenAmount"));
    t->OpenVolume = PyInt_AsLong(PyObject_GetAttrString(p, "OpenVolume"));
    t->CloseVolume = PyInt_AsLong(PyObject_GetAttrString(p, "CloseVolume"));
    t->OpenAmount = PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenAmount"));
    t->CloseAmount = PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseAmount"));
    t->PositionCost = PyFloat_AsDouble(PyObject_GetAttrString(p, "PositionCost"));
    t->PreMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "PreMargin"));
    t->UseMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "UseMargin"));
    t->FrozenMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenMargin"));
    t->FrozenCash = PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenCash"));
    t->FrozenCommission = PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenCommission"));
    t->CashIn = PyFloat_AsDouble(PyObject_GetAttrString(p, "CashIn"));
    t->Commission = PyFloat_AsDouble(PyObject_GetAttrString(p, "Commission"));
    t->CloseProfit = PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfit"));
    t->PositionProfit = PyFloat_AsDouble(PyObject_GetAttrString(p, "PositionProfit"));
    t->PreSettlementPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "PreSettlementPrice"));
    t->SettlementPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "SettlementPrice"));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->SettlementID = PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
    t->OpenCost = PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenCost"));
    t->ExchangeMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchangeMargin"));
    t->CombPosition = PyInt_AsLong(PyObject_GetAttrString(p, "CombPosition"));
    t->CombLongFrozen = PyInt_AsLong(PyObject_GetAttrString(p, "CombLongFrozen"));
    t->CombShortFrozen = PyInt_AsLong(PyObject_GetAttrString(p, "CombShortFrozen"));
    t->CloseProfitByDate = PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfitByDate"));
    t->CloseProfitByTrade = PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfitByTrade"));
    t->TodayPosition = PyInt_AsLong(PyObject_GetAttrString(p, "TodayPosition"));
    t->MarginRateByMoney = PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginRateByMoney"));
    t->MarginRateByVolume = PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginRateByVolume"));
    t->StrikeFrozen = PyInt_AsLong(PyObject_GetAttrString(p, "StrikeFrozen"));
    t->StrikeFrozenAmount = PyFloat_AsDouble(PyObject_GetAttrString(p, "StrikeFrozenAmount"));
    t->AbandonFrozen = PyInt_AsLong(PyObject_GetAttrString(p, "AbandonFrozen"));

    return t;
};

PyObject *new_CThostFtdcInstrumentMarginRateField(CThostFtdcInstrumentMarginRateField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcInstrumentMarginRateField", "scsscddddi",
                               p->InstrumentID, p->InvestorRange, p->BrokerID, p->InvestorID, p->HedgeFlag,
                               p->LongMarginRatioByMoney, p->LongMarginRatioByVolume, p->ShortMarginRatioByMoney,
                               p->ShortMarginRatioByVolume, p->IsRelative);
}

CThostFtdcInstrumentMarginRateField *from_CThostFtdcInstrumentMarginRateField(PyObject * p) {
    CThostFtdcInstrumentMarginRateField *t = (CThostFtdcInstrumentMarginRateField *) calloc(1,
                                                                                            sizeof(CThostFtdcInstrumentMarginRateField));
    memset(t, 0, sizeof(CThostFtdcInstrumentMarginRateField));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    t->InvestorRange = PyString_AsString(PyObject_GetAttrString(p, "InvestorRange"))[0];
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    t->HedgeFlag = PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
    t->LongMarginRatioByMoney = PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatioByMoney"));
    t->LongMarginRatioByVolume = PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatioByVolume"));
    t->ShortMarginRatioByMoney = PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatioByMoney"));
    t->ShortMarginRatioByVolume = PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatioByVolume"));
    t->IsRelative = PyInt_AsLong(PyObject_GetAttrString(p, "IsRelative"));

    return t;
};

PyObject *new_CThostFtdcInstrumentCommissionRateField(CThostFtdcInstrumentCommissionRateField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcInstrumentCommissionRateField", "scssdddddd",
                               p->InstrumentID, p->InvestorRange, p->BrokerID, p->InvestorID, p->OpenRatioByMoney,
                               p->OpenRatioByVolume, p->CloseRatioByMoney, p->CloseRatioByVolume,
                               p->CloseTodayRatioByMoney, p->CloseTodayRatioByVolume);
}

CThostFtdcInstrumentCommissionRateField *from_CThostFtdcInstrumentCommissionRateField(PyObject * p) {
    CThostFtdcInstrumentCommissionRateField *t = (CThostFtdcInstrumentCommissionRateField *) calloc(1,
                                                                                                    sizeof(CThostFtdcInstrumentCommissionRateField));
    memset(t, 0, sizeof(CThostFtdcInstrumentCommissionRateField));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    t->InvestorRange = PyString_AsString(PyObject_GetAttrString(p, "InvestorRange"))[0];
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    t->OpenRatioByMoney = PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenRatioByMoney"));
    t->OpenRatioByVolume = PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenRatioByVolume"));
    t->CloseRatioByMoney = PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseRatioByMoney"));
    t->CloseRatioByVolume = PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseRatioByVolume"));
    t->CloseTodayRatioByMoney = PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseTodayRatioByMoney"));
    t->CloseTodayRatioByVolume = PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseTodayRatioByVolume"));

    return t;
};

PyObject *new_CThostFtdcDepthMarketDataField(CThostFtdcDepthMarketDataField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcDepthMarketDataField", "ssssdddddddiddddddddsididididididididididids",
                               p->TradingDay, p->InstrumentID, p->ExchangeID, p->ExchangeInstID, p->LastPrice,
                               p->PreSettlementPrice, p->PreClosePrice, p->PreOpenInterest, p->OpenPrice,
                               p->HighestPrice, p->LowestPrice, p->Volume, p->Turnover, p->OpenInterest, p->ClosePrice,
                               p->SettlementPrice, p->UpperLimitPrice, p->LowerLimitPrice, p->PreDelta, p->CurrDelta,
                               p->UpdateTime, p->UpdateMillisec, p->BidPrice1, p->BidVolume1, p->AskPrice1,
                               p->AskVolume1, p->BidPrice2, p->BidVolume2, p->AskPrice2, p->AskVolume2, p->BidPrice3,
                               p->BidVolume3, p->AskPrice3, p->AskVolume3, p->BidPrice4, p->BidVolume4, p->AskPrice4,
                               p->AskVolume4, p->BidPrice5, p->BidVolume5, p->AskPrice5, p->AskVolume5, p->AveragePrice,
                               p->ActionDay);
}

CThostFtdcDepthMarketDataField *from_CThostFtdcDepthMarketDataField(PyObject * p) {
    CThostFtdcDepthMarketDataField *t = (CThostFtdcDepthMarketDataField *) calloc(1,
                                                                                  sizeof(CThostFtdcDepthMarketDataField));
    memset(t, 0, sizeof(CThostFtdcDepthMarketDataField));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
    t->LastPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "LastPrice"));
    t->PreSettlementPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "PreSettlementPrice"));
    t->PreClosePrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "PreClosePrice"));
    t->PreOpenInterest = PyFloat_AsDouble(PyObject_GetAttrString(p, "PreOpenInterest"));
    t->OpenPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenPrice"));
    t->HighestPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "HighestPrice"));
    t->LowestPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "LowestPrice"));
    t->Volume = PyInt_AsLong(PyObject_GetAttrString(p, "Volume"));
    t->Turnover = PyFloat_AsDouble(PyObject_GetAttrString(p, "Turnover"));
    t->OpenInterest = PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenInterest"));
    t->ClosePrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "ClosePrice"));
    t->SettlementPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "SettlementPrice"));
    t->UpperLimitPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "UpperLimitPrice"));
    t->LowerLimitPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "LowerLimitPrice"));
    t->PreDelta = PyFloat_AsDouble(PyObject_GetAttrString(p, "PreDelta"));
    t->CurrDelta = PyFloat_AsDouble(PyObject_GetAttrString(p, "CurrDelta"));
    strcpy(t->UpdateTime, PyString_AsString(PyObject_GetAttrString(p, "UpdateTime")));
    t->UpdateMillisec = PyInt_AsLong(PyObject_GetAttrString(p, "UpdateMillisec"));
    t->BidPrice1 = PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPrice1"));
    t->BidVolume1 = PyInt_AsLong(PyObject_GetAttrString(p, "BidVolume1"));
    t->AskPrice1 = PyFloat_AsDouble(PyObject_GetAttrString(p, "AskPrice1"));
    t->AskVolume1 = PyInt_AsLong(PyObject_GetAttrString(p, "AskVolume1"));
    t->BidPrice2 = PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPrice2"));
    t->BidVolume2 = PyInt_AsLong(PyObject_GetAttrString(p, "BidVolume2"));
    t->AskPrice2 = PyFloat_AsDouble(PyObject_GetAttrString(p, "AskPrice2"));
    t->AskVolume2 = PyInt_AsLong(PyObject_GetAttrString(p, "AskVolume2"));
    t->BidPrice3 = PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPrice3"));
    t->BidVolume3 = PyInt_AsLong(PyObject_GetAttrString(p, "BidVolume3"));
    t->AskPrice3 = PyFloat_AsDouble(PyObject_GetAttrString(p, "AskPrice3"));
    t->AskVolume3 = PyInt_AsLong(PyObject_GetAttrString(p, "AskVolume3"));
    t->BidPrice4 = PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPrice4"));
    t->BidVolume4 = PyInt_AsLong(PyObject_GetAttrString(p, "BidVolume4"));
    t->AskPrice4 = PyFloat_AsDouble(PyObject_GetAttrString(p, "AskPrice4"));
    t->AskVolume4 = PyInt_AsLong(PyObject_GetAttrString(p, "AskVolume4"));
    t->BidPrice5 = PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPrice5"));
    t->BidVolume5 = PyInt_AsLong(PyObject_GetAttrString(p, "BidVolume5"));
    t->AskPrice5 = PyFloat_AsDouble(PyObject_GetAttrString(p, "AskPrice5"));
    t->AskVolume5 = PyInt_AsLong(PyObject_GetAttrString(p, "AskVolume5"));
    t->AveragePrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "AveragePrice"));
    strcpy(t->ActionDay, PyString_AsString(PyObject_GetAttrString(p, "ActionDay")));

    return t;
};

PyObject *new_CThostFtdcInstrumentTradingRightField(CThostFtdcInstrumentTradingRightField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcInstrumentTradingRightField", "scssc",
                               p->InstrumentID, p->InvestorRange, p->BrokerID, p->InvestorID, p->TradingRight);
}

CThostFtdcInstrumentTradingRightField *from_CThostFtdcInstrumentTradingRightField(PyObject * p) {
    CThostFtdcInstrumentTradingRightField *t = (CThostFtdcInstrumentTradingRightField *) calloc(1,
                                                                                                sizeof(CThostFtdcInstrumentTradingRightField));
    memset(t, 0, sizeof(CThostFtdcInstrumentTradingRightField));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    t->InvestorRange = PyString_AsString(PyObject_GetAttrString(p, "InvestorRange"))[0];
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    t->TradingRight = PyString_AsString(PyObject_GetAttrString(p, "TradingRight"))[0];

    return t;
};

PyObject *new_CThostFtdcBrokerUserField(CThostFtdcBrokerUserField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcBrokerUserField", "ssscii",
                               p->BrokerID, p->UserID, p->UserName, p->UserType, p->IsActive, p->IsUsingOTP);
}

CThostFtdcBrokerUserField *from_CThostFtdcBrokerUserField(PyObject * p) {
    CThostFtdcBrokerUserField *t = (CThostFtdcBrokerUserField *) calloc(1, sizeof(CThostFtdcBrokerUserField));
    memset(t, 0, sizeof(CThostFtdcBrokerUserField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    strcpy(t->UserName, PyString_AsString(PyObject_GetAttrString(p, "UserName")));
    t->UserType = PyString_AsString(PyObject_GetAttrString(p, "UserType"))[0];
    t->IsActive = PyInt_AsLong(PyObject_GetAttrString(p, "IsActive"));
    t->IsUsingOTP = PyInt_AsLong(PyObject_GetAttrString(p, "IsUsingOTP"));

    return t;
};

PyObject *new_CThostFtdcBrokerUserPasswordField(CThostFtdcBrokerUserPasswordField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcBrokerUserPasswordField", "sss",
                               p->BrokerID, p->UserID, p->Password);
}

CThostFtdcBrokerUserPasswordField *from_CThostFtdcBrokerUserPasswordField(PyObject * p) {
    CThostFtdcBrokerUserPasswordField *t = (CThostFtdcBrokerUserPasswordField *) calloc(1,
                                                                                        sizeof(CThostFtdcBrokerUserPasswordField));
    memset(t, 0, sizeof(CThostFtdcBrokerUserPasswordField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));

    return t;
};

PyObject *new_CThostFtdcBrokerUserFunctionField(CThostFtdcBrokerUserFunctionField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcBrokerUserFunctionField", "ssc",
                               p->BrokerID, p->UserID, p->BrokerFunctionCode);
}

CThostFtdcBrokerUserFunctionField *from_CThostFtdcBrokerUserFunctionField(PyObject * p) {
    CThostFtdcBrokerUserFunctionField *t = (CThostFtdcBrokerUserFunctionField *) calloc(1,
                                                                                        sizeof(CThostFtdcBrokerUserFunctionField));
    memset(t, 0, sizeof(CThostFtdcBrokerUserFunctionField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    t->BrokerFunctionCode = PyString_AsString(PyObject_GetAttrString(p, "BrokerFunctionCode"))[0];

    return t;
};

PyObject *new_CThostFtdcTraderOfferField(CThostFtdcTraderOfferField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcTraderOfferField", "ssssiscssssssssssss",
                               p->ExchangeID, p->TraderID, p->ParticipantID, p->Password, p->InstallID, p->OrderLocalID,
                               p->TraderConnectStatus, p->ConnectRequestDate, p->ConnectRequestTime, p->LastReportDate,
                               p->LastReportTime, p->ConnectDate, p->ConnectTime, p->StartDate, p->StartTime,
                               p->TradingDay, p->BrokerID, p->MaxTradeID, p->MaxOrderMessageReference);
}

CThostFtdcTraderOfferField *from_CThostFtdcTraderOfferField(PyObject * p) {
    CThostFtdcTraderOfferField *t = (CThostFtdcTraderOfferField *) calloc(1, sizeof(CThostFtdcTraderOfferField));
    memset(t, 0, sizeof(CThostFtdcTraderOfferField));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
    strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
    strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
    t->TraderConnectStatus = PyString_AsString(PyObject_GetAttrString(p, "TraderConnectStatus"))[0];
    strcpy(t->ConnectRequestDate, PyString_AsString(PyObject_GetAttrString(p, "ConnectRequestDate")));
    strcpy(t->ConnectRequestTime, PyString_AsString(PyObject_GetAttrString(p, "ConnectRequestTime")));
    strcpy(t->LastReportDate, PyString_AsString(PyObject_GetAttrString(p, "LastReportDate")));
    strcpy(t->LastReportTime, PyString_AsString(PyObject_GetAttrString(p, "LastReportTime")));
    strcpy(t->ConnectDate, PyString_AsString(PyObject_GetAttrString(p, "ConnectDate")));
    strcpy(t->ConnectTime, PyString_AsString(PyObject_GetAttrString(p, "ConnectTime")));
    strcpy(t->StartDate, PyString_AsString(PyObject_GetAttrString(p, "StartDate")));
    strcpy(t->StartTime, PyString_AsString(PyObject_GetAttrString(p, "StartTime")));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->MaxTradeID, PyString_AsString(PyObject_GetAttrString(p, "MaxTradeID")));
    strcpy(t->MaxOrderMessageReference, PyString_AsString(PyObject_GetAttrString(p, "MaxOrderMessageReference")));

    return t;
};

PyObject *new_CThostFtdcSettlementInfoField(CThostFtdcSettlementInfoField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcSettlementInfoField", "sissis",
                               p->TradingDay, p->SettlementID, p->BrokerID, p->InvestorID, p->SequenceNo, p->Content);
}

CThostFtdcSettlementInfoField *from_CThostFtdcSettlementInfoField(PyObject * p) {
    CThostFtdcSettlementInfoField *t = (CThostFtdcSettlementInfoField *) calloc(1,
                                                                                sizeof(CThostFtdcSettlementInfoField));
    memset(t, 0, sizeof(CThostFtdcSettlementInfoField));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->SettlementID = PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    t->SequenceNo = PyInt_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
    strcpy(t->Content, PyString_AsString(PyObject_GetAttrString(p, "Content")));

    return t;
};

PyObject *new_CThostFtdcInstrumentMarginRateAdjustField(CThostFtdcInstrumentMarginRateAdjustField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcInstrumentMarginRateAdjustField", "scsscddddi",
                               p->InstrumentID, p->InvestorRange, p->BrokerID, p->InvestorID, p->HedgeFlag,
                               p->LongMarginRatioByMoney, p->LongMarginRatioByVolume, p->ShortMarginRatioByMoney,
                               p->ShortMarginRatioByVolume, p->IsRelative);
}

CThostFtdcInstrumentMarginRateAdjustField *from_CThostFtdcInstrumentMarginRateAdjustField(PyObject * p) {
    CThostFtdcInstrumentMarginRateAdjustField *t = (CThostFtdcInstrumentMarginRateAdjustField *) calloc(1,
                                                                                                        sizeof(CThostFtdcInstrumentMarginRateAdjustField));
    memset(t, 0, sizeof(CThostFtdcInstrumentMarginRateAdjustField));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    t->InvestorRange = PyString_AsString(PyObject_GetAttrString(p, "InvestorRange"))[0];
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    t->HedgeFlag = PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
    t->LongMarginRatioByMoney = PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatioByMoney"));
    t->LongMarginRatioByVolume = PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatioByVolume"));
    t->ShortMarginRatioByMoney = PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatioByMoney"));
    t->ShortMarginRatioByVolume = PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatioByVolume"));
    t->IsRelative = PyInt_AsLong(PyObject_GetAttrString(p, "IsRelative"));

    return t;
};

PyObject *new_CThostFtdcExchangeMarginRateField(CThostFtdcExchangeMarginRateField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcExchangeMarginRateField", "sscdddd",
                               p->BrokerID, p->InstrumentID, p->HedgeFlag, p->LongMarginRatioByMoney,
                               p->LongMarginRatioByVolume, p->ShortMarginRatioByMoney, p->ShortMarginRatioByVolume);
}

CThostFtdcExchangeMarginRateField *from_CThostFtdcExchangeMarginRateField(PyObject * p) {
    CThostFtdcExchangeMarginRateField *t = (CThostFtdcExchangeMarginRateField *) calloc(1,
                                                                                        sizeof(CThostFtdcExchangeMarginRateField));
    memset(t, 0, sizeof(CThostFtdcExchangeMarginRateField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    t->HedgeFlag = PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
    t->LongMarginRatioByMoney = PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatioByMoney"));
    t->LongMarginRatioByVolume = PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatioByVolume"));
    t->ShortMarginRatioByMoney = PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatioByMoney"));
    t->ShortMarginRatioByVolume = PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatioByVolume"));

    return t;
};

PyObject *new_CThostFtdcExchangeMarginRateAdjustField(CThostFtdcExchangeMarginRateAdjustField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcExchangeMarginRateAdjustField", "sscdddddddddddd",
                               p->BrokerID, p->InstrumentID, p->HedgeFlag, p->LongMarginRatioByMoney,
                               p->LongMarginRatioByVolume, p->ShortMarginRatioByMoney, p->ShortMarginRatioByVolume,
                               p->ExchLongMarginRatioByMoney, p->ExchLongMarginRatioByVolume,
                               p->ExchShortMarginRatioByMoney, p->ExchShortMarginRatioByVolume,
                               p->NoLongMarginRatioByMoney, p->NoLongMarginRatioByVolume, p->NoShortMarginRatioByMoney,
                               p->NoShortMarginRatioByVolume);
}

CThostFtdcExchangeMarginRateAdjustField *from_CThostFtdcExchangeMarginRateAdjustField(PyObject * p) {
    CThostFtdcExchangeMarginRateAdjustField *t = (CThostFtdcExchangeMarginRateAdjustField *) calloc(1,
                                                                                                    sizeof(CThostFtdcExchangeMarginRateAdjustField));
    memset(t, 0, sizeof(CThostFtdcExchangeMarginRateAdjustField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    t->HedgeFlag = PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
    t->LongMarginRatioByMoney = PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatioByMoney"));
    t->LongMarginRatioByVolume = PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatioByVolume"));
    t->ShortMarginRatioByMoney = PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatioByMoney"));
    t->ShortMarginRatioByVolume = PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatioByVolume"));
    t->ExchLongMarginRatioByMoney = PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchLongMarginRatioByMoney"));
    t->ExchLongMarginRatioByVolume = PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchLongMarginRatioByVolume"));
    t->ExchShortMarginRatioByMoney = PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchShortMarginRatioByMoney"));
    t->ExchShortMarginRatioByVolume = PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchShortMarginRatioByVolume"));
    t->NoLongMarginRatioByMoney = PyFloat_AsDouble(PyObject_GetAttrString(p, "NoLongMarginRatioByMoney"));
    t->NoLongMarginRatioByVolume = PyFloat_AsDouble(PyObject_GetAttrString(p, "NoLongMarginRatioByVolume"));
    t->NoShortMarginRatioByMoney = PyFloat_AsDouble(PyObject_GetAttrString(p, "NoShortMarginRatioByMoney"));
    t->NoShortMarginRatioByVolume = PyFloat_AsDouble(PyObject_GetAttrString(p, "NoShortMarginRatioByVolume"));

    return t;
};

PyObject *new_CThostFtdcExchangeRateField(CThostFtdcExchangeRateField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcExchangeRateField", "ssdsd",
                               p->BrokerID, p->FromCurrencyID, p->FromCurrencyUnit, p->ToCurrencyID, p->ExchangeRate);
}

CThostFtdcExchangeRateField *from_CThostFtdcExchangeRateField(PyObject * p) {
    CThostFtdcExchangeRateField *t = (CThostFtdcExchangeRateField *) calloc(1, sizeof(CThostFtdcExchangeRateField));
    memset(t, 0, sizeof(CThostFtdcExchangeRateField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->FromCurrencyID, PyString_AsString(PyObject_GetAttrString(p, "FromCurrencyID")));
    t->FromCurrencyUnit = PyFloat_AsDouble(PyObject_GetAttrString(p, "FromCurrencyUnit"));
    strcpy(t->ToCurrencyID, PyString_AsString(PyObject_GetAttrString(p, "ToCurrencyID")));
    t->ExchangeRate = PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchangeRate"));

    return t;
};

PyObject *new_CThostFtdcSettlementRefField(CThostFtdcSettlementRefField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcSettlementRefField", "si",
                               p->TradingDay, p->SettlementID);
}

CThostFtdcSettlementRefField *from_CThostFtdcSettlementRefField(PyObject * p) {
    CThostFtdcSettlementRefField *t = (CThostFtdcSettlementRefField *) calloc(1, sizeof(CThostFtdcSettlementRefField));
    memset(t, 0, sizeof(CThostFtdcSettlementRefField));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->SettlementID = PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));

    return t;
};

PyObject *new_CThostFtdcCurrentTimeField(CThostFtdcCurrentTimeField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcCurrentTimeField", "ssis",
                               p->CurrDate, p->CurrTime, p->CurrMillisec, p->ActionDay);
}

CThostFtdcCurrentTimeField *from_CThostFtdcCurrentTimeField(PyObject * p) {
    CThostFtdcCurrentTimeField *t = (CThostFtdcCurrentTimeField *) calloc(1, sizeof(CThostFtdcCurrentTimeField));
    memset(t, 0, sizeof(CThostFtdcCurrentTimeField));
    strcpy(t->CurrDate, PyString_AsString(PyObject_GetAttrString(p, "CurrDate")));
    strcpy(t->CurrTime, PyString_AsString(PyObject_GetAttrString(p, "CurrTime")));
    t->CurrMillisec = PyInt_AsLong(PyObject_GetAttrString(p, "CurrMillisec"));
    strcpy(t->ActionDay, PyString_AsString(PyObject_GetAttrString(p, "ActionDay")));

    return t;
};

PyObject *new_CThostFtdcCommPhaseField(CThostFtdcCommPhaseField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcCommPhaseField", "shs",
                               p->TradingDay, p->CommPhaseNo, p->SystemID);
}

CThostFtdcCommPhaseField *from_CThostFtdcCommPhaseField(PyObject * p) {
    CThostFtdcCommPhaseField *t = (CThostFtdcCommPhaseField *) calloc(1, sizeof(CThostFtdcCommPhaseField));
    memset(t, 0, sizeof(CThostFtdcCommPhaseField));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->CommPhaseNo = PyInt_AsLong(PyObject_GetAttrString(p, "CommPhaseNo"));
    strcpy(t->SystemID, PyString_AsString(PyObject_GetAttrString(p, "SystemID")));

    return t;
};

PyObject *new_CThostFtdcLoginInfoField(CThostFtdcLoginInfoField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcLoginInfoField", "iissssssssssssssssss",
                               p->FrontID, p->SessionID, p->BrokerID, p->UserID, p->LoginDate, p->LoginTime,
                               p->IPAddress, p->UserProductInfo, p->InterfaceProductInfo, p->ProtocolInfo,
                               p->SystemName, p->Password, p->MaxOrderRef, p->SHFETime, p->DCETime, p->CZCETime,
                               p->FFEXTime, p->MacAddress, p->OneTimePassword, p->INETime);
}

CThostFtdcLoginInfoField *from_CThostFtdcLoginInfoField(PyObject * p) {
    CThostFtdcLoginInfoField *t = (CThostFtdcLoginInfoField *) calloc(1, sizeof(CThostFtdcLoginInfoField));
    memset(t, 0, sizeof(CThostFtdcLoginInfoField));
    t->FrontID = PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    strcpy(t->LoginDate, PyString_AsString(PyObject_GetAttrString(p, "LoginDate")));
    strcpy(t->LoginTime, PyString_AsString(PyObject_GetAttrString(p, "LoginTime")));
    strcpy(t->IPAddress, PyString_AsString(PyObject_GetAttrString(p, "IPAddress")));
    strcpy(t->UserProductInfo, PyString_AsString(PyObject_GetAttrString(p, "UserProductInfo")));
    strcpy(t->InterfaceProductInfo, PyString_AsString(PyObject_GetAttrString(p, "InterfaceProductInfo")));
    strcpy(t->ProtocolInfo, PyString_AsString(PyObject_GetAttrString(p, "ProtocolInfo")));
    strcpy(t->SystemName, PyString_AsString(PyObject_GetAttrString(p, "SystemName")));
    strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
    strcpy(t->MaxOrderRef, PyString_AsString(PyObject_GetAttrString(p, "MaxOrderRef")));
    strcpy(t->SHFETime, PyString_AsString(PyObject_GetAttrString(p, "SHFETime")));
    strcpy(t->DCETime, PyString_AsString(PyObject_GetAttrString(p, "DCETime")));
    strcpy(t->CZCETime, PyString_AsString(PyObject_GetAttrString(p, "CZCETime")));
    strcpy(t->FFEXTime, PyString_AsString(PyObject_GetAttrString(p, "FFEXTime")));
    strcpy(t->MacAddress, PyString_AsString(PyObject_GetAttrString(p, "MacAddress")));
    strcpy(t->OneTimePassword, PyString_AsString(PyObject_GetAttrString(p, "OneTimePassword")));
    strcpy(t->INETime, PyString_AsString(PyObject_GetAttrString(p, "INETime")));

    return t;
};

PyObject *new_CThostFtdcLogoutAllField(CThostFtdcLogoutAllField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcLogoutAllField", "iis",
                               p->FrontID, p->SessionID, p->SystemName);
}

CThostFtdcLogoutAllField *from_CThostFtdcLogoutAllField(PyObject * p) {
    CThostFtdcLogoutAllField *t = (CThostFtdcLogoutAllField *) calloc(1, sizeof(CThostFtdcLogoutAllField));
    memset(t, 0, sizeof(CThostFtdcLogoutAllField));
    t->FrontID = PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    strcpy(t->SystemName, PyString_AsString(PyObject_GetAttrString(p, "SystemName")));

    return t;
};

PyObject *new_CThostFtdcFrontStatusField(CThostFtdcFrontStatusField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcFrontStatusField", "issi",
                               p->FrontID, p->LastReportDate, p->LastReportTime, p->IsActive);
}

CThostFtdcFrontStatusField *from_CThostFtdcFrontStatusField(PyObject * p) {
    CThostFtdcFrontStatusField *t = (CThostFtdcFrontStatusField *) calloc(1, sizeof(CThostFtdcFrontStatusField));
    memset(t, 0, sizeof(CThostFtdcFrontStatusField));
    t->FrontID = PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
    strcpy(t->LastReportDate, PyString_AsString(PyObject_GetAttrString(p, "LastReportDate")));
    strcpy(t->LastReportTime, PyString_AsString(PyObject_GetAttrString(p, "LastReportTime")));
    t->IsActive = PyInt_AsLong(PyObject_GetAttrString(p, "IsActive"));

    return t;
};

PyObject *new_CThostFtdcUserPasswordUpdateField(CThostFtdcUserPasswordUpdateField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcUserPasswordUpdateField", "ssss",
                               p->BrokerID, p->UserID, p->OldPassword, p->NewPassword);
}

CThostFtdcUserPasswordUpdateField *from_CThostFtdcUserPasswordUpdateField(PyObject * p) {
    CThostFtdcUserPasswordUpdateField *t = (CThostFtdcUserPasswordUpdateField *) calloc(1,
                                                                                        sizeof(CThostFtdcUserPasswordUpdateField));
    memset(t, 0, sizeof(CThostFtdcUserPasswordUpdateField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    strcpy(t->OldPassword, PyString_AsString(PyObject_GetAttrString(p, "OldPassword")));
    strcpy(t->NewPassword, PyString_AsString(PyObject_GetAttrString(p, "NewPassword")));

    return t;
};

PyObject *new_CThostFtdcInputOrderField(CThostFtdcInputOrderField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcInputOrderField", "sssssccssdicscicdcisiii",
                               p->BrokerID, p->InvestorID, p->InstrumentID, p->OrderRef, p->UserID, p->OrderPriceType,
                               p->Direction, p->CombOffsetFlag, p->CombHedgeFlag, p->LimitPrice, p->VolumeTotalOriginal,
                               p->TimeCondition, p->GTDDate, p->VolumeCondition, p->MinVolume, p->ContingentCondition,
                               p->StopPrice, p->ForceCloseReason, p->IsAutoSuspend, p->BusinessUnit, p->RequestID,
                               p->UserForceClose, p->IsSwapOrder);
}

CThostFtdcInputOrderField *from_CThostFtdcInputOrderField(PyObject * p) {
    CThostFtdcInputOrderField *t = (CThostFtdcInputOrderField *) calloc(1, sizeof(CThostFtdcInputOrderField));
    memset(t, 0, sizeof(CThostFtdcInputOrderField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    strcpy(t->OrderRef, PyString_AsString(PyObject_GetAttrString(p, "OrderRef")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    t->OrderPriceType = PyString_AsString(PyObject_GetAttrString(p, "OrderPriceType"))[0];
    t->Direction = PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
    strcpy(t->CombOffsetFlag, PyString_AsString(PyObject_GetAttrString(p, "CombOffsetFlag")));
    strcpy(t->CombHedgeFlag, PyString_AsString(PyObject_GetAttrString(p, "CombHedgeFlag")));
    t->LimitPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
    t->VolumeTotalOriginal = PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTotalOriginal"));
    t->TimeCondition = PyString_AsString(PyObject_GetAttrString(p, "TimeCondition"))[0];
    strcpy(t->GTDDate, PyString_AsString(PyObject_GetAttrString(p, "GTDDate")));
    t->VolumeCondition = PyString_AsString(PyObject_GetAttrString(p, "VolumeCondition"))[0];
    t->MinVolume = PyInt_AsLong(PyObject_GetAttrString(p, "MinVolume"));
    t->ContingentCondition = PyString_AsString(PyObject_GetAttrString(p, "ContingentCondition"))[0];
    t->StopPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "StopPrice"));
    t->ForceCloseReason = PyString_AsString(PyObject_GetAttrString(p, "ForceCloseReason"))[0];
    t->IsAutoSuspend = PyInt_AsLong(PyObject_GetAttrString(p, "IsAutoSuspend"));
    strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
    t->RequestID = PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
    t->UserForceClose = PyInt_AsLong(PyObject_GetAttrString(p, "UserForceClose"));
    t->IsSwapOrder = PyInt_AsLong(PyObject_GetAttrString(p, "IsSwapOrder"));

    return t;
};

PyObject *new_CThostFtdcOrderField(CThostFtdcOrderField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcOrderField", "sssssccssdicscicdcisissssssicisisccciissssssssiiissisisii",
                               p->BrokerID, p->InvestorID, p->InstrumentID, p->OrderRef, p->UserID, p->OrderPriceType,
                               p->Direction, p->CombOffsetFlag, p->CombHedgeFlag, p->LimitPrice, p->VolumeTotalOriginal,
                               p->TimeCondition, p->GTDDate, p->VolumeCondition, p->MinVolume, p->ContingentCondition,
                               p->StopPrice, p->ForceCloseReason, p->IsAutoSuspend, p->BusinessUnit, p->RequestID,
                               p->OrderLocalID, p->ExchangeID, p->ParticipantID, p->ClientID, p->ExchangeInstID,
                               p->TraderID, p->InstallID, p->OrderSubmitStatus, p->NotifySequence, p->TradingDay,
                               p->SettlementID, p->OrderSysID, p->OrderSource, p->OrderStatus, p->OrderType,
                               p->VolumeTraded, p->VolumeTotal, p->InsertDate, p->InsertTime, p->ActiveTime,
                               p->SuspendTime, p->UpdateTime, p->CancelTime, p->ActiveTraderID, p->ClearingPartID,
                               p->SequenceNo, p->FrontID, p->SessionID, p->UserProductInfo, p->StatusMsg,
                               p->UserForceClose, p->ActiveUserID, p->BrokerOrderSeq, p->RelativeOrderSysID,
                               p->ZCETotalTradedVolume, p->IsSwapOrder);
}

CThostFtdcOrderField *from_CThostFtdcOrderField(PyObject * p) {
    CThostFtdcOrderField *t = (CThostFtdcOrderField *) calloc(1, sizeof(CThostFtdcOrderField));
    memset(t, 0, sizeof(CThostFtdcOrderField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    strcpy(t->OrderRef, PyString_AsString(PyObject_GetAttrString(p, "OrderRef")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    t->OrderPriceType = PyString_AsString(PyObject_GetAttrString(p, "OrderPriceType"))[0];
    t->Direction = PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
    strcpy(t->CombOffsetFlag, PyString_AsString(PyObject_GetAttrString(p, "CombOffsetFlag")));
    strcpy(t->CombHedgeFlag, PyString_AsString(PyObject_GetAttrString(p, "CombHedgeFlag")));
    t->LimitPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
    t->VolumeTotalOriginal = PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTotalOriginal"));
    t->TimeCondition = PyString_AsString(PyObject_GetAttrString(p, "TimeCondition"))[0];
    strcpy(t->GTDDate, PyString_AsString(PyObject_GetAttrString(p, "GTDDate")));
    t->VolumeCondition = PyString_AsString(PyObject_GetAttrString(p, "VolumeCondition"))[0];
    t->MinVolume = PyInt_AsLong(PyObject_GetAttrString(p, "MinVolume"));
    t->ContingentCondition = PyString_AsString(PyObject_GetAttrString(p, "ContingentCondition"))[0];
    t->StopPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "StopPrice"));
    t->ForceCloseReason = PyString_AsString(PyObject_GetAttrString(p, "ForceCloseReason"))[0];
    t->IsAutoSuspend = PyInt_AsLong(PyObject_GetAttrString(p, "IsAutoSuspend"));
    strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
    t->RequestID = PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
    strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
    strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
    strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
    strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    t->OrderSubmitStatus = PyString_AsString(PyObject_GetAttrString(p, "OrderSubmitStatus"))[0];
    t->NotifySequence = PyInt_AsLong(PyObject_GetAttrString(p, "NotifySequence"));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->SettlementID = PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
    strcpy(t->OrderSysID, PyString_AsString(PyObject_GetAttrString(p, "OrderSysID")));
    t->OrderSource = PyString_AsString(PyObject_GetAttrString(p, "OrderSource"))[0];
    t->OrderStatus = PyString_AsString(PyObject_GetAttrString(p, "OrderStatus"))[0];
    t->OrderType = PyString_AsString(PyObject_GetAttrString(p, "OrderType"))[0];
    t->VolumeTraded = PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTraded"));
    t->VolumeTotal = PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTotal"));
    strcpy(t->InsertDate, PyString_AsString(PyObject_GetAttrString(p, "InsertDate")));
    strcpy(t->InsertTime, PyString_AsString(PyObject_GetAttrString(p, "InsertTime")));
    strcpy(t->ActiveTime, PyString_AsString(PyObject_GetAttrString(p, "ActiveTime")));
    strcpy(t->SuspendTime, PyString_AsString(PyObject_GetAttrString(p, "SuspendTime")));
    strcpy(t->UpdateTime, PyString_AsString(PyObject_GetAttrString(p, "UpdateTime")));
    strcpy(t->CancelTime, PyString_AsString(PyObject_GetAttrString(p, "CancelTime")));
    strcpy(t->ActiveTraderID, PyString_AsString(PyObject_GetAttrString(p, "ActiveTraderID")));
    strcpy(t->ClearingPartID, PyString_AsString(PyObject_GetAttrString(p, "ClearingPartID")));
    t->SequenceNo = PyInt_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
    t->FrontID = PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    strcpy(t->UserProductInfo, PyString_AsString(PyObject_GetAttrString(p, "UserProductInfo")));
    strcpy(t->StatusMsg, PyString_AsString(PyObject_GetAttrString(p, "StatusMsg")));
    t->UserForceClose = PyInt_AsLong(PyObject_GetAttrString(p, "UserForceClose"));
    strcpy(t->ActiveUserID, PyString_AsString(PyObject_GetAttrString(p, "ActiveUserID")));
    t->BrokerOrderSeq = PyInt_AsLong(PyObject_GetAttrString(p, "BrokerOrderSeq"));
    strcpy(t->RelativeOrderSysID, PyString_AsString(PyObject_GetAttrString(p, "RelativeOrderSysID")));
    t->ZCETotalTradedVolume = PyInt_AsLong(PyObject_GetAttrString(p, "ZCETotalTradedVolume"));
    t->IsSwapOrder = PyInt_AsLong(PyObject_GetAttrString(p, "IsSwapOrder"));

    return t;
};

PyObject *new_CThostFtdcExchangeOrderField(CThostFtdcExchangeOrderField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcExchangeOrderField", "ccssdicscicdcisissssssicisisccciissssssssi",
                               p->OrderPriceType, p->Direction, p->CombOffsetFlag, p->CombHedgeFlag, p->LimitPrice,
                               p->VolumeTotalOriginal, p->TimeCondition, p->GTDDate, p->VolumeCondition, p->MinVolume,
                               p->ContingentCondition, p->StopPrice, p->ForceCloseReason, p->IsAutoSuspend,
                               p->BusinessUnit, p->RequestID, p->OrderLocalID, p->ExchangeID, p->ParticipantID,
                               p->ClientID, p->ExchangeInstID, p->TraderID, p->InstallID, p->OrderSubmitStatus,
                               p->NotifySequence, p->TradingDay, p->SettlementID, p->OrderSysID, p->OrderSource,
                               p->OrderStatus, p->OrderType, p->VolumeTraded, p->VolumeTotal, p->InsertDate,
                               p->InsertTime, p->ActiveTime, p->SuspendTime, p->UpdateTime, p->CancelTime,
                               p->ActiveTraderID, p->ClearingPartID, p->SequenceNo);
}

CThostFtdcExchangeOrderField *from_CThostFtdcExchangeOrderField(PyObject * p) {
    CThostFtdcExchangeOrderField *t = (CThostFtdcExchangeOrderField *) calloc(1, sizeof(CThostFtdcExchangeOrderField));
    memset(t, 0, sizeof(CThostFtdcExchangeOrderField));
    t->OrderPriceType = PyString_AsString(PyObject_GetAttrString(p, "OrderPriceType"))[0];
    t->Direction = PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
    strcpy(t->CombOffsetFlag, PyString_AsString(PyObject_GetAttrString(p, "CombOffsetFlag")));
    strcpy(t->CombHedgeFlag, PyString_AsString(PyObject_GetAttrString(p, "CombHedgeFlag")));
    t->LimitPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
    t->VolumeTotalOriginal = PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTotalOriginal"));
    t->TimeCondition = PyString_AsString(PyObject_GetAttrString(p, "TimeCondition"))[0];
    strcpy(t->GTDDate, PyString_AsString(PyObject_GetAttrString(p, "GTDDate")));
    t->VolumeCondition = PyString_AsString(PyObject_GetAttrString(p, "VolumeCondition"))[0];
    t->MinVolume = PyInt_AsLong(PyObject_GetAttrString(p, "MinVolume"));
    t->ContingentCondition = PyString_AsString(PyObject_GetAttrString(p, "ContingentCondition"))[0];
    t->StopPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "StopPrice"));
    t->ForceCloseReason = PyString_AsString(PyObject_GetAttrString(p, "ForceCloseReason"))[0];
    t->IsAutoSuspend = PyInt_AsLong(PyObject_GetAttrString(p, "IsAutoSuspend"));
    strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
    t->RequestID = PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
    strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
    strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
    strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
    strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    t->OrderSubmitStatus = PyString_AsString(PyObject_GetAttrString(p, "OrderSubmitStatus"))[0];
    t->NotifySequence = PyInt_AsLong(PyObject_GetAttrString(p, "NotifySequence"));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->SettlementID = PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
    strcpy(t->OrderSysID, PyString_AsString(PyObject_GetAttrString(p, "OrderSysID")));
    t->OrderSource = PyString_AsString(PyObject_GetAttrString(p, "OrderSource"))[0];
    t->OrderStatus = PyString_AsString(PyObject_GetAttrString(p, "OrderStatus"))[0];
    t->OrderType = PyString_AsString(PyObject_GetAttrString(p, "OrderType"))[0];
    t->VolumeTraded = PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTraded"));
    t->VolumeTotal = PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTotal"));
    strcpy(t->InsertDate, PyString_AsString(PyObject_GetAttrString(p, "InsertDate")));
    strcpy(t->InsertTime, PyString_AsString(PyObject_GetAttrString(p, "InsertTime")));
    strcpy(t->ActiveTime, PyString_AsString(PyObject_GetAttrString(p, "ActiveTime")));
    strcpy(t->SuspendTime, PyString_AsString(PyObject_GetAttrString(p, "SuspendTime")));
    strcpy(t->UpdateTime, PyString_AsString(PyObject_GetAttrString(p, "UpdateTime")));
    strcpy(t->CancelTime, PyString_AsString(PyObject_GetAttrString(p, "CancelTime")));
    strcpy(t->ActiveTraderID, PyString_AsString(PyObject_GetAttrString(p, "ActiveTraderID")));
    strcpy(t->ClearingPartID, PyString_AsString(PyObject_GetAttrString(p, "ClearingPartID")));
    t->SequenceNo = PyInt_AsLong(PyObject_GetAttrString(p, "SequenceNo"));

    return t;
};

PyObject *new_CThostFtdcExchangeOrderInsertErrorField(CThostFtdcExchangeOrderInsertErrorField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcExchangeOrderInsertErrorField", "sssisis",
                               p->ExchangeID, p->ParticipantID, p->TraderID, p->InstallID, p->OrderLocalID, p->ErrorID,
                               p->ErrorMsg);
}

CThostFtdcExchangeOrderInsertErrorField *from_CThostFtdcExchangeOrderInsertErrorField(PyObject * p) {
    CThostFtdcExchangeOrderInsertErrorField *t = (CThostFtdcExchangeOrderInsertErrorField *) calloc(1,
                                                                                                    sizeof(CThostFtdcExchangeOrderInsertErrorField));
    memset(t, 0, sizeof(CThostFtdcExchangeOrderInsertErrorField));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
    strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
    t->ErrorID = PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
    strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));

    return t;
};

PyObject *new_CThostFtdcInputOrderActionField(CThostFtdcInputOrderActionField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcInputOrderActionField", "ssisiiisscdiss",
                               p->BrokerID, p->InvestorID, p->OrderActionRef, p->OrderRef, p->RequestID, p->FrontID,
                               p->SessionID, p->ExchangeID, p->OrderSysID, p->ActionFlag, p->LimitPrice,
                               p->VolumeChange, p->UserID, p->InstrumentID);
}

CThostFtdcInputOrderActionField *from_CThostFtdcInputOrderActionField(PyObject * p) {
    CThostFtdcInputOrderActionField *t = (CThostFtdcInputOrderActionField *) calloc(1,
                                                                                    sizeof(CThostFtdcInputOrderActionField));
    memset(t, 0, sizeof(CThostFtdcInputOrderActionField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    t->OrderActionRef = PyInt_AsLong(PyObject_GetAttrString(p, "OrderActionRef"));
    strcpy(t->OrderRef, PyString_AsString(PyObject_GetAttrString(p, "OrderRef")));
    t->RequestID = PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
    t->FrontID = PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->OrderSysID, PyString_AsString(PyObject_GetAttrString(p, "OrderSysID")));
    t->ActionFlag = PyString_AsString(PyObject_GetAttrString(p, "ActionFlag"))[0];
    t->LimitPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
    t->VolumeChange = PyInt_AsLong(PyObject_GetAttrString(p, "VolumeChange"));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));

    return t;
};

PyObject *new_CThostFtdcOrderActionField(CThostFtdcOrderActionField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcOrderActionField", "ssisiiisscdisssissssscsss",
                               p->BrokerID, p->InvestorID, p->OrderActionRef, p->OrderRef, p->RequestID, p->FrontID,
                               p->SessionID, p->ExchangeID, p->OrderSysID, p->ActionFlag, p->LimitPrice,
                               p->VolumeChange, p->ActionDate, p->ActionTime, p->TraderID, p->InstallID,
                               p->OrderLocalID, p->ActionLocalID, p->ParticipantID, p->ClientID, p->BusinessUnit,
                               p->OrderActionStatus, p->UserID, p->StatusMsg, p->InstrumentID);
}

CThostFtdcOrderActionField *from_CThostFtdcOrderActionField(PyObject * p) {
    CThostFtdcOrderActionField *t = (CThostFtdcOrderActionField *) calloc(1, sizeof(CThostFtdcOrderActionField));
    memset(t, 0, sizeof(CThostFtdcOrderActionField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    t->OrderActionRef = PyInt_AsLong(PyObject_GetAttrString(p, "OrderActionRef"));
    strcpy(t->OrderRef, PyString_AsString(PyObject_GetAttrString(p, "OrderRef")));
    t->RequestID = PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
    t->FrontID = PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->OrderSysID, PyString_AsString(PyObject_GetAttrString(p, "OrderSysID")));
    t->ActionFlag = PyString_AsString(PyObject_GetAttrString(p, "ActionFlag"))[0];
    t->LimitPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
    t->VolumeChange = PyInt_AsLong(PyObject_GetAttrString(p, "VolumeChange"));
    strcpy(t->ActionDate, PyString_AsString(PyObject_GetAttrString(p, "ActionDate")));
    strcpy(t->ActionTime, PyString_AsString(PyObject_GetAttrString(p, "ActionTime")));
    strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
    strcpy(t->ActionLocalID, PyString_AsString(PyObject_GetAttrString(p, "ActionLocalID")));
    strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
    strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
    strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
    t->OrderActionStatus = PyString_AsString(PyObject_GetAttrString(p, "OrderActionStatus"))[0];
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    strcpy(t->StatusMsg, PyString_AsString(PyObject_GetAttrString(p, "StatusMsg")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));

    return t;
};

PyObject *new_CThostFtdcExchangeOrderActionField(CThostFtdcExchangeOrderActionField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcExchangeOrderActionField", "sscdisssissssscs",
                               p->ExchangeID, p->OrderSysID, p->ActionFlag, p->LimitPrice, p->VolumeChange,
                               p->ActionDate, p->ActionTime, p->TraderID, p->InstallID, p->OrderLocalID,
                               p->ActionLocalID, p->ParticipantID, p->ClientID, p->BusinessUnit, p->OrderActionStatus,
                               p->UserID);
}

CThostFtdcExchangeOrderActionField *from_CThostFtdcExchangeOrderActionField(PyObject * p) {
    CThostFtdcExchangeOrderActionField *t = (CThostFtdcExchangeOrderActionField *) calloc(1,
                                                                                          sizeof(CThostFtdcExchangeOrderActionField));
    memset(t, 0, sizeof(CThostFtdcExchangeOrderActionField));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->OrderSysID, PyString_AsString(PyObject_GetAttrString(p, "OrderSysID")));
    t->ActionFlag = PyString_AsString(PyObject_GetAttrString(p, "ActionFlag"))[0];
    t->LimitPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
    t->VolumeChange = PyInt_AsLong(PyObject_GetAttrString(p, "VolumeChange"));
    strcpy(t->ActionDate, PyString_AsString(PyObject_GetAttrString(p, "ActionDate")));
    strcpy(t->ActionTime, PyString_AsString(PyObject_GetAttrString(p, "ActionTime")));
    strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
    strcpy(t->ActionLocalID, PyString_AsString(PyObject_GetAttrString(p, "ActionLocalID")));
    strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
    strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
    strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
    t->OrderActionStatus = PyString_AsString(PyObject_GetAttrString(p, "OrderActionStatus"))[0];
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));

    return t;
};

PyObject *new_CThostFtdcExchangeOrderActionErrorField(CThostFtdcExchangeOrderActionErrorField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcExchangeOrderActionErrorField", "sssissis",
                               p->ExchangeID, p->OrderSysID, p->TraderID, p->InstallID, p->OrderLocalID,
                               p->ActionLocalID, p->ErrorID, p->ErrorMsg);
}

CThostFtdcExchangeOrderActionErrorField *from_CThostFtdcExchangeOrderActionErrorField(PyObject * p) {
    CThostFtdcExchangeOrderActionErrorField *t = (CThostFtdcExchangeOrderActionErrorField *) calloc(1,
                                                                                                    sizeof(CThostFtdcExchangeOrderActionErrorField));
    memset(t, 0, sizeof(CThostFtdcExchangeOrderActionErrorField));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->OrderSysID, PyString_AsString(PyObject_GetAttrString(p, "OrderSysID")));
    strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
    strcpy(t->ActionLocalID, PyString_AsString(PyObject_GetAttrString(p, "ActionLocalID")));
    t->ErrorID = PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
    strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));

    return t;
};

PyObject *new_CThostFtdcExchangeTradeField(CThostFtdcExchangeTradeField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcExchangeTradeField", "sscssscsccdissccssssic",
                               p->ExchangeID, p->TradeID, p->Direction, p->OrderSysID, p->ParticipantID, p->ClientID,
                               p->TradingRole, p->ExchangeInstID, p->OffsetFlag, p->HedgeFlag, p->Price, p->Volume,
                               p->TradeDate, p->TradeTime, p->TradeType, p->PriceSource, p->TraderID, p->OrderLocalID,
                               p->ClearingPartID, p->BusinessUnit, p->SequenceNo, p->TradeSource);
}

CThostFtdcExchangeTradeField *from_CThostFtdcExchangeTradeField(PyObject * p) {
    CThostFtdcExchangeTradeField *t = (CThostFtdcExchangeTradeField *) calloc(1, sizeof(CThostFtdcExchangeTradeField));
    memset(t, 0, sizeof(CThostFtdcExchangeTradeField));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->TradeID, PyString_AsString(PyObject_GetAttrString(p, "TradeID")));
    t->Direction = PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
    strcpy(t->OrderSysID, PyString_AsString(PyObject_GetAttrString(p, "OrderSysID")));
    strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
    strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
    t->TradingRole = PyString_AsString(PyObject_GetAttrString(p, "TradingRole"))[0];
    strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
    t->OffsetFlag = PyString_AsString(PyObject_GetAttrString(p, "OffsetFlag"))[0];
    t->HedgeFlag = PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
    t->Price = PyFloat_AsDouble(PyObject_GetAttrString(p, "Price"));
    t->Volume = PyInt_AsLong(PyObject_GetAttrString(p, "Volume"));
    strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
    strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
    t->TradeType = PyString_AsString(PyObject_GetAttrString(p, "TradeType"))[0];
    t->PriceSource = PyString_AsString(PyObject_GetAttrString(p, "PriceSource"))[0];
    strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
    strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
    strcpy(t->ClearingPartID, PyString_AsString(PyObject_GetAttrString(p, "ClearingPartID")));
    strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
    t->SequenceNo = PyInt_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
    t->TradeSource = PyString_AsString(PyObject_GetAttrString(p, "TradeSource"))[0];

    return t;
};

PyObject *new_CThostFtdcTradeField(CThostFtdcTradeField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcTradeField", "ssssssscssscsccdissccssssisiic",
                               p->BrokerID, p->InvestorID, p->InstrumentID, p->OrderRef, p->UserID, p->ExchangeID,
                               p->TradeID, p->Direction, p->OrderSysID, p->ParticipantID, p->ClientID, p->TradingRole,
                               p->ExchangeInstID, p->OffsetFlag, p->HedgeFlag, p->Price, p->Volume, p->TradeDate,
                               p->TradeTime, p->TradeType, p->PriceSource, p->TraderID, p->OrderLocalID,
                               p->ClearingPartID, p->BusinessUnit, p->SequenceNo, p->TradingDay, p->SettlementID,
                               p->BrokerOrderSeq, p->TradeSource);
}

CThostFtdcTradeField *from_CThostFtdcTradeField(PyObject * p) {
    CThostFtdcTradeField *t = (CThostFtdcTradeField *) calloc(1, sizeof(CThostFtdcTradeField));
    memset(t, 0, sizeof(CThostFtdcTradeField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    strcpy(t->OrderRef, PyString_AsString(PyObject_GetAttrString(p, "OrderRef")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->TradeID, PyString_AsString(PyObject_GetAttrString(p, "TradeID")));
    t->Direction = PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
    strcpy(t->OrderSysID, PyString_AsString(PyObject_GetAttrString(p, "OrderSysID")));
    strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
    strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
    t->TradingRole = PyString_AsString(PyObject_GetAttrString(p, "TradingRole"))[0];
    strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
    t->OffsetFlag = PyString_AsString(PyObject_GetAttrString(p, "OffsetFlag"))[0];
    t->HedgeFlag = PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
    t->Price = PyFloat_AsDouble(PyObject_GetAttrString(p, "Price"));
    t->Volume = PyInt_AsLong(PyObject_GetAttrString(p, "Volume"));
    strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
    strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
    t->TradeType = PyString_AsString(PyObject_GetAttrString(p, "TradeType"))[0];
    t->PriceSource = PyString_AsString(PyObject_GetAttrString(p, "PriceSource"))[0];
    strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
    strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
    strcpy(t->ClearingPartID, PyString_AsString(PyObject_GetAttrString(p, "ClearingPartID")));
    strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
    t->SequenceNo = PyInt_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->SettlementID = PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
    t->BrokerOrderSeq = PyInt_AsLong(PyObject_GetAttrString(p, "BrokerOrderSeq"));
    t->TradeSource = PyString_AsString(PyObject_GetAttrString(p, "TradeSource"))[0];

    return t;
};

PyObject *new_CThostFtdcUserSessionField(CThostFtdcUserSessionField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcUserSessionField", "iisssssssss",
                               p->FrontID, p->SessionID, p->BrokerID, p->UserID, p->LoginDate, p->LoginTime,
                               p->IPAddress, p->UserProductInfo, p->InterfaceProductInfo, p->ProtocolInfo,
                               p->MacAddress);
}

CThostFtdcUserSessionField *from_CThostFtdcUserSessionField(PyObject * p) {
    CThostFtdcUserSessionField *t = (CThostFtdcUserSessionField *) calloc(1, sizeof(CThostFtdcUserSessionField));
    memset(t, 0, sizeof(CThostFtdcUserSessionField));
    t->FrontID = PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    strcpy(t->LoginDate, PyString_AsString(PyObject_GetAttrString(p, "LoginDate")));
    strcpy(t->LoginTime, PyString_AsString(PyObject_GetAttrString(p, "LoginTime")));
    strcpy(t->IPAddress, PyString_AsString(PyObject_GetAttrString(p, "IPAddress")));
    strcpy(t->UserProductInfo, PyString_AsString(PyObject_GetAttrString(p, "UserProductInfo")));
    strcpy(t->InterfaceProductInfo, PyString_AsString(PyObject_GetAttrString(p, "InterfaceProductInfo")));
    strcpy(t->ProtocolInfo, PyString_AsString(PyObject_GetAttrString(p, "ProtocolInfo")));
    strcpy(t->MacAddress, PyString_AsString(PyObject_GetAttrString(p, "MacAddress")));

    return t;
};

PyObject *new_CThostFtdcQueryMaxOrderVolumeField(CThostFtdcQueryMaxOrderVolumeField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQueryMaxOrderVolumeField", "sssccci",
                               p->BrokerID, p->InvestorID, p->InstrumentID, p->Direction, p->OffsetFlag, p->HedgeFlag,
                               p->MaxVolume);
}

CThostFtdcQueryMaxOrderVolumeField *from_CThostFtdcQueryMaxOrderVolumeField(PyObject * p) {
    CThostFtdcQueryMaxOrderVolumeField *t = (CThostFtdcQueryMaxOrderVolumeField *) calloc(1,
                                                                                          sizeof(CThostFtdcQueryMaxOrderVolumeField));
    memset(t, 0, sizeof(CThostFtdcQueryMaxOrderVolumeField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    t->Direction = PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
    t->OffsetFlag = PyString_AsString(PyObject_GetAttrString(p, "OffsetFlag"))[0];
    t->HedgeFlag = PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
    t->MaxVolume = PyInt_AsLong(PyObject_GetAttrString(p, "MaxVolume"));

    return t;
};

PyObject *new_CThostFtdcSettlementInfoConfirmField(CThostFtdcSettlementInfoConfirmField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcSettlementInfoConfirmField", "ssss",
                               p->BrokerID, p->InvestorID, p->ConfirmDate, p->ConfirmTime);
}

CThostFtdcSettlementInfoConfirmField *from_CThostFtdcSettlementInfoConfirmField(PyObject * p) {
    CThostFtdcSettlementInfoConfirmField *t = (CThostFtdcSettlementInfoConfirmField *) calloc(1,
                                                                                              sizeof(CThostFtdcSettlementInfoConfirmField));
    memset(t, 0, sizeof(CThostFtdcSettlementInfoConfirmField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->ConfirmDate, PyString_AsString(PyObject_GetAttrString(p, "ConfirmDate")));
    strcpy(t->ConfirmTime, PyString_AsString(PyObject_GetAttrString(p, "ConfirmTime")));

    return t;
};

PyObject *new_CThostFtdcSyncDepositField(CThostFtdcSyncDepositField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcSyncDepositField", "sssdis",
                               p->DepositSeqNo, p->BrokerID, p->InvestorID, p->Deposit, p->IsForce, p->CurrencyID);
}

CThostFtdcSyncDepositField *from_CThostFtdcSyncDepositField(PyObject * p) {
    CThostFtdcSyncDepositField *t = (CThostFtdcSyncDepositField *) calloc(1, sizeof(CThostFtdcSyncDepositField));
    memset(t, 0, sizeof(CThostFtdcSyncDepositField));
    strcpy(t->DepositSeqNo, PyString_AsString(PyObject_GetAttrString(p, "DepositSeqNo")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    t->Deposit = PyFloat_AsDouble(PyObject_GetAttrString(p, "Deposit"));
    t->IsForce = PyInt_AsLong(PyObject_GetAttrString(p, "IsForce"));
    strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));

    return t;
};

PyObject *new_CThostFtdcSyncFundMortgageField(CThostFtdcSyncFundMortgageField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcSyncFundMortgageField", "ssssds",
                               p->MortgageSeqNo, p->BrokerID, p->InvestorID, p->FromCurrencyID, p->MortgageAmount,
                               p->ToCurrencyID);
}

CThostFtdcSyncFundMortgageField *from_CThostFtdcSyncFundMortgageField(PyObject * p) {
    CThostFtdcSyncFundMortgageField *t = (CThostFtdcSyncFundMortgageField *) calloc(1,
                                                                                    sizeof(CThostFtdcSyncFundMortgageField));
    memset(t, 0, sizeof(CThostFtdcSyncFundMortgageField));
    strcpy(t->MortgageSeqNo, PyString_AsString(PyObject_GetAttrString(p, "MortgageSeqNo")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->FromCurrencyID, PyString_AsString(PyObject_GetAttrString(p, "FromCurrencyID")));
    t->MortgageAmount = PyFloat_AsDouble(PyObject_GetAttrString(p, "MortgageAmount"));
    strcpy(t->ToCurrencyID, PyString_AsString(PyObject_GetAttrString(p, "ToCurrencyID")));

    return t;
};

PyObject *new_CThostFtdcBrokerSyncField(CThostFtdcBrokerSyncField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcBrokerSyncField", "s",
                               p->BrokerID);
}

CThostFtdcBrokerSyncField *from_CThostFtdcBrokerSyncField(PyObject * p) {
    CThostFtdcBrokerSyncField *t = (CThostFtdcBrokerSyncField *) calloc(1, sizeof(CThostFtdcBrokerSyncField));
    memset(t, 0, sizeof(CThostFtdcBrokerSyncField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

    return t;
};

PyObject *new_CThostFtdcSyncingInvestorField(CThostFtdcSyncingInvestorField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcSyncingInvestorField", "sssscsissssss",
                               p->InvestorID, p->BrokerID, p->InvestorGroupID, p->InvestorName, p->IdentifiedCardType,
                               p->IdentifiedCardNo, p->IsActive, p->Telephone, p->Address, p->OpenDate, p->Mobile,
                               p->CommModelID, p->MarginModelID);
}

CThostFtdcSyncingInvestorField *from_CThostFtdcSyncingInvestorField(PyObject * p) {
    CThostFtdcSyncingInvestorField *t = (CThostFtdcSyncingInvestorField *) calloc(1,
                                                                                  sizeof(CThostFtdcSyncingInvestorField));
    memset(t, 0, sizeof(CThostFtdcSyncingInvestorField));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorGroupID, PyString_AsString(PyObject_GetAttrString(p, "InvestorGroupID")));
    strcpy(t->InvestorName, PyString_AsString(PyObject_GetAttrString(p, "InvestorName")));
    t->IdentifiedCardType = PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardType"))[0];
    strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
    t->IsActive = PyInt_AsLong(PyObject_GetAttrString(p, "IsActive"));
    strcpy(t->Telephone, PyString_AsString(PyObject_GetAttrString(p, "Telephone")));
    strcpy(t->Address, PyString_AsString(PyObject_GetAttrString(p, "Address")));
    strcpy(t->OpenDate, PyString_AsString(PyObject_GetAttrString(p, "OpenDate")));
    strcpy(t->Mobile, PyString_AsString(PyObject_GetAttrString(p, "Mobile")));
    strcpy(t->CommModelID, PyString_AsString(PyObject_GetAttrString(p, "CommModelID")));
    strcpy(t->MarginModelID, PyString_AsString(PyObject_GetAttrString(p, "MarginModelID")));

    return t;
};

PyObject *new_CThostFtdcSyncingTradingCodeField(CThostFtdcSyncingTradingCodeField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcSyncingTradingCodeField", "ssssic",
                               p->InvestorID, p->BrokerID, p->ExchangeID, p->ClientID, p->IsActive, p->ClientIDType);
}

CThostFtdcSyncingTradingCodeField *from_CThostFtdcSyncingTradingCodeField(PyObject * p) {
    CThostFtdcSyncingTradingCodeField *t = (CThostFtdcSyncingTradingCodeField *) calloc(1,
                                                                                        sizeof(CThostFtdcSyncingTradingCodeField));
    memset(t, 0, sizeof(CThostFtdcSyncingTradingCodeField));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
    t->IsActive = PyInt_AsLong(PyObject_GetAttrString(p, "IsActive"));
    t->ClientIDType = PyString_AsString(PyObject_GetAttrString(p, "ClientIDType"))[0];

    return t;
};

PyObject *new_CThostFtdcSyncingInvestorGroupField(CThostFtdcSyncingInvestorGroupField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcSyncingInvestorGroupField", "sss",
                               p->BrokerID, p->InvestorGroupID, p->InvestorGroupName);
}

CThostFtdcSyncingInvestorGroupField *from_CThostFtdcSyncingInvestorGroupField(PyObject * p) {
    CThostFtdcSyncingInvestorGroupField *t = (CThostFtdcSyncingInvestorGroupField *) calloc(1,
                                                                                            sizeof(CThostFtdcSyncingInvestorGroupField));
    memset(t, 0, sizeof(CThostFtdcSyncingInvestorGroupField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorGroupID, PyString_AsString(PyObject_GetAttrString(p, "InvestorGroupID")));
    strcpy(t->InvestorGroupName, PyString_AsString(PyObject_GetAttrString(p, "InvestorGroupName")));

    return t;
};

PyObject *new_CThostFtdcSyncingTradingAccountField(CThostFtdcSyncingTradingAccountField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcSyncingTradingAccountField",
                               "ssdddddddddddddddddddddsiddddddsdddddddddddddd",
                               p->BrokerID, p->AccountID, p->PreMortgage, p->PreCredit, p->PreDeposit, p->PreBalance,
                               p->PreMargin, p->InterestBase, p->Interest, p->Deposit, p->Withdraw, p->FrozenMargin,
                               p->FrozenCash, p->FrozenCommission, p->CurrMargin, p->CashIn, p->Commission,
                               p->CloseProfit, p->PositionProfit, p->Balance, p->Available, p->WithdrawQuota,
                               p->Reserve, p->TradingDay, p->SettlementID, p->Credit, p->Mortgage, p->ExchangeMargin,
                               p->DeliveryMargin, p->ExchangeDeliveryMargin, p->ReserveBalance, p->CurrencyID,
                               p->PreFundMortgageIn, p->PreFundMortgageOut, p->FundMortgageIn, p->FundMortgageOut,
                               p->FundMortgageAvailable, p->MortgageableFund, p->SpecProductMargin,
                               p->SpecProductFrozenMargin, p->SpecProductCommission, p->SpecProductFrozenCommission,
                               p->SpecProductPositionProfit, p->SpecProductCloseProfit,
                               p->SpecProductPositionProfitByAlg, p->SpecProductExchangeMargin);
}

CThostFtdcSyncingTradingAccountField *from_CThostFtdcSyncingTradingAccountField(PyObject * p) {
    CThostFtdcSyncingTradingAccountField *t = (CThostFtdcSyncingTradingAccountField *) calloc(1,
                                                                                              sizeof(CThostFtdcSyncingTradingAccountField));
    memset(t, 0, sizeof(CThostFtdcSyncingTradingAccountField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
    t->PreMortgage = PyFloat_AsDouble(PyObject_GetAttrString(p, "PreMortgage"));
    t->PreCredit = PyFloat_AsDouble(PyObject_GetAttrString(p, "PreCredit"));
    t->PreDeposit = PyFloat_AsDouble(PyObject_GetAttrString(p, "PreDeposit"));
    t->PreBalance = PyFloat_AsDouble(PyObject_GetAttrString(p, "PreBalance"));
    t->PreMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "PreMargin"));
    t->InterestBase = PyFloat_AsDouble(PyObject_GetAttrString(p, "InterestBase"));
    t->Interest = PyFloat_AsDouble(PyObject_GetAttrString(p, "Interest"));
    t->Deposit = PyFloat_AsDouble(PyObject_GetAttrString(p, "Deposit"));
    t->Withdraw = PyFloat_AsDouble(PyObject_GetAttrString(p, "Withdraw"));
    t->FrozenMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenMargin"));
    t->FrozenCash = PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenCash"));
    t->FrozenCommission = PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenCommission"));
    t->CurrMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "CurrMargin"));
    t->CashIn = PyFloat_AsDouble(PyObject_GetAttrString(p, "CashIn"));
    t->Commission = PyFloat_AsDouble(PyObject_GetAttrString(p, "Commission"));
    t->CloseProfit = PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfit"));
    t->PositionProfit = PyFloat_AsDouble(PyObject_GetAttrString(p, "PositionProfit"));
    t->Balance = PyFloat_AsDouble(PyObject_GetAttrString(p, "Balance"));
    t->Available = PyFloat_AsDouble(PyObject_GetAttrString(p, "Available"));
    t->WithdrawQuota = PyFloat_AsDouble(PyObject_GetAttrString(p, "WithdrawQuota"));
    t->Reserve = PyFloat_AsDouble(PyObject_GetAttrString(p, "Reserve"));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->SettlementID = PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
    t->Credit = PyFloat_AsDouble(PyObject_GetAttrString(p, "Credit"));
    t->Mortgage = PyFloat_AsDouble(PyObject_GetAttrString(p, "Mortgage"));
    t->ExchangeMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchangeMargin"));
    t->DeliveryMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "DeliveryMargin"));
    t->ExchangeDeliveryMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchangeDeliveryMargin"));
    t->ReserveBalance = PyFloat_AsDouble(PyObject_GetAttrString(p, "ReserveBalance"));
    strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
    t->PreFundMortgageIn = PyFloat_AsDouble(PyObject_GetAttrString(p, "PreFundMortgageIn"));
    t->PreFundMortgageOut = PyFloat_AsDouble(PyObject_GetAttrString(p, "PreFundMortgageOut"));
    t->FundMortgageIn = PyFloat_AsDouble(PyObject_GetAttrString(p, "FundMortgageIn"));
    t->FundMortgageOut = PyFloat_AsDouble(PyObject_GetAttrString(p, "FundMortgageOut"));
    t->FundMortgageAvailable = PyFloat_AsDouble(PyObject_GetAttrString(p, "FundMortgageAvailable"));
    t->MortgageableFund = PyFloat_AsDouble(PyObject_GetAttrString(p, "MortgageableFund"));
    t->SpecProductMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "SpecProductMargin"));
    t->SpecProductFrozenMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "SpecProductFrozenMargin"));
    t->SpecProductCommission = PyFloat_AsDouble(PyObject_GetAttrString(p, "SpecProductCommission"));
    t->SpecProductFrozenCommission = PyFloat_AsDouble(PyObject_GetAttrString(p, "SpecProductFrozenCommission"));
    t->SpecProductPositionProfit = PyFloat_AsDouble(PyObject_GetAttrString(p, "SpecProductPositionProfit"));
    t->SpecProductCloseProfit = PyFloat_AsDouble(PyObject_GetAttrString(p, "SpecProductCloseProfit"));
    t->SpecProductPositionProfitByAlg = PyFloat_AsDouble(PyObject_GetAttrString(p, "SpecProductPositionProfitByAlg"));
    t->SpecProductExchangeMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "SpecProductExchangeMargin"));

    return t;
};

PyObject *new_CThostFtdcSyncingInvestorPositionField(CThostFtdcSyncingInvestorPositionField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcSyncingInvestorPositionField",
                               "sssccciiiiddiiddddddddddddddsiddiiiddiddidi",
                               p->InstrumentID, p->BrokerID, p->InvestorID, p->PosiDirection, p->HedgeFlag,
                               p->PositionDate, p->YdPosition, p->Position, p->LongFrozen, p->ShortFrozen,
                               p->LongFrozenAmount, p->ShortFrozenAmount, p->OpenVolume, p->CloseVolume, p->OpenAmount,
                               p->CloseAmount, p->PositionCost, p->PreMargin, p->UseMargin, p->FrozenMargin,
                               p->FrozenCash, p->FrozenCommission, p->CashIn, p->Commission, p->CloseProfit,
                               p->PositionProfit, p->PreSettlementPrice, p->SettlementPrice, p->TradingDay,
                               p->SettlementID, p->OpenCost, p->ExchangeMargin, p->CombPosition, p->CombLongFrozen,
                               p->CombShortFrozen, p->CloseProfitByDate, p->CloseProfitByTrade, p->TodayPosition,
                               p->MarginRateByMoney, p->MarginRateByVolume, p->StrikeFrozen, p->StrikeFrozenAmount,
                               p->AbandonFrozen);
}

CThostFtdcSyncingInvestorPositionField *from_CThostFtdcSyncingInvestorPositionField(PyObject * p) {
    CThostFtdcSyncingInvestorPositionField *t = (CThostFtdcSyncingInvestorPositionField *) calloc(1,
                                                                                                  sizeof(CThostFtdcSyncingInvestorPositionField));
    memset(t, 0, sizeof(CThostFtdcSyncingInvestorPositionField));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    t->PosiDirection = PyString_AsString(PyObject_GetAttrString(p, "PosiDirection"))[0];
    t->HedgeFlag = PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
    t->PositionDate = PyString_AsString(PyObject_GetAttrString(p, "PositionDate"))[0];
    t->YdPosition = PyInt_AsLong(PyObject_GetAttrString(p, "YdPosition"));
    t->Position = PyInt_AsLong(PyObject_GetAttrString(p, "Position"));
    t->LongFrozen = PyInt_AsLong(PyObject_GetAttrString(p, "LongFrozen"));
    t->ShortFrozen = PyInt_AsLong(PyObject_GetAttrString(p, "ShortFrozen"));
    t->LongFrozenAmount = PyFloat_AsDouble(PyObject_GetAttrString(p, "LongFrozenAmount"));
    t->ShortFrozenAmount = PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortFrozenAmount"));
    t->OpenVolume = PyInt_AsLong(PyObject_GetAttrString(p, "OpenVolume"));
    t->CloseVolume = PyInt_AsLong(PyObject_GetAttrString(p, "CloseVolume"));
    t->OpenAmount = PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenAmount"));
    t->CloseAmount = PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseAmount"));
    t->PositionCost = PyFloat_AsDouble(PyObject_GetAttrString(p, "PositionCost"));
    t->PreMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "PreMargin"));
    t->UseMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "UseMargin"));
    t->FrozenMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenMargin"));
    t->FrozenCash = PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenCash"));
    t->FrozenCommission = PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenCommission"));
    t->CashIn = PyFloat_AsDouble(PyObject_GetAttrString(p, "CashIn"));
    t->Commission = PyFloat_AsDouble(PyObject_GetAttrString(p, "Commission"));
    t->CloseProfit = PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfit"));
    t->PositionProfit = PyFloat_AsDouble(PyObject_GetAttrString(p, "PositionProfit"));
    t->PreSettlementPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "PreSettlementPrice"));
    t->SettlementPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "SettlementPrice"));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->SettlementID = PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
    t->OpenCost = PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenCost"));
    t->ExchangeMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchangeMargin"));
    t->CombPosition = PyInt_AsLong(PyObject_GetAttrString(p, "CombPosition"));
    t->CombLongFrozen = PyInt_AsLong(PyObject_GetAttrString(p, "CombLongFrozen"));
    t->CombShortFrozen = PyInt_AsLong(PyObject_GetAttrString(p, "CombShortFrozen"));
    t->CloseProfitByDate = PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfitByDate"));
    t->CloseProfitByTrade = PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfitByTrade"));
    t->TodayPosition = PyInt_AsLong(PyObject_GetAttrString(p, "TodayPosition"));
    t->MarginRateByMoney = PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginRateByMoney"));
    t->MarginRateByVolume = PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginRateByVolume"));
    t->StrikeFrozen = PyInt_AsLong(PyObject_GetAttrString(p, "StrikeFrozen"));
    t->StrikeFrozenAmount = PyFloat_AsDouble(PyObject_GetAttrString(p, "StrikeFrozenAmount"));
    t->AbandonFrozen = PyInt_AsLong(PyObject_GetAttrString(p, "AbandonFrozen"));

    return t;
};

PyObject *new_CThostFtdcSyncingInstrumentMarginRateField(CThostFtdcSyncingInstrumentMarginRateField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcSyncingInstrumentMarginRateField", "scsscddddi",
                               p->InstrumentID, p->InvestorRange, p->BrokerID, p->InvestorID, p->HedgeFlag,
                               p->LongMarginRatioByMoney, p->LongMarginRatioByVolume, p->ShortMarginRatioByMoney,
                               p->ShortMarginRatioByVolume, p->IsRelative);
}

CThostFtdcSyncingInstrumentMarginRateField *from_CThostFtdcSyncingInstrumentMarginRateField(PyObject * p) {
    CThostFtdcSyncingInstrumentMarginRateField *t = (CThostFtdcSyncingInstrumentMarginRateField *) calloc(1,
                                                                                                          sizeof(CThostFtdcSyncingInstrumentMarginRateField));
    memset(t, 0, sizeof(CThostFtdcSyncingInstrumentMarginRateField));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    t->InvestorRange = PyString_AsString(PyObject_GetAttrString(p, "InvestorRange"))[0];
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    t->HedgeFlag = PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
    t->LongMarginRatioByMoney = PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatioByMoney"));
    t->LongMarginRatioByVolume = PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatioByVolume"));
    t->ShortMarginRatioByMoney = PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatioByMoney"));
    t->ShortMarginRatioByVolume = PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatioByVolume"));
    t->IsRelative = PyInt_AsLong(PyObject_GetAttrString(p, "IsRelative"));

    return t;
};

PyObject *new_CThostFtdcSyncingInstrumentCommissionRateField(CThostFtdcSyncingInstrumentCommissionRateField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcSyncingInstrumentCommissionRateField", "scssdddddd",
                               p->InstrumentID, p->InvestorRange, p->BrokerID, p->InvestorID, p->OpenRatioByMoney,
                               p->OpenRatioByVolume, p->CloseRatioByMoney, p->CloseRatioByVolume,
                               p->CloseTodayRatioByMoney, p->CloseTodayRatioByVolume);
}

CThostFtdcSyncingInstrumentCommissionRateField *from_CThostFtdcSyncingInstrumentCommissionRateField(PyObject * p) {
    CThostFtdcSyncingInstrumentCommissionRateField *t = (CThostFtdcSyncingInstrumentCommissionRateField *) calloc(1,
                                                                                                                  sizeof(CThostFtdcSyncingInstrumentCommissionRateField));
    memset(t, 0, sizeof(CThostFtdcSyncingInstrumentCommissionRateField));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    t->InvestorRange = PyString_AsString(PyObject_GetAttrString(p, "InvestorRange"))[0];
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    t->OpenRatioByMoney = PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenRatioByMoney"));
    t->OpenRatioByVolume = PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenRatioByVolume"));
    t->CloseRatioByMoney = PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseRatioByMoney"));
    t->CloseRatioByVolume = PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseRatioByVolume"));
    t->CloseTodayRatioByMoney = PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseTodayRatioByMoney"));
    t->CloseTodayRatioByVolume = PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseTodayRatioByVolume"));

    return t;
};

PyObject *new_CThostFtdcSyncingInstrumentTradingRightField(CThostFtdcSyncingInstrumentTradingRightField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcSyncingInstrumentTradingRightField", "scssc",
                               p->InstrumentID, p->InvestorRange, p->BrokerID, p->InvestorID, p->TradingRight);
}

CThostFtdcSyncingInstrumentTradingRightField *from_CThostFtdcSyncingInstrumentTradingRightField(PyObject * p) {
    CThostFtdcSyncingInstrumentTradingRightField *t = (CThostFtdcSyncingInstrumentTradingRightField *) calloc(1,
                                                                                                              sizeof(CThostFtdcSyncingInstrumentTradingRightField));
    memset(t, 0, sizeof(CThostFtdcSyncingInstrumentTradingRightField));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    t->InvestorRange = PyString_AsString(PyObject_GetAttrString(p, "InvestorRange"))[0];
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    t->TradingRight = PyString_AsString(PyObject_GetAttrString(p, "TradingRight"))[0];

    return t;
};

PyObject *new_CThostFtdcQryOrderField(CThostFtdcQryOrderField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryOrderField", "sssssss",
                               p->BrokerID, p->InvestorID, p->InstrumentID, p->ExchangeID, p->OrderSysID,
                               p->InsertTimeStart, p->InsertTimeEnd);
}

CThostFtdcQryOrderField *from_CThostFtdcQryOrderField(PyObject * p) {
    CThostFtdcQryOrderField *t = (CThostFtdcQryOrderField *) calloc(1, sizeof(CThostFtdcQryOrderField));
    memset(t, 0, sizeof(CThostFtdcQryOrderField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->OrderSysID, PyString_AsString(PyObject_GetAttrString(p, "OrderSysID")));
    strcpy(t->InsertTimeStart, PyString_AsString(PyObject_GetAttrString(p, "InsertTimeStart")));
    strcpy(t->InsertTimeEnd, PyString_AsString(PyObject_GetAttrString(p, "InsertTimeEnd")));

    return t;
};

PyObject *new_CThostFtdcQryTradeField(CThostFtdcQryTradeField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryTradeField", "sssssss",
                               p->BrokerID, p->InvestorID, p->InstrumentID, p->ExchangeID, p->TradeID,
                               p->TradeTimeStart, p->TradeTimeEnd);
}

CThostFtdcQryTradeField *from_CThostFtdcQryTradeField(PyObject * p) {
    CThostFtdcQryTradeField *t = (CThostFtdcQryTradeField *) calloc(1, sizeof(CThostFtdcQryTradeField));
    memset(t, 0, sizeof(CThostFtdcQryTradeField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->TradeID, PyString_AsString(PyObject_GetAttrString(p, "TradeID")));
    strcpy(t->TradeTimeStart, PyString_AsString(PyObject_GetAttrString(p, "TradeTimeStart")));
    strcpy(t->TradeTimeEnd, PyString_AsString(PyObject_GetAttrString(p, "TradeTimeEnd")));

    return t;
};

PyObject *new_CThostFtdcQryInvestorPositionField(CThostFtdcQryInvestorPositionField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryInvestorPositionField", "sss",
                               p->BrokerID, p->InvestorID, p->InstrumentID);
}

CThostFtdcQryInvestorPositionField *from_CThostFtdcQryInvestorPositionField(PyObject * p) {
    CThostFtdcQryInvestorPositionField *t = (CThostFtdcQryInvestorPositionField *) calloc(1,
                                                                                          sizeof(CThostFtdcQryInvestorPositionField));
    memset(t, 0, sizeof(CThostFtdcQryInvestorPositionField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));

    return t;
};

PyObject *new_CThostFtdcQryTradingAccountField(CThostFtdcQryTradingAccountField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryTradingAccountField", "sss",
                               p->BrokerID, p->InvestorID, p->CurrencyID);
}

CThostFtdcQryTradingAccountField *from_CThostFtdcQryTradingAccountField(PyObject * p) {
    CThostFtdcQryTradingAccountField *t = (CThostFtdcQryTradingAccountField *) calloc(1,
                                                                                      sizeof(CThostFtdcQryTradingAccountField));
    memset(t, 0, sizeof(CThostFtdcQryTradingAccountField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));

    return t;
};

PyObject *new_CThostFtdcQryInvestorField(CThostFtdcQryInvestorField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryInvestorField", "ss",
                               p->BrokerID, p->InvestorID);
}

CThostFtdcQryInvestorField *from_CThostFtdcQryInvestorField(PyObject * p) {
    CThostFtdcQryInvestorField *t = (CThostFtdcQryInvestorField *) calloc(1, sizeof(CThostFtdcQryInvestorField));
    memset(t, 0, sizeof(CThostFtdcQryInvestorField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));

    return t;
};

PyObject *new_CThostFtdcQryTradingCodeField(CThostFtdcQryTradingCodeField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryTradingCodeField", "ssssc",
                               p->BrokerID, p->InvestorID, p->ExchangeID, p->ClientID, p->ClientIDType);
}

CThostFtdcQryTradingCodeField *from_CThostFtdcQryTradingCodeField(PyObject * p) {
    CThostFtdcQryTradingCodeField *t = (CThostFtdcQryTradingCodeField *) calloc(1,
                                                                                sizeof(CThostFtdcQryTradingCodeField));
    memset(t, 0, sizeof(CThostFtdcQryTradingCodeField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
    t->ClientIDType = PyString_AsString(PyObject_GetAttrString(p, "ClientIDType"))[0];

    return t;
};

PyObject *new_CThostFtdcQryInvestorGroupField(CThostFtdcQryInvestorGroupField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryInvestorGroupField", "s",
                               p->BrokerID);
}

CThostFtdcQryInvestorGroupField *from_CThostFtdcQryInvestorGroupField(PyObject * p) {
    CThostFtdcQryInvestorGroupField *t = (CThostFtdcQryInvestorGroupField *) calloc(1,
                                                                                    sizeof(CThostFtdcQryInvestorGroupField));
    memset(t, 0, sizeof(CThostFtdcQryInvestorGroupField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

    return t;
};

PyObject *new_CThostFtdcQryInstrumentMarginRateField(CThostFtdcQryInstrumentMarginRateField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryInstrumentMarginRateField", "sssc",
                               p->BrokerID, p->InvestorID, p->InstrumentID, p->HedgeFlag);
}

CThostFtdcQryInstrumentMarginRateField *from_CThostFtdcQryInstrumentMarginRateField(PyObject * p) {
    CThostFtdcQryInstrumentMarginRateField *t = (CThostFtdcQryInstrumentMarginRateField *) calloc(1,
                                                                                                  sizeof(CThostFtdcQryInstrumentMarginRateField));
    memset(t, 0, sizeof(CThostFtdcQryInstrumentMarginRateField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    t->HedgeFlag = PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];

    return t;
};

PyObject *new_CThostFtdcQryInstrumentCommissionRateField(CThostFtdcQryInstrumentCommissionRateField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryInstrumentCommissionRateField", "sss",
                               p->BrokerID, p->InvestorID, p->InstrumentID);
}

CThostFtdcQryInstrumentCommissionRateField *from_CThostFtdcQryInstrumentCommissionRateField(PyObject * p) {
    CThostFtdcQryInstrumentCommissionRateField *t = (CThostFtdcQryInstrumentCommissionRateField *) calloc(1,
                                                                                                          sizeof(CThostFtdcQryInstrumentCommissionRateField));
    memset(t, 0, sizeof(CThostFtdcQryInstrumentCommissionRateField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));

    return t;
};

PyObject *new_CThostFtdcQryInstrumentTradingRightField(CThostFtdcQryInstrumentTradingRightField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryInstrumentTradingRightField", "sss",
                               p->BrokerID, p->InvestorID, p->InstrumentID);
}

CThostFtdcQryInstrumentTradingRightField *from_CThostFtdcQryInstrumentTradingRightField(PyObject * p) {
    CThostFtdcQryInstrumentTradingRightField *t = (CThostFtdcQryInstrumentTradingRightField *) calloc(1,
                                                                                                      sizeof(CThostFtdcQryInstrumentTradingRightField));
    memset(t, 0, sizeof(CThostFtdcQryInstrumentTradingRightField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));

    return t;
};

PyObject *new_CThostFtdcQryBrokerField(CThostFtdcQryBrokerField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryBrokerField", "s",
                               p->BrokerID);
}

CThostFtdcQryBrokerField *from_CThostFtdcQryBrokerField(PyObject * p) {
    CThostFtdcQryBrokerField *t = (CThostFtdcQryBrokerField *) calloc(1, sizeof(CThostFtdcQryBrokerField));
    memset(t, 0, sizeof(CThostFtdcQryBrokerField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

    return t;
};

PyObject *new_CThostFtdcQryTraderField(CThostFtdcQryTraderField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryTraderField", "sss",
                               p->ExchangeID, p->ParticipantID, p->TraderID);
}

CThostFtdcQryTraderField *from_CThostFtdcQryTraderField(PyObject * p) {
    CThostFtdcQryTraderField *t = (CThostFtdcQryTraderField *) calloc(1, sizeof(CThostFtdcQryTraderField));
    memset(t, 0, sizeof(CThostFtdcQryTraderField));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
    strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));

    return t;
};

PyObject *new_CThostFtdcQrySuperUserFunctionField(CThostFtdcQrySuperUserFunctionField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQrySuperUserFunctionField", "s",
                               p->UserID);
}

CThostFtdcQrySuperUserFunctionField *from_CThostFtdcQrySuperUserFunctionField(PyObject * p) {
    CThostFtdcQrySuperUserFunctionField *t = (CThostFtdcQrySuperUserFunctionField *) calloc(1,
                                                                                            sizeof(CThostFtdcQrySuperUserFunctionField));
    memset(t, 0, sizeof(CThostFtdcQrySuperUserFunctionField));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));

    return t;
};

PyObject *new_CThostFtdcQryUserSessionField(CThostFtdcQryUserSessionField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryUserSessionField", "iiss",
                               p->FrontID, p->SessionID, p->BrokerID, p->UserID);
}

CThostFtdcQryUserSessionField *from_CThostFtdcQryUserSessionField(PyObject * p) {
    CThostFtdcQryUserSessionField *t = (CThostFtdcQryUserSessionField *) calloc(1,
                                                                                sizeof(CThostFtdcQryUserSessionField));
    memset(t, 0, sizeof(CThostFtdcQryUserSessionField));
    t->FrontID = PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));

    return t;
};

PyObject *new_CThostFtdcQryPartBrokerField(CThostFtdcQryPartBrokerField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryPartBrokerField", "sss",
                               p->ExchangeID, p->BrokerID, p->ParticipantID);
}

CThostFtdcQryPartBrokerField *from_CThostFtdcQryPartBrokerField(PyObject * p) {
    CThostFtdcQryPartBrokerField *t = (CThostFtdcQryPartBrokerField *) calloc(1, sizeof(CThostFtdcQryPartBrokerField));
    memset(t, 0, sizeof(CThostFtdcQryPartBrokerField));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));

    return t;
};

PyObject *new_CThostFtdcQryFrontStatusField(CThostFtdcQryFrontStatusField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryFrontStatusField", "i",
                               p->FrontID);
}

CThostFtdcQryFrontStatusField *from_CThostFtdcQryFrontStatusField(PyObject * p) {
    CThostFtdcQryFrontStatusField *t = (CThostFtdcQryFrontStatusField *) calloc(1,
                                                                                sizeof(CThostFtdcQryFrontStatusField));
    memset(t, 0, sizeof(CThostFtdcQryFrontStatusField));
    t->FrontID = PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));

    return t;
};

PyObject *new_CThostFtdcQryExchangeOrderField(CThostFtdcQryExchangeOrderField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryExchangeOrderField", "sssss",
                               p->ParticipantID, p->ClientID, p->ExchangeInstID, p->ExchangeID, p->TraderID);
}

CThostFtdcQryExchangeOrderField *from_CThostFtdcQryExchangeOrderField(PyObject * p) {
    CThostFtdcQryExchangeOrderField *t = (CThostFtdcQryExchangeOrderField *) calloc(1,
                                                                                    sizeof(CThostFtdcQryExchangeOrderField));
    memset(t, 0, sizeof(CThostFtdcQryExchangeOrderField));
    strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
    strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
    strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));

    return t;
};

PyObject *new_CThostFtdcQryOrderActionField(CThostFtdcQryOrderActionField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryOrderActionField", "sss",
                               p->BrokerID, p->InvestorID, p->ExchangeID);
}

CThostFtdcQryOrderActionField *from_CThostFtdcQryOrderActionField(PyObject * p) {
    CThostFtdcQryOrderActionField *t = (CThostFtdcQryOrderActionField *) calloc(1,
                                                                                sizeof(CThostFtdcQryOrderActionField));
    memset(t, 0, sizeof(CThostFtdcQryOrderActionField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));

    return t;
};

PyObject *new_CThostFtdcQryExchangeOrderActionField(CThostFtdcQryExchangeOrderActionField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryExchangeOrderActionField", "ssss",
                               p->ParticipantID, p->ClientID, p->ExchangeID, p->TraderID);
}

CThostFtdcQryExchangeOrderActionField *from_CThostFtdcQryExchangeOrderActionField(PyObject * p) {
    CThostFtdcQryExchangeOrderActionField *t = (CThostFtdcQryExchangeOrderActionField *) calloc(1,
                                                                                                sizeof(CThostFtdcQryExchangeOrderActionField));
    memset(t, 0, sizeof(CThostFtdcQryExchangeOrderActionField));
    strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
    strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));

    return t;
};

PyObject *new_CThostFtdcQrySuperUserField(CThostFtdcQrySuperUserField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQrySuperUserField", "s",
                               p->UserID);
}

CThostFtdcQrySuperUserField *from_CThostFtdcQrySuperUserField(PyObject * p) {
    CThostFtdcQrySuperUserField *t = (CThostFtdcQrySuperUserField *) calloc(1, sizeof(CThostFtdcQrySuperUserField));
    memset(t, 0, sizeof(CThostFtdcQrySuperUserField));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));

    return t;
};

PyObject *new_CThostFtdcQryExchangeField(CThostFtdcQryExchangeField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryExchangeField", "s",
                               p->ExchangeID);
}

CThostFtdcQryExchangeField *from_CThostFtdcQryExchangeField(PyObject * p) {
    CThostFtdcQryExchangeField *t = (CThostFtdcQryExchangeField *) calloc(1, sizeof(CThostFtdcQryExchangeField));
    memset(t, 0, sizeof(CThostFtdcQryExchangeField));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));

    return t;
};

PyObject *new_CThostFtdcQryProductField(CThostFtdcQryProductField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryProductField", "sc",
                               p->ProductID, p->ProductClass);
}

CThostFtdcQryProductField *from_CThostFtdcQryProductField(PyObject * p) {
    CThostFtdcQryProductField *t = (CThostFtdcQryProductField *) calloc(1, sizeof(CThostFtdcQryProductField));
    memset(t, 0, sizeof(CThostFtdcQryProductField));
    strcpy(t->ProductID, PyString_AsString(PyObject_GetAttrString(p, "ProductID")));
    t->ProductClass = PyString_AsString(PyObject_GetAttrString(p, "ProductClass"))[0];

    return t;
};

PyObject *new_CThostFtdcQryInstrumentField(CThostFtdcQryInstrumentField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryInstrumentField", "ssss",
                               p->InstrumentID, p->ExchangeID, p->ExchangeInstID, p->ProductID);
}

CThostFtdcQryInstrumentField *from_CThostFtdcQryInstrumentField(PyObject * p) {
    CThostFtdcQryInstrumentField *t = (CThostFtdcQryInstrumentField *) calloc(1, sizeof(CThostFtdcQryInstrumentField));
    memset(t, 0, sizeof(CThostFtdcQryInstrumentField));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
    strcpy(t->ProductID, PyString_AsString(PyObject_GetAttrString(p, "ProductID")));

    return t;
};

PyObject *new_CThostFtdcQryDepthMarketDataField(CThostFtdcQryDepthMarketDataField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryDepthMarketDataField", "s",
                               p->InstrumentID);
}

CThostFtdcQryDepthMarketDataField *from_CThostFtdcQryDepthMarketDataField(PyObject * p) {
    CThostFtdcQryDepthMarketDataField *t = (CThostFtdcQryDepthMarketDataField *) calloc(1,
                                                                                        sizeof(CThostFtdcQryDepthMarketDataField));
    memset(t, 0, sizeof(CThostFtdcQryDepthMarketDataField));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));

    return t;
};

PyObject *new_CThostFtdcQryBrokerUserField(CThostFtdcQryBrokerUserField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryBrokerUserField", "ss",
                               p->BrokerID, p->UserID);
}

CThostFtdcQryBrokerUserField *from_CThostFtdcQryBrokerUserField(PyObject * p) {
    CThostFtdcQryBrokerUserField *t = (CThostFtdcQryBrokerUserField *) calloc(1, sizeof(CThostFtdcQryBrokerUserField));
    memset(t, 0, sizeof(CThostFtdcQryBrokerUserField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));

    return t;
};

PyObject *new_CThostFtdcQryBrokerUserFunctionField(CThostFtdcQryBrokerUserFunctionField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryBrokerUserFunctionField", "ss",
                               p->BrokerID, p->UserID);
}

CThostFtdcQryBrokerUserFunctionField *from_CThostFtdcQryBrokerUserFunctionField(PyObject * p) {
    CThostFtdcQryBrokerUserFunctionField *t = (CThostFtdcQryBrokerUserFunctionField *) calloc(1,
                                                                                              sizeof(CThostFtdcQryBrokerUserFunctionField));
    memset(t, 0, sizeof(CThostFtdcQryBrokerUserFunctionField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));

    return t;
};

PyObject *new_CThostFtdcQryTraderOfferField(CThostFtdcQryTraderOfferField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryTraderOfferField", "sss",
                               p->ExchangeID, p->ParticipantID, p->TraderID);
}

CThostFtdcQryTraderOfferField *from_CThostFtdcQryTraderOfferField(PyObject * p) {
    CThostFtdcQryTraderOfferField *t = (CThostFtdcQryTraderOfferField *) calloc(1,
                                                                                sizeof(CThostFtdcQryTraderOfferField));
    memset(t, 0, sizeof(CThostFtdcQryTraderOfferField));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
    strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));

    return t;
};

PyObject *new_CThostFtdcQrySyncDepositField(CThostFtdcQrySyncDepositField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQrySyncDepositField", "ss",
                               p->BrokerID, p->DepositSeqNo);
}

CThostFtdcQrySyncDepositField *from_CThostFtdcQrySyncDepositField(PyObject * p) {
    CThostFtdcQrySyncDepositField *t = (CThostFtdcQrySyncDepositField *) calloc(1,
                                                                                sizeof(CThostFtdcQrySyncDepositField));
    memset(t, 0, sizeof(CThostFtdcQrySyncDepositField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->DepositSeqNo, PyString_AsString(PyObject_GetAttrString(p, "DepositSeqNo")));

    return t;
};

PyObject *new_CThostFtdcQrySettlementInfoField(CThostFtdcQrySettlementInfoField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQrySettlementInfoField", "sss",
                               p->BrokerID, p->InvestorID, p->TradingDay);
}

CThostFtdcQrySettlementInfoField *from_CThostFtdcQrySettlementInfoField(PyObject * p) {
    CThostFtdcQrySettlementInfoField *t = (CThostFtdcQrySettlementInfoField *) calloc(1,
                                                                                      sizeof(CThostFtdcQrySettlementInfoField));
    memset(t, 0, sizeof(CThostFtdcQrySettlementInfoField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));

    return t;
};

PyObject *new_CThostFtdcQryExchangeMarginRateField(CThostFtdcQryExchangeMarginRateField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryExchangeMarginRateField", "ssc",
                               p->BrokerID, p->InstrumentID, p->HedgeFlag);
}

CThostFtdcQryExchangeMarginRateField *from_CThostFtdcQryExchangeMarginRateField(PyObject * p) {
    CThostFtdcQryExchangeMarginRateField *t = (CThostFtdcQryExchangeMarginRateField *) calloc(1,
                                                                                              sizeof(CThostFtdcQryExchangeMarginRateField));
    memset(t, 0, sizeof(CThostFtdcQryExchangeMarginRateField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    t->HedgeFlag = PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];

    return t;
};

PyObject *new_CThostFtdcQryExchangeMarginRateAdjustField(CThostFtdcQryExchangeMarginRateAdjustField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryExchangeMarginRateAdjustField", "ssc",
                               p->BrokerID, p->InstrumentID, p->HedgeFlag);
}

CThostFtdcQryExchangeMarginRateAdjustField *from_CThostFtdcQryExchangeMarginRateAdjustField(PyObject * p) {
    CThostFtdcQryExchangeMarginRateAdjustField *t = (CThostFtdcQryExchangeMarginRateAdjustField *) calloc(1,
                                                                                                          sizeof(CThostFtdcQryExchangeMarginRateAdjustField));
    memset(t, 0, sizeof(CThostFtdcQryExchangeMarginRateAdjustField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    t->HedgeFlag = PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];

    return t;
};

PyObject *new_CThostFtdcQryExchangeRateField(CThostFtdcQryExchangeRateField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryExchangeRateField", "sss",
                               p->BrokerID, p->FromCurrencyID, p->ToCurrencyID);
}

CThostFtdcQryExchangeRateField *from_CThostFtdcQryExchangeRateField(PyObject * p) {
    CThostFtdcQryExchangeRateField *t = (CThostFtdcQryExchangeRateField *) calloc(1,
                                                                                  sizeof(CThostFtdcQryExchangeRateField));
    memset(t, 0, sizeof(CThostFtdcQryExchangeRateField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->FromCurrencyID, PyString_AsString(PyObject_GetAttrString(p, "FromCurrencyID")));
    strcpy(t->ToCurrencyID, PyString_AsString(PyObject_GetAttrString(p, "ToCurrencyID")));

    return t;
};

PyObject *new_CThostFtdcQrySyncFundMortgageField(CThostFtdcQrySyncFundMortgageField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQrySyncFundMortgageField", "ss",
                               p->BrokerID, p->MortgageSeqNo);
}

CThostFtdcQrySyncFundMortgageField *from_CThostFtdcQrySyncFundMortgageField(PyObject * p) {
    CThostFtdcQrySyncFundMortgageField *t = (CThostFtdcQrySyncFundMortgageField *) calloc(1,
                                                                                          sizeof(CThostFtdcQrySyncFundMortgageField));
    memset(t, 0, sizeof(CThostFtdcQrySyncFundMortgageField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->MortgageSeqNo, PyString_AsString(PyObject_GetAttrString(p, "MortgageSeqNo")));

    return t;
};

PyObject *new_CThostFtdcQryHisOrderField(CThostFtdcQryHisOrderField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryHisOrderField", "ssssssssi",
                               p->BrokerID, p->InvestorID, p->InstrumentID, p->ExchangeID, p->OrderSysID,
                               p->InsertTimeStart, p->InsertTimeEnd, p->TradingDay, p->SettlementID);
}

CThostFtdcQryHisOrderField *from_CThostFtdcQryHisOrderField(PyObject * p) {
    CThostFtdcQryHisOrderField *t = (CThostFtdcQryHisOrderField *) calloc(1, sizeof(CThostFtdcQryHisOrderField));
    memset(t, 0, sizeof(CThostFtdcQryHisOrderField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->OrderSysID, PyString_AsString(PyObject_GetAttrString(p, "OrderSysID")));
    strcpy(t->InsertTimeStart, PyString_AsString(PyObject_GetAttrString(p, "InsertTimeStart")));
    strcpy(t->InsertTimeEnd, PyString_AsString(PyObject_GetAttrString(p, "InsertTimeEnd")));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->SettlementID = PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));

    return t;
};

PyObject *new_CThostFtdcOptionInstrMiniMarginField(CThostFtdcOptionInstrMiniMarginField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcOptionInstrMiniMarginField", "scssdci",
                               p->InstrumentID, p->InvestorRange, p->BrokerID, p->InvestorID, p->MinMargin,
                               p->ValueMethod, p->IsRelative);
}

CThostFtdcOptionInstrMiniMarginField *from_CThostFtdcOptionInstrMiniMarginField(PyObject * p) {
    CThostFtdcOptionInstrMiniMarginField *t = (CThostFtdcOptionInstrMiniMarginField *) calloc(1,
                                                                                              sizeof(CThostFtdcOptionInstrMiniMarginField));
    memset(t, 0, sizeof(CThostFtdcOptionInstrMiniMarginField));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    t->InvestorRange = PyString_AsString(PyObject_GetAttrString(p, "InvestorRange"))[0];
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    t->MinMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "MinMargin"));
    t->ValueMethod = PyString_AsString(PyObject_GetAttrString(p, "ValueMethod"))[0];
    t->IsRelative = PyInt_AsLong(PyObject_GetAttrString(p, "IsRelative"));

    return t;
};

PyObject *new_CThostFtdcOptionInstrMarginAdjustField(CThostFtdcOptionInstrMarginAdjustField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcOptionInstrMarginAdjustField", "scssddddddi",
                               p->InstrumentID, p->InvestorRange, p->BrokerID, p->InvestorID,
                               p->SShortMarginRatioByMoney, p->SShortMarginRatioByVolume, p->HShortMarginRatioByMoney,
                               p->HShortMarginRatioByVolume, p->AShortMarginRatioByMoney, p->AShortMarginRatioByVolume,
                               p->IsRelative);
}

CThostFtdcOptionInstrMarginAdjustField *from_CThostFtdcOptionInstrMarginAdjustField(PyObject * p) {
    CThostFtdcOptionInstrMarginAdjustField *t = (CThostFtdcOptionInstrMarginAdjustField *) calloc(1,
                                                                                                  sizeof(CThostFtdcOptionInstrMarginAdjustField));
    memset(t, 0, sizeof(CThostFtdcOptionInstrMarginAdjustField));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    t->InvestorRange = PyString_AsString(PyObject_GetAttrString(p, "InvestorRange"))[0];
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    t->SShortMarginRatioByMoney = PyFloat_AsDouble(PyObject_GetAttrString(p, "SShortMarginRatioByMoney"));
    t->SShortMarginRatioByVolume = PyFloat_AsDouble(PyObject_GetAttrString(p, "SShortMarginRatioByVolume"));
    t->HShortMarginRatioByMoney = PyFloat_AsDouble(PyObject_GetAttrString(p, "HShortMarginRatioByMoney"));
    t->HShortMarginRatioByVolume = PyFloat_AsDouble(PyObject_GetAttrString(p, "HShortMarginRatioByVolume"));
    t->AShortMarginRatioByMoney = PyFloat_AsDouble(PyObject_GetAttrString(p, "AShortMarginRatioByMoney"));
    t->AShortMarginRatioByVolume = PyFloat_AsDouble(PyObject_GetAttrString(p, "AShortMarginRatioByVolume"));
    t->IsRelative = PyInt_AsLong(PyObject_GetAttrString(p, "IsRelative"));

    return t;
};

PyObject *new_CThostFtdcOptionInstrCommRateField(CThostFtdcOptionInstrCommRateField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcOptionInstrCommRateField", "scssdddddddd",
                               p->InstrumentID, p->InvestorRange, p->BrokerID, p->InvestorID, p->OpenRatioByMoney,
                               p->OpenRatioByVolume, p->CloseRatioByMoney, p->CloseRatioByVolume,
                               p->CloseTodayRatioByMoney, p->CloseTodayRatioByVolume, p->StrikeRatioByMoney,
                               p->StrikeRatioByVolume);
}

CThostFtdcOptionInstrCommRateField *from_CThostFtdcOptionInstrCommRateField(PyObject * p) {
    CThostFtdcOptionInstrCommRateField *t = (CThostFtdcOptionInstrCommRateField *) calloc(1,
                                                                                          sizeof(CThostFtdcOptionInstrCommRateField));
    memset(t, 0, sizeof(CThostFtdcOptionInstrCommRateField));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    t->InvestorRange = PyString_AsString(PyObject_GetAttrString(p, "InvestorRange"))[0];
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    t->OpenRatioByMoney = PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenRatioByMoney"));
    t->OpenRatioByVolume = PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenRatioByVolume"));
    t->CloseRatioByMoney = PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseRatioByMoney"));
    t->CloseRatioByVolume = PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseRatioByVolume"));
    t->CloseTodayRatioByMoney = PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseTodayRatioByMoney"));
    t->CloseTodayRatioByVolume = PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseTodayRatioByVolume"));
    t->StrikeRatioByMoney = PyFloat_AsDouble(PyObject_GetAttrString(p, "StrikeRatioByMoney"));
    t->StrikeRatioByVolume = PyFloat_AsDouble(PyObject_GetAttrString(p, "StrikeRatioByVolume"));

    return t;
};

PyObject *new_CThostFtdcOptionInstrTradeCostField(CThostFtdcOptionInstrTradeCostField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcOptionInstrTradeCostField", "ssscddddd",
                               p->BrokerID, p->InvestorID, p->InstrumentID, p->HedgeFlag, p->FixedMargin, p->MiniMargin,
                               p->Royalty, p->ExchFixedMargin, p->ExchMiniMargin);
}

CThostFtdcOptionInstrTradeCostField *from_CThostFtdcOptionInstrTradeCostField(PyObject * p) {
    CThostFtdcOptionInstrTradeCostField *t = (CThostFtdcOptionInstrTradeCostField *) calloc(1,
                                                                                            sizeof(CThostFtdcOptionInstrTradeCostField));
    memset(t, 0, sizeof(CThostFtdcOptionInstrTradeCostField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    t->HedgeFlag = PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
    t->FixedMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "FixedMargin"));
    t->MiniMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "MiniMargin"));
    t->Royalty = PyFloat_AsDouble(PyObject_GetAttrString(p, "Royalty"));
    t->ExchFixedMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchFixedMargin"));
    t->ExchMiniMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchMiniMargin"));

    return t;
};

PyObject *new_CThostFtdcQryOptionInstrTradeCostField(CThostFtdcQryOptionInstrTradeCostField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryOptionInstrTradeCostField", "ssscdd",
                               p->BrokerID, p->InvestorID, p->InstrumentID, p->HedgeFlag, p->InputPrice,
                               p->UnderlyingPrice);
}

CThostFtdcQryOptionInstrTradeCostField *from_CThostFtdcQryOptionInstrTradeCostField(PyObject * p) {
    CThostFtdcQryOptionInstrTradeCostField *t = (CThostFtdcQryOptionInstrTradeCostField *) calloc(1,
                                                                                                  sizeof(CThostFtdcQryOptionInstrTradeCostField));
    memset(t, 0, sizeof(CThostFtdcQryOptionInstrTradeCostField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    t->HedgeFlag = PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
    t->InputPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "InputPrice"));
    t->UnderlyingPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "UnderlyingPrice"));

    return t;
};

PyObject *new_CThostFtdcQryOptionInstrCommRateField(CThostFtdcQryOptionInstrCommRateField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryOptionInstrCommRateField", "sss",
                               p->BrokerID, p->InvestorID, p->InstrumentID);
}

CThostFtdcQryOptionInstrCommRateField *from_CThostFtdcQryOptionInstrCommRateField(PyObject * p) {
    CThostFtdcQryOptionInstrCommRateField *t = (CThostFtdcQryOptionInstrCommRateField *) calloc(1,
                                                                                                sizeof(CThostFtdcQryOptionInstrCommRateField));
    memset(t, 0, sizeof(CThostFtdcQryOptionInstrCommRateField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));

    return t;
};

PyObject *new_CThostFtdcIndexPriceField(CThostFtdcIndexPriceField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcIndexPriceField", "ssd",
                               p->BrokerID, p->InstrumentID, p->ClosePrice);
}

CThostFtdcIndexPriceField *from_CThostFtdcIndexPriceField(PyObject * p) {
    CThostFtdcIndexPriceField *t = (CThostFtdcIndexPriceField *) calloc(1, sizeof(CThostFtdcIndexPriceField));
    memset(t, 0, sizeof(CThostFtdcIndexPriceField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    t->ClosePrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "ClosePrice"));

    return t;
};

PyObject *new_CThostFtdcInputExecOrderField(CThostFtdcInputExecOrderField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcInputExecOrderField", "sssssiiscccccc",
                               p->BrokerID, p->InvestorID, p->InstrumentID, p->ExecOrderRef, p->UserID, p->Volume,
                               p->RequestID, p->BusinessUnit, p->OffsetFlag, p->HedgeFlag, p->ActionType,
                               p->PosiDirection, p->ReservePositionFlag, p->CloseFlag);
}

CThostFtdcInputExecOrderField *from_CThostFtdcInputExecOrderField(PyObject * p) {
    CThostFtdcInputExecOrderField *t = (CThostFtdcInputExecOrderField *) calloc(1,
                                                                                sizeof(CThostFtdcInputExecOrderField));
    memset(t, 0, sizeof(CThostFtdcInputExecOrderField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    strcpy(t->ExecOrderRef, PyString_AsString(PyObject_GetAttrString(p, "ExecOrderRef")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    t->Volume = PyInt_AsLong(PyObject_GetAttrString(p, "Volume"));
    t->RequestID = PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
    strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
    t->OffsetFlag = PyString_AsString(PyObject_GetAttrString(p, "OffsetFlag"))[0];
    t->HedgeFlag = PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
    t->ActionType = PyString_AsString(PyObject_GetAttrString(p, "ActionType"))[0];
    t->PosiDirection = PyString_AsString(PyObject_GetAttrString(p, "PosiDirection"))[0];
    t->ReservePositionFlag = PyString_AsString(PyObject_GetAttrString(p, "ReservePositionFlag"))[0];
    t->CloseFlag = PyString_AsString(PyObject_GetAttrString(p, "CloseFlag"))[0];

    return t;
};

PyObject *new_CThostFtdcInputExecOrderActionField(CThostFtdcInputExecOrderActionField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcInputExecOrderActionField", "ssisiiisscss",
                               p->BrokerID, p->InvestorID, p->ExecOrderActionRef, p->ExecOrderRef, p->RequestID,
                               p->FrontID, p->SessionID, p->ExchangeID, p->ExecOrderSysID, p->ActionFlag, p->UserID,
                               p->InstrumentID);
}

CThostFtdcInputExecOrderActionField *from_CThostFtdcInputExecOrderActionField(PyObject * p) {
    CThostFtdcInputExecOrderActionField *t = (CThostFtdcInputExecOrderActionField *) calloc(1,
                                                                                            sizeof(CThostFtdcInputExecOrderActionField));
    memset(t, 0, sizeof(CThostFtdcInputExecOrderActionField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    t->ExecOrderActionRef = PyInt_AsLong(PyObject_GetAttrString(p, "ExecOrderActionRef"));
    strcpy(t->ExecOrderRef, PyString_AsString(PyObject_GetAttrString(p, "ExecOrderRef")));
    t->RequestID = PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
    t->FrontID = PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->ExecOrderSysID, PyString_AsString(PyObject_GetAttrString(p, "ExecOrderSysID")));
    t->ActionFlag = PyString_AsString(PyObject_GetAttrString(p, "ActionFlag"))[0];
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));

    return t;
};

PyObject *new_CThostFtdcExecOrderField(CThostFtdcExecOrderField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcExecOrderField", "sssssiisccccccssssssicisisssscsiiisssi",
                               p->BrokerID, p->InvestorID, p->InstrumentID, p->ExecOrderRef, p->UserID, p->Volume,
                               p->RequestID, p->BusinessUnit, p->OffsetFlag, p->HedgeFlag, p->ActionType,
                               p->PosiDirection, p->ReservePositionFlag, p->CloseFlag, p->ExecOrderLocalID,
                               p->ExchangeID, p->ParticipantID, p->ClientID, p->ExchangeInstID, p->TraderID,
                               p->InstallID, p->OrderSubmitStatus, p->NotifySequence, p->TradingDay, p->SettlementID,
                               p->ExecOrderSysID, p->InsertDate, p->InsertTime, p->CancelTime, p->ExecResult,
                               p->ClearingPartID, p->SequenceNo, p->FrontID, p->SessionID, p->UserProductInfo,
                               p->StatusMsg, p->ActiveUserID, p->BrokerExecOrderSeq);
}

CThostFtdcExecOrderField *from_CThostFtdcExecOrderField(PyObject * p) {
    CThostFtdcExecOrderField *t = (CThostFtdcExecOrderField *) calloc(1, sizeof(CThostFtdcExecOrderField));
    memset(t, 0, sizeof(CThostFtdcExecOrderField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    strcpy(t->ExecOrderRef, PyString_AsString(PyObject_GetAttrString(p, "ExecOrderRef")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    t->Volume = PyInt_AsLong(PyObject_GetAttrString(p, "Volume"));
    t->RequestID = PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
    strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
    t->OffsetFlag = PyString_AsString(PyObject_GetAttrString(p, "OffsetFlag"))[0];
    t->HedgeFlag = PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
    t->ActionType = PyString_AsString(PyObject_GetAttrString(p, "ActionType"))[0];
    t->PosiDirection = PyString_AsString(PyObject_GetAttrString(p, "PosiDirection"))[0];
    t->ReservePositionFlag = PyString_AsString(PyObject_GetAttrString(p, "ReservePositionFlag"))[0];
    t->CloseFlag = PyString_AsString(PyObject_GetAttrString(p, "CloseFlag"))[0];
    strcpy(t->ExecOrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "ExecOrderLocalID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
    strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
    strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
    strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    t->OrderSubmitStatus = PyString_AsString(PyObject_GetAttrString(p, "OrderSubmitStatus"))[0];
    t->NotifySequence = PyInt_AsLong(PyObject_GetAttrString(p, "NotifySequence"));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->SettlementID = PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
    strcpy(t->ExecOrderSysID, PyString_AsString(PyObject_GetAttrString(p, "ExecOrderSysID")));
    strcpy(t->InsertDate, PyString_AsString(PyObject_GetAttrString(p, "InsertDate")));
    strcpy(t->InsertTime, PyString_AsString(PyObject_GetAttrString(p, "InsertTime")));
    strcpy(t->CancelTime, PyString_AsString(PyObject_GetAttrString(p, "CancelTime")));
    t->ExecResult = PyString_AsString(PyObject_GetAttrString(p, "ExecResult"))[0];
    strcpy(t->ClearingPartID, PyString_AsString(PyObject_GetAttrString(p, "ClearingPartID")));
    t->SequenceNo = PyInt_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
    t->FrontID = PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    strcpy(t->UserProductInfo, PyString_AsString(PyObject_GetAttrString(p, "UserProductInfo")));
    strcpy(t->StatusMsg, PyString_AsString(PyObject_GetAttrString(p, "StatusMsg")));
    strcpy(t->ActiveUserID, PyString_AsString(PyObject_GetAttrString(p, "ActiveUserID")));
    t->BrokerExecOrderSeq = PyInt_AsLong(PyObject_GetAttrString(p, "BrokerExecOrderSeq"));

    return t;
};

PyObject *new_CThostFtdcExecOrderActionField(CThostFtdcExecOrderActionField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcExecOrderActionField", "ssisiiisscsssissssscscss",
                               p->BrokerID, p->InvestorID, p->ExecOrderActionRef, p->ExecOrderRef, p->RequestID,
                               p->FrontID, p->SessionID, p->ExchangeID, p->ExecOrderSysID, p->ActionFlag, p->ActionDate,
                               p->ActionTime, p->TraderID, p->InstallID, p->ExecOrderLocalID, p->ActionLocalID,
                               p->ParticipantID, p->ClientID, p->BusinessUnit, p->OrderActionStatus, p->UserID,
                               p->ActionType, p->StatusMsg, p->InstrumentID);
}

CThostFtdcExecOrderActionField *from_CThostFtdcExecOrderActionField(PyObject * p) {
    CThostFtdcExecOrderActionField *t = (CThostFtdcExecOrderActionField *) calloc(1,
                                                                                  sizeof(CThostFtdcExecOrderActionField));
    memset(t, 0, sizeof(CThostFtdcExecOrderActionField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    t->ExecOrderActionRef = PyInt_AsLong(PyObject_GetAttrString(p, "ExecOrderActionRef"));
    strcpy(t->ExecOrderRef, PyString_AsString(PyObject_GetAttrString(p, "ExecOrderRef")));
    t->RequestID = PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
    t->FrontID = PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->ExecOrderSysID, PyString_AsString(PyObject_GetAttrString(p, "ExecOrderSysID")));
    t->ActionFlag = PyString_AsString(PyObject_GetAttrString(p, "ActionFlag"))[0];
    strcpy(t->ActionDate, PyString_AsString(PyObject_GetAttrString(p, "ActionDate")));
    strcpy(t->ActionTime, PyString_AsString(PyObject_GetAttrString(p, "ActionTime")));
    strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    strcpy(t->ExecOrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "ExecOrderLocalID")));
    strcpy(t->ActionLocalID, PyString_AsString(PyObject_GetAttrString(p, "ActionLocalID")));
    strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
    strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
    strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
    t->OrderActionStatus = PyString_AsString(PyObject_GetAttrString(p, "OrderActionStatus"))[0];
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    t->ActionType = PyString_AsString(PyObject_GetAttrString(p, "ActionType"))[0];
    strcpy(t->StatusMsg, PyString_AsString(PyObject_GetAttrString(p, "StatusMsg")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));

    return t;
};

PyObject *new_CThostFtdcQryExecOrderField(CThostFtdcQryExecOrderField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryExecOrderField", "sssssss",
                               p->BrokerID, p->InvestorID, p->InstrumentID, p->ExchangeID, p->ExecOrderSysID,
                               p->InsertTimeStart, p->InsertTimeEnd);
}

CThostFtdcQryExecOrderField *from_CThostFtdcQryExecOrderField(PyObject * p) {
    CThostFtdcQryExecOrderField *t = (CThostFtdcQryExecOrderField *) calloc(1, sizeof(CThostFtdcQryExecOrderField));
    memset(t, 0, sizeof(CThostFtdcQryExecOrderField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->ExecOrderSysID, PyString_AsString(PyObject_GetAttrString(p, "ExecOrderSysID")));
    strcpy(t->InsertTimeStart, PyString_AsString(PyObject_GetAttrString(p, "InsertTimeStart")));
    strcpy(t->InsertTimeEnd, PyString_AsString(PyObject_GetAttrString(p, "InsertTimeEnd")));

    return t;
};

PyObject *new_CThostFtdcExchangeExecOrderField(CThostFtdcExchangeExecOrderField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcExchangeExecOrderField", "iisccccccssssssicisisssscsi",
                               p->Volume, p->RequestID, p->BusinessUnit, p->OffsetFlag, p->HedgeFlag, p->ActionType,
                               p->PosiDirection, p->ReservePositionFlag, p->CloseFlag, p->ExecOrderLocalID,
                               p->ExchangeID, p->ParticipantID, p->ClientID, p->ExchangeInstID, p->TraderID,
                               p->InstallID, p->OrderSubmitStatus, p->NotifySequence, p->TradingDay, p->SettlementID,
                               p->ExecOrderSysID, p->InsertDate, p->InsertTime, p->CancelTime, p->ExecResult,
                               p->ClearingPartID, p->SequenceNo);
}

CThostFtdcExchangeExecOrderField *from_CThostFtdcExchangeExecOrderField(PyObject * p) {
    CThostFtdcExchangeExecOrderField *t = (CThostFtdcExchangeExecOrderField *) calloc(1,
                                                                                      sizeof(CThostFtdcExchangeExecOrderField));
    memset(t, 0, sizeof(CThostFtdcExchangeExecOrderField));
    t->Volume = PyInt_AsLong(PyObject_GetAttrString(p, "Volume"));
    t->RequestID = PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
    strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
    t->OffsetFlag = PyString_AsString(PyObject_GetAttrString(p, "OffsetFlag"))[0];
    t->HedgeFlag = PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
    t->ActionType = PyString_AsString(PyObject_GetAttrString(p, "ActionType"))[0];
    t->PosiDirection = PyString_AsString(PyObject_GetAttrString(p, "PosiDirection"))[0];
    t->ReservePositionFlag = PyString_AsString(PyObject_GetAttrString(p, "ReservePositionFlag"))[0];
    t->CloseFlag = PyString_AsString(PyObject_GetAttrString(p, "CloseFlag"))[0];
    strcpy(t->ExecOrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "ExecOrderLocalID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
    strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
    strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
    strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    t->OrderSubmitStatus = PyString_AsString(PyObject_GetAttrString(p, "OrderSubmitStatus"))[0];
    t->NotifySequence = PyInt_AsLong(PyObject_GetAttrString(p, "NotifySequence"));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->SettlementID = PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
    strcpy(t->ExecOrderSysID, PyString_AsString(PyObject_GetAttrString(p, "ExecOrderSysID")));
    strcpy(t->InsertDate, PyString_AsString(PyObject_GetAttrString(p, "InsertDate")));
    strcpy(t->InsertTime, PyString_AsString(PyObject_GetAttrString(p, "InsertTime")));
    strcpy(t->CancelTime, PyString_AsString(PyObject_GetAttrString(p, "CancelTime")));
    t->ExecResult = PyString_AsString(PyObject_GetAttrString(p, "ExecResult"))[0];
    strcpy(t->ClearingPartID, PyString_AsString(PyObject_GetAttrString(p, "ClearingPartID")));
    t->SequenceNo = PyInt_AsLong(PyObject_GetAttrString(p, "SequenceNo"));

    return t;
};

PyObject *new_CThostFtdcQryExchangeExecOrderField(CThostFtdcQryExchangeExecOrderField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryExchangeExecOrderField", "sssss",
                               p->ParticipantID, p->ClientID, p->ExchangeInstID, p->ExchangeID, p->TraderID);
}

CThostFtdcQryExchangeExecOrderField *from_CThostFtdcQryExchangeExecOrderField(PyObject * p) {
    CThostFtdcQryExchangeExecOrderField *t = (CThostFtdcQryExchangeExecOrderField *) calloc(1,
                                                                                            sizeof(CThostFtdcQryExchangeExecOrderField));
    memset(t, 0, sizeof(CThostFtdcQryExchangeExecOrderField));
    strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
    strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
    strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));

    return t;
};

PyObject *new_CThostFtdcQryExecOrderActionField(CThostFtdcQryExecOrderActionField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryExecOrderActionField", "sss",
                               p->BrokerID, p->InvestorID, p->ExchangeID);
}

CThostFtdcQryExecOrderActionField *from_CThostFtdcQryExecOrderActionField(PyObject * p) {
    CThostFtdcQryExecOrderActionField *t = (CThostFtdcQryExecOrderActionField *) calloc(1,
                                                                                        sizeof(CThostFtdcQryExecOrderActionField));
    memset(t, 0, sizeof(CThostFtdcQryExecOrderActionField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));

    return t;
};

PyObject *new_CThostFtdcExchangeExecOrderActionField(CThostFtdcExchangeExecOrderActionField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcExchangeExecOrderActionField", "sscsssissssscsc",
                               p->ExchangeID, p->ExecOrderSysID, p->ActionFlag, p->ActionDate, p->ActionTime,
                               p->TraderID, p->InstallID, p->ExecOrderLocalID, p->ActionLocalID, p->ParticipantID,
                               p->ClientID, p->BusinessUnit, p->OrderActionStatus, p->UserID, p->ActionType);
}

CThostFtdcExchangeExecOrderActionField *from_CThostFtdcExchangeExecOrderActionField(PyObject * p) {
    CThostFtdcExchangeExecOrderActionField *t = (CThostFtdcExchangeExecOrderActionField *) calloc(1,
                                                                                                  sizeof(CThostFtdcExchangeExecOrderActionField));
    memset(t, 0, sizeof(CThostFtdcExchangeExecOrderActionField));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->ExecOrderSysID, PyString_AsString(PyObject_GetAttrString(p, "ExecOrderSysID")));
    t->ActionFlag = PyString_AsString(PyObject_GetAttrString(p, "ActionFlag"))[0];
    strcpy(t->ActionDate, PyString_AsString(PyObject_GetAttrString(p, "ActionDate")));
    strcpy(t->ActionTime, PyString_AsString(PyObject_GetAttrString(p, "ActionTime")));
    strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    strcpy(t->ExecOrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "ExecOrderLocalID")));
    strcpy(t->ActionLocalID, PyString_AsString(PyObject_GetAttrString(p, "ActionLocalID")));
    strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
    strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
    strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
    t->OrderActionStatus = PyString_AsString(PyObject_GetAttrString(p, "OrderActionStatus"))[0];
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    t->ActionType = PyString_AsString(PyObject_GetAttrString(p, "ActionType"))[0];

    return t;
};

PyObject *new_CThostFtdcQryExchangeExecOrderActionField(CThostFtdcQryExchangeExecOrderActionField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryExchangeExecOrderActionField", "ssss",
                               p->ParticipantID, p->ClientID, p->ExchangeID, p->TraderID);
}

CThostFtdcQryExchangeExecOrderActionField *from_CThostFtdcQryExchangeExecOrderActionField(PyObject * p) {
    CThostFtdcQryExchangeExecOrderActionField *t = (CThostFtdcQryExchangeExecOrderActionField *) calloc(1,
                                                                                                        sizeof(CThostFtdcQryExchangeExecOrderActionField));
    memset(t, 0, sizeof(CThostFtdcQryExchangeExecOrderActionField));
    strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
    strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));

    return t;
};

PyObject *new_CThostFtdcErrExecOrderField(CThostFtdcErrExecOrderField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcErrExecOrderField", "sssssiisccccccis",
                               p->BrokerID, p->InvestorID, p->InstrumentID, p->ExecOrderRef, p->UserID, p->Volume,
                               p->RequestID, p->BusinessUnit, p->OffsetFlag, p->HedgeFlag, p->ActionType,
                               p->PosiDirection, p->ReservePositionFlag, p->CloseFlag, p->ErrorID, p->ErrorMsg);
}

CThostFtdcErrExecOrderField *from_CThostFtdcErrExecOrderField(PyObject * p) {
    CThostFtdcErrExecOrderField *t = (CThostFtdcErrExecOrderField *) calloc(1, sizeof(CThostFtdcErrExecOrderField));
    memset(t, 0, sizeof(CThostFtdcErrExecOrderField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    strcpy(t->ExecOrderRef, PyString_AsString(PyObject_GetAttrString(p, "ExecOrderRef")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    t->Volume = PyInt_AsLong(PyObject_GetAttrString(p, "Volume"));
    t->RequestID = PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
    strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
    t->OffsetFlag = PyString_AsString(PyObject_GetAttrString(p, "OffsetFlag"))[0];
    t->HedgeFlag = PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
    t->ActionType = PyString_AsString(PyObject_GetAttrString(p, "ActionType"))[0];
    t->PosiDirection = PyString_AsString(PyObject_GetAttrString(p, "PosiDirection"))[0];
    t->ReservePositionFlag = PyString_AsString(PyObject_GetAttrString(p, "ReservePositionFlag"))[0];
    t->CloseFlag = PyString_AsString(PyObject_GetAttrString(p, "CloseFlag"))[0];
    t->ErrorID = PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
    strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));

    return t;
};

PyObject *new_CThostFtdcQryErrExecOrderField(CThostFtdcQryErrExecOrderField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryErrExecOrderField", "ss",
                               p->BrokerID, p->InvestorID);
}

CThostFtdcQryErrExecOrderField *from_CThostFtdcQryErrExecOrderField(PyObject * p) {
    CThostFtdcQryErrExecOrderField *t = (CThostFtdcQryErrExecOrderField *) calloc(1,
                                                                                  sizeof(CThostFtdcQryErrExecOrderField));
    memset(t, 0, sizeof(CThostFtdcQryErrExecOrderField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));

    return t;
};

PyObject *new_CThostFtdcErrExecOrderActionField(CThostFtdcErrExecOrderActionField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcErrExecOrderActionField", "ssisiiisscssis",
                               p->BrokerID, p->InvestorID, p->ExecOrderActionRef, p->ExecOrderRef, p->RequestID,
                               p->FrontID, p->SessionID, p->ExchangeID, p->ExecOrderSysID, p->ActionFlag, p->UserID,
                               p->InstrumentID, p->ErrorID, p->ErrorMsg);
}

CThostFtdcErrExecOrderActionField *from_CThostFtdcErrExecOrderActionField(PyObject * p) {
    CThostFtdcErrExecOrderActionField *t = (CThostFtdcErrExecOrderActionField *) calloc(1,
                                                                                        sizeof(CThostFtdcErrExecOrderActionField));
    memset(t, 0, sizeof(CThostFtdcErrExecOrderActionField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    t->ExecOrderActionRef = PyInt_AsLong(PyObject_GetAttrString(p, "ExecOrderActionRef"));
    strcpy(t->ExecOrderRef, PyString_AsString(PyObject_GetAttrString(p, "ExecOrderRef")));
    t->RequestID = PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
    t->FrontID = PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->ExecOrderSysID, PyString_AsString(PyObject_GetAttrString(p, "ExecOrderSysID")));
    t->ActionFlag = PyString_AsString(PyObject_GetAttrString(p, "ActionFlag"))[0];
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    t->ErrorID = PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
    strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));

    return t;
};

PyObject *new_CThostFtdcQryErrExecOrderActionField(CThostFtdcQryErrExecOrderActionField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryErrExecOrderActionField", "ss",
                               p->BrokerID, p->InvestorID);
}

CThostFtdcQryErrExecOrderActionField *from_CThostFtdcQryErrExecOrderActionField(PyObject * p) {
    CThostFtdcQryErrExecOrderActionField *t = (CThostFtdcQryErrExecOrderActionField *) calloc(1,
                                                                                              sizeof(CThostFtdcQryErrExecOrderActionField));
    memset(t, 0, sizeof(CThostFtdcQryErrExecOrderActionField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));

    return t;
};

PyObject *new_CThostFtdcOptionInstrTradingRightField(CThostFtdcOptionInstrTradingRightField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcOptionInstrTradingRightField", "scsscc",
                               p->InstrumentID, p->InvestorRange, p->BrokerID, p->InvestorID, p->Direction,
                               p->TradingRight);
}

CThostFtdcOptionInstrTradingRightField *from_CThostFtdcOptionInstrTradingRightField(PyObject * p) {
    CThostFtdcOptionInstrTradingRightField *t = (CThostFtdcOptionInstrTradingRightField *) calloc(1,
                                                                                                  sizeof(CThostFtdcOptionInstrTradingRightField));
    memset(t, 0, sizeof(CThostFtdcOptionInstrTradingRightField));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    t->InvestorRange = PyString_AsString(PyObject_GetAttrString(p, "InvestorRange"))[0];
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    t->Direction = PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
    t->TradingRight = PyString_AsString(PyObject_GetAttrString(p, "TradingRight"))[0];

    return t;
};

PyObject *new_CThostFtdcQryOptionInstrTradingRightField(CThostFtdcQryOptionInstrTradingRightField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryOptionInstrTradingRightField", "sssc",
                               p->BrokerID, p->InvestorID, p->InstrumentID, p->Direction);
}

CThostFtdcQryOptionInstrTradingRightField *from_CThostFtdcQryOptionInstrTradingRightField(PyObject * p) {
    CThostFtdcQryOptionInstrTradingRightField *t = (CThostFtdcQryOptionInstrTradingRightField *) calloc(1,
                                                                                                        sizeof(CThostFtdcQryOptionInstrTradingRightField));
    memset(t, 0, sizeof(CThostFtdcQryOptionInstrTradingRightField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    t->Direction = PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];

    return t;
};

PyObject *new_CThostFtdcInputForQuoteField(CThostFtdcInputForQuoteField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcInputForQuoteField", "sssss",
                               p->BrokerID, p->InvestorID, p->InstrumentID, p->ForQuoteRef, p->UserID);
}

CThostFtdcInputForQuoteField *from_CThostFtdcInputForQuoteField(PyObject * p) {
    CThostFtdcInputForQuoteField *t = (CThostFtdcInputForQuoteField *) calloc(1, sizeof(CThostFtdcInputForQuoteField));
    memset(t, 0, sizeof(CThostFtdcInputForQuoteField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    strcpy(t->ForQuoteRef, PyString_AsString(PyObject_GetAttrString(p, "ForQuoteRef")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));

    return t;
};

PyObject *new_CThostFtdcForQuoteField(CThostFtdcForQuoteField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcForQuoteField", "sssssssssssissciissi",
                               p->BrokerID, p->InvestorID, p->InstrumentID, p->ForQuoteRef, p->UserID,
                               p->ForQuoteLocalID, p->ExchangeID, p->ParticipantID, p->ClientID, p->ExchangeInstID,
                               p->TraderID, p->InstallID, p->InsertDate, p->InsertTime, p->ForQuoteStatus, p->FrontID,
                               p->SessionID, p->StatusMsg, p->ActiveUserID, p->BrokerForQutoSeq);
}

CThostFtdcForQuoteField *from_CThostFtdcForQuoteField(PyObject * p) {
    CThostFtdcForQuoteField *t = (CThostFtdcForQuoteField *) calloc(1, sizeof(CThostFtdcForQuoteField));
    memset(t, 0, sizeof(CThostFtdcForQuoteField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    strcpy(t->ForQuoteRef, PyString_AsString(PyObject_GetAttrString(p, "ForQuoteRef")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    strcpy(t->ForQuoteLocalID, PyString_AsString(PyObject_GetAttrString(p, "ForQuoteLocalID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
    strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
    strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
    strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    strcpy(t->InsertDate, PyString_AsString(PyObject_GetAttrString(p, "InsertDate")));
    strcpy(t->InsertTime, PyString_AsString(PyObject_GetAttrString(p, "InsertTime")));
    t->ForQuoteStatus = PyString_AsString(PyObject_GetAttrString(p, "ForQuoteStatus"))[0];
    t->FrontID = PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    strcpy(t->StatusMsg, PyString_AsString(PyObject_GetAttrString(p, "StatusMsg")));
    strcpy(t->ActiveUserID, PyString_AsString(PyObject_GetAttrString(p, "ActiveUserID")));
    t->BrokerForQutoSeq = PyInt_AsLong(PyObject_GetAttrString(p, "BrokerForQutoSeq"));

    return t;
};

PyObject *new_CThostFtdcQryForQuoteField(CThostFtdcQryForQuoteField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryForQuoteField", "ssssss",
                               p->BrokerID, p->InvestorID, p->InstrumentID, p->ExchangeID, p->InsertTimeStart,
                               p->InsertTimeEnd);
}

CThostFtdcQryForQuoteField *from_CThostFtdcQryForQuoteField(PyObject * p) {
    CThostFtdcQryForQuoteField *t = (CThostFtdcQryForQuoteField *) calloc(1, sizeof(CThostFtdcQryForQuoteField));
    memset(t, 0, sizeof(CThostFtdcQryForQuoteField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->InsertTimeStart, PyString_AsString(PyObject_GetAttrString(p, "InsertTimeStart")));
    strcpy(t->InsertTimeEnd, PyString_AsString(PyObject_GetAttrString(p, "InsertTimeEnd")));

    return t;
};

PyObject *new_CThostFtdcExchangeForQuoteField(CThostFtdcExchangeForQuoteField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcExchangeForQuoteField", "ssssssissc",
                               p->ForQuoteLocalID, p->ExchangeID, p->ParticipantID, p->ClientID, p->ExchangeInstID,
                               p->TraderID, p->InstallID, p->InsertDate, p->InsertTime, p->ForQuoteStatus);
}

CThostFtdcExchangeForQuoteField *from_CThostFtdcExchangeForQuoteField(PyObject * p) {
    CThostFtdcExchangeForQuoteField *t = (CThostFtdcExchangeForQuoteField *) calloc(1,
                                                                                    sizeof(CThostFtdcExchangeForQuoteField));
    memset(t, 0, sizeof(CThostFtdcExchangeForQuoteField));
    strcpy(t->ForQuoteLocalID, PyString_AsString(PyObject_GetAttrString(p, "ForQuoteLocalID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
    strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
    strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
    strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    strcpy(t->InsertDate, PyString_AsString(PyObject_GetAttrString(p, "InsertDate")));
    strcpy(t->InsertTime, PyString_AsString(PyObject_GetAttrString(p, "InsertTime")));
    t->ForQuoteStatus = PyString_AsString(PyObject_GetAttrString(p, "ForQuoteStatus"))[0];

    return t;
};

PyObject *new_CThostFtdcQryExchangeForQuoteField(CThostFtdcQryExchangeForQuoteField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryExchangeForQuoteField", "sssss",
                               p->ParticipantID, p->ClientID, p->ExchangeInstID, p->ExchangeID, p->TraderID);
}

CThostFtdcQryExchangeForQuoteField *from_CThostFtdcQryExchangeForQuoteField(PyObject * p) {
    CThostFtdcQryExchangeForQuoteField *t = (CThostFtdcQryExchangeForQuoteField *) calloc(1,
                                                                                          sizeof(CThostFtdcQryExchangeForQuoteField));
    memset(t, 0, sizeof(CThostFtdcQryExchangeForQuoteField));
    strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
    strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
    strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));

    return t;
};

PyObject *new_CThostFtdcInputQuoteField(CThostFtdcInputQuoteField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcInputQuoteField", "sssssddiiisccccsss",
                               p->BrokerID, p->InvestorID, p->InstrumentID, p->QuoteRef, p->UserID, p->AskPrice,
                               p->BidPrice, p->AskVolume, p->BidVolume, p->RequestID, p->BusinessUnit, p->AskOffsetFlag,
                               p->BidOffsetFlag, p->AskHedgeFlag, p->BidHedgeFlag, p->AskOrderRef, p->BidOrderRef,
                               p->ForQuoteSysID);
}

CThostFtdcInputQuoteField *from_CThostFtdcInputQuoteField(PyObject * p) {
    CThostFtdcInputQuoteField *t = (CThostFtdcInputQuoteField *) calloc(1, sizeof(CThostFtdcInputQuoteField));
    memset(t, 0, sizeof(CThostFtdcInputQuoteField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    strcpy(t->QuoteRef, PyString_AsString(PyObject_GetAttrString(p, "QuoteRef")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    t->AskPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "AskPrice"));
    t->BidPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPrice"));
    t->AskVolume = PyInt_AsLong(PyObject_GetAttrString(p, "AskVolume"));
    t->BidVolume = PyInt_AsLong(PyObject_GetAttrString(p, "BidVolume"));
    t->RequestID = PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
    strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
    t->AskOffsetFlag = PyString_AsString(PyObject_GetAttrString(p, "AskOffsetFlag"))[0];
    t->BidOffsetFlag = PyString_AsString(PyObject_GetAttrString(p, "BidOffsetFlag"))[0];
    t->AskHedgeFlag = PyString_AsString(PyObject_GetAttrString(p, "AskHedgeFlag"))[0];
    t->BidHedgeFlag = PyString_AsString(PyObject_GetAttrString(p, "BidHedgeFlag"))[0];
    strcpy(t->AskOrderRef, PyString_AsString(PyObject_GetAttrString(p, "AskOrderRef")));
    strcpy(t->BidOrderRef, PyString_AsString(PyObject_GetAttrString(p, "BidOrderRef")));
    strcpy(t->ForQuoteSysID, PyString_AsString(PyObject_GetAttrString(p, "ForQuoteSysID")));

    return t;
};

PyObject *new_CThostFtdcInputQuoteActionField(CThostFtdcInputQuoteActionField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcInputQuoteActionField", "ssisiiisscss",
                               p->BrokerID, p->InvestorID, p->QuoteActionRef, p->QuoteRef, p->RequestID, p->FrontID,
                               p->SessionID, p->ExchangeID, p->QuoteSysID, p->ActionFlag, p->UserID, p->InstrumentID);
}

CThostFtdcInputQuoteActionField *from_CThostFtdcInputQuoteActionField(PyObject * p) {
    CThostFtdcInputQuoteActionField *t = (CThostFtdcInputQuoteActionField *) calloc(1,
                                                                                    sizeof(CThostFtdcInputQuoteActionField));
    memset(t, 0, sizeof(CThostFtdcInputQuoteActionField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    t->QuoteActionRef = PyInt_AsLong(PyObject_GetAttrString(p, "QuoteActionRef"));
    strcpy(t->QuoteRef, PyString_AsString(PyObject_GetAttrString(p, "QuoteRef")));
    t->RequestID = PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
    t->FrontID = PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->QuoteSysID, PyString_AsString(PyObject_GetAttrString(p, "QuoteSysID")));
    t->ActionFlag = PyString_AsString(PyObject_GetAttrString(p, "ActionFlag"))[0];
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));

    return t;
};

PyObject *new_CThostFtdcQuoteField(CThostFtdcQuoteField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQuoteField", "sssssddiiisccccssssssiicsisssscsissiisssisss",
                               p->BrokerID, p->InvestorID, p->InstrumentID, p->QuoteRef, p->UserID, p->AskPrice,
                               p->BidPrice, p->AskVolume, p->BidVolume, p->RequestID, p->BusinessUnit, p->AskOffsetFlag,
                               p->BidOffsetFlag, p->AskHedgeFlag, p->BidHedgeFlag, p->QuoteLocalID, p->ExchangeID,
                               p->ParticipantID, p->ClientID, p->ExchangeInstID, p->TraderID, p->InstallID,
                               p->NotifySequence, p->OrderSubmitStatus, p->TradingDay, p->SettlementID, p->QuoteSysID,
                               p->InsertDate, p->InsertTime, p->CancelTime, p->QuoteStatus, p->ClearingPartID,
                               p->SequenceNo, p->AskOrderSysID, p->BidOrderSysID, p->FrontID, p->SessionID,
                               p->UserProductInfo, p->StatusMsg, p->ActiveUserID, p->BrokerQuoteSeq, p->AskOrderRef,
                               p->BidOrderRef, p->ForQuoteSysID);
}

CThostFtdcQuoteField *from_CThostFtdcQuoteField(PyObject * p) {
    CThostFtdcQuoteField *t = (CThostFtdcQuoteField *) calloc(1, sizeof(CThostFtdcQuoteField));
    memset(t, 0, sizeof(CThostFtdcQuoteField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    strcpy(t->QuoteRef, PyString_AsString(PyObject_GetAttrString(p, "QuoteRef")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    t->AskPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "AskPrice"));
    t->BidPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPrice"));
    t->AskVolume = PyInt_AsLong(PyObject_GetAttrString(p, "AskVolume"));
    t->BidVolume = PyInt_AsLong(PyObject_GetAttrString(p, "BidVolume"));
    t->RequestID = PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
    strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
    t->AskOffsetFlag = PyString_AsString(PyObject_GetAttrString(p, "AskOffsetFlag"))[0];
    t->BidOffsetFlag = PyString_AsString(PyObject_GetAttrString(p, "BidOffsetFlag"))[0];
    t->AskHedgeFlag = PyString_AsString(PyObject_GetAttrString(p, "AskHedgeFlag"))[0];
    t->BidHedgeFlag = PyString_AsString(PyObject_GetAttrString(p, "BidHedgeFlag"))[0];
    strcpy(t->QuoteLocalID, PyString_AsString(PyObject_GetAttrString(p, "QuoteLocalID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
    strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
    strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
    strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    t->NotifySequence = PyInt_AsLong(PyObject_GetAttrString(p, "NotifySequence"));
    t->OrderSubmitStatus = PyString_AsString(PyObject_GetAttrString(p, "OrderSubmitStatus"))[0];
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->SettlementID = PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
    strcpy(t->QuoteSysID, PyString_AsString(PyObject_GetAttrString(p, "QuoteSysID")));
    strcpy(t->InsertDate, PyString_AsString(PyObject_GetAttrString(p, "InsertDate")));
    strcpy(t->InsertTime, PyString_AsString(PyObject_GetAttrString(p, "InsertTime")));
    strcpy(t->CancelTime, PyString_AsString(PyObject_GetAttrString(p, "CancelTime")));
    t->QuoteStatus = PyString_AsString(PyObject_GetAttrString(p, "QuoteStatus"))[0];
    strcpy(t->ClearingPartID, PyString_AsString(PyObject_GetAttrString(p, "ClearingPartID")));
    t->SequenceNo = PyInt_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
    strcpy(t->AskOrderSysID, PyString_AsString(PyObject_GetAttrString(p, "AskOrderSysID")));
    strcpy(t->BidOrderSysID, PyString_AsString(PyObject_GetAttrString(p, "BidOrderSysID")));
    t->FrontID = PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    strcpy(t->UserProductInfo, PyString_AsString(PyObject_GetAttrString(p, "UserProductInfo")));
    strcpy(t->StatusMsg, PyString_AsString(PyObject_GetAttrString(p, "StatusMsg")));
    strcpy(t->ActiveUserID, PyString_AsString(PyObject_GetAttrString(p, "ActiveUserID")));
    t->BrokerQuoteSeq = PyInt_AsLong(PyObject_GetAttrString(p, "BrokerQuoteSeq"));
    strcpy(t->AskOrderRef, PyString_AsString(PyObject_GetAttrString(p, "AskOrderRef")));
    strcpy(t->BidOrderRef, PyString_AsString(PyObject_GetAttrString(p, "BidOrderRef")));
    strcpy(t->ForQuoteSysID, PyString_AsString(PyObject_GetAttrString(p, "ForQuoteSysID")));

    return t;
};

PyObject *new_CThostFtdcQuoteActionField(CThostFtdcQuoteActionField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQuoteActionField", "ssisiiisscsssissssscsss",
                               p->BrokerID, p->InvestorID, p->QuoteActionRef, p->QuoteRef, p->RequestID, p->FrontID,
                               p->SessionID, p->ExchangeID, p->QuoteSysID, p->ActionFlag, p->ActionDate, p->ActionTime,
                               p->TraderID, p->InstallID, p->QuoteLocalID, p->ActionLocalID, p->ParticipantID,
                               p->ClientID, p->BusinessUnit, p->OrderActionStatus, p->UserID, p->StatusMsg,
                               p->InstrumentID);
}

CThostFtdcQuoteActionField *from_CThostFtdcQuoteActionField(PyObject * p) {
    CThostFtdcQuoteActionField *t = (CThostFtdcQuoteActionField *) calloc(1, sizeof(CThostFtdcQuoteActionField));
    memset(t, 0, sizeof(CThostFtdcQuoteActionField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    t->QuoteActionRef = PyInt_AsLong(PyObject_GetAttrString(p, "QuoteActionRef"));
    strcpy(t->QuoteRef, PyString_AsString(PyObject_GetAttrString(p, "QuoteRef")));
    t->RequestID = PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
    t->FrontID = PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->QuoteSysID, PyString_AsString(PyObject_GetAttrString(p, "QuoteSysID")));
    t->ActionFlag = PyString_AsString(PyObject_GetAttrString(p, "ActionFlag"))[0];
    strcpy(t->ActionDate, PyString_AsString(PyObject_GetAttrString(p, "ActionDate")));
    strcpy(t->ActionTime, PyString_AsString(PyObject_GetAttrString(p, "ActionTime")));
    strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    strcpy(t->QuoteLocalID, PyString_AsString(PyObject_GetAttrString(p, "QuoteLocalID")));
    strcpy(t->ActionLocalID, PyString_AsString(PyObject_GetAttrString(p, "ActionLocalID")));
    strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
    strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
    strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
    t->OrderActionStatus = PyString_AsString(PyObject_GetAttrString(p, "OrderActionStatus"))[0];
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    strcpy(t->StatusMsg, PyString_AsString(PyObject_GetAttrString(p, "StatusMsg")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));

    return t;
};

PyObject *new_CThostFtdcQryQuoteField(CThostFtdcQryQuoteField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryQuoteField", "sssssss",
                               p->BrokerID, p->InvestorID, p->InstrumentID, p->ExchangeID, p->QuoteSysID,
                               p->InsertTimeStart, p->InsertTimeEnd);
}

CThostFtdcQryQuoteField *from_CThostFtdcQryQuoteField(PyObject * p) {
    CThostFtdcQryQuoteField *t = (CThostFtdcQryQuoteField *) calloc(1, sizeof(CThostFtdcQryQuoteField));
    memset(t, 0, sizeof(CThostFtdcQryQuoteField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->QuoteSysID, PyString_AsString(PyObject_GetAttrString(p, "QuoteSysID")));
    strcpy(t->InsertTimeStart, PyString_AsString(PyObject_GetAttrString(p, "InsertTimeStart")));
    strcpy(t->InsertTimeEnd, PyString_AsString(PyObject_GetAttrString(p, "InsertTimeEnd")));

    return t;
};

PyObject *new_CThostFtdcExchangeQuoteField(CThostFtdcExchangeQuoteField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcExchangeQuoteField", "ddiiisccccssssssiicsisssscsisss",
                               p->AskPrice, p->BidPrice, p->AskVolume, p->BidVolume, p->RequestID, p->BusinessUnit,
                               p->AskOffsetFlag, p->BidOffsetFlag, p->AskHedgeFlag, p->BidHedgeFlag, p->QuoteLocalID,
                               p->ExchangeID, p->ParticipantID, p->ClientID, p->ExchangeInstID, p->TraderID,
                               p->InstallID, p->NotifySequence, p->OrderSubmitStatus, p->TradingDay, p->SettlementID,
                               p->QuoteSysID, p->InsertDate, p->InsertTime, p->CancelTime, p->QuoteStatus,
                               p->ClearingPartID, p->SequenceNo, p->AskOrderSysID, p->BidOrderSysID, p->ForQuoteSysID);
}

CThostFtdcExchangeQuoteField *from_CThostFtdcExchangeQuoteField(PyObject * p) {
    CThostFtdcExchangeQuoteField *t = (CThostFtdcExchangeQuoteField *) calloc(1, sizeof(CThostFtdcExchangeQuoteField));
    memset(t, 0, sizeof(CThostFtdcExchangeQuoteField));
    t->AskPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "AskPrice"));
    t->BidPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPrice"));
    t->AskVolume = PyInt_AsLong(PyObject_GetAttrString(p, "AskVolume"));
    t->BidVolume = PyInt_AsLong(PyObject_GetAttrString(p, "BidVolume"));
    t->RequestID = PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
    strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
    t->AskOffsetFlag = PyString_AsString(PyObject_GetAttrString(p, "AskOffsetFlag"))[0];
    t->BidOffsetFlag = PyString_AsString(PyObject_GetAttrString(p, "BidOffsetFlag"))[0];
    t->AskHedgeFlag = PyString_AsString(PyObject_GetAttrString(p, "AskHedgeFlag"))[0];
    t->BidHedgeFlag = PyString_AsString(PyObject_GetAttrString(p, "BidHedgeFlag"))[0];
    strcpy(t->QuoteLocalID, PyString_AsString(PyObject_GetAttrString(p, "QuoteLocalID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
    strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
    strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
    strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    t->NotifySequence = PyInt_AsLong(PyObject_GetAttrString(p, "NotifySequence"));
    t->OrderSubmitStatus = PyString_AsString(PyObject_GetAttrString(p, "OrderSubmitStatus"))[0];
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->SettlementID = PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
    strcpy(t->QuoteSysID, PyString_AsString(PyObject_GetAttrString(p, "QuoteSysID")));
    strcpy(t->InsertDate, PyString_AsString(PyObject_GetAttrString(p, "InsertDate")));
    strcpy(t->InsertTime, PyString_AsString(PyObject_GetAttrString(p, "InsertTime")));
    strcpy(t->CancelTime, PyString_AsString(PyObject_GetAttrString(p, "CancelTime")));
    t->QuoteStatus = PyString_AsString(PyObject_GetAttrString(p, "QuoteStatus"))[0];
    strcpy(t->ClearingPartID, PyString_AsString(PyObject_GetAttrString(p, "ClearingPartID")));
    t->SequenceNo = PyInt_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
    strcpy(t->AskOrderSysID, PyString_AsString(PyObject_GetAttrString(p, "AskOrderSysID")));
    strcpy(t->BidOrderSysID, PyString_AsString(PyObject_GetAttrString(p, "BidOrderSysID")));
    strcpy(t->ForQuoteSysID, PyString_AsString(PyObject_GetAttrString(p, "ForQuoteSysID")));

    return t;
};

PyObject *new_CThostFtdcQryExchangeQuoteField(CThostFtdcQryExchangeQuoteField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryExchangeQuoteField", "sssss",
                               p->ParticipantID, p->ClientID, p->ExchangeInstID, p->ExchangeID, p->TraderID);
}

CThostFtdcQryExchangeQuoteField *from_CThostFtdcQryExchangeQuoteField(PyObject * p) {
    CThostFtdcQryExchangeQuoteField *t = (CThostFtdcQryExchangeQuoteField *) calloc(1,
                                                                                    sizeof(CThostFtdcQryExchangeQuoteField));
    memset(t, 0, sizeof(CThostFtdcQryExchangeQuoteField));
    strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
    strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
    strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));

    return t;
};

PyObject *new_CThostFtdcQryQuoteActionField(CThostFtdcQryQuoteActionField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryQuoteActionField", "sss",
                               p->BrokerID, p->InvestorID, p->ExchangeID);
}

CThostFtdcQryQuoteActionField *from_CThostFtdcQryQuoteActionField(PyObject * p) {
    CThostFtdcQryQuoteActionField *t = (CThostFtdcQryQuoteActionField *) calloc(1,
                                                                                sizeof(CThostFtdcQryQuoteActionField));
    memset(t, 0, sizeof(CThostFtdcQryQuoteActionField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));

    return t;
};

PyObject *new_CThostFtdcExchangeQuoteActionField(CThostFtdcExchangeQuoteActionField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcExchangeQuoteActionField", "sscsssissssscs",
                               p->ExchangeID, p->QuoteSysID, p->ActionFlag, p->ActionDate, p->ActionTime, p->TraderID,
                               p->InstallID, p->QuoteLocalID, p->ActionLocalID, p->ParticipantID, p->ClientID,
                               p->BusinessUnit, p->OrderActionStatus, p->UserID);
}

CThostFtdcExchangeQuoteActionField *from_CThostFtdcExchangeQuoteActionField(PyObject * p) {
    CThostFtdcExchangeQuoteActionField *t = (CThostFtdcExchangeQuoteActionField *) calloc(1,
                                                                                          sizeof(CThostFtdcExchangeQuoteActionField));
    memset(t, 0, sizeof(CThostFtdcExchangeQuoteActionField));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->QuoteSysID, PyString_AsString(PyObject_GetAttrString(p, "QuoteSysID")));
    t->ActionFlag = PyString_AsString(PyObject_GetAttrString(p, "ActionFlag"))[0];
    strcpy(t->ActionDate, PyString_AsString(PyObject_GetAttrString(p, "ActionDate")));
    strcpy(t->ActionTime, PyString_AsString(PyObject_GetAttrString(p, "ActionTime")));
    strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    strcpy(t->QuoteLocalID, PyString_AsString(PyObject_GetAttrString(p, "QuoteLocalID")));
    strcpy(t->ActionLocalID, PyString_AsString(PyObject_GetAttrString(p, "ActionLocalID")));
    strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
    strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
    strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
    t->OrderActionStatus = PyString_AsString(PyObject_GetAttrString(p, "OrderActionStatus"))[0];
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));

    return t;
};

PyObject *new_CThostFtdcQryExchangeQuoteActionField(CThostFtdcQryExchangeQuoteActionField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryExchangeQuoteActionField", "ssss",
                               p->ParticipantID, p->ClientID, p->ExchangeID, p->TraderID);
}

CThostFtdcQryExchangeQuoteActionField *from_CThostFtdcQryExchangeQuoteActionField(PyObject * p) {
    CThostFtdcQryExchangeQuoteActionField *t = (CThostFtdcQryExchangeQuoteActionField *) calloc(1,
                                                                                                sizeof(CThostFtdcQryExchangeQuoteActionField));
    memset(t, 0, sizeof(CThostFtdcQryExchangeQuoteActionField));
    strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
    strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));

    return t;
};

PyObject *new_CThostFtdcOptionInstrDeltaField(CThostFtdcOptionInstrDeltaField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcOptionInstrDeltaField", "scssd",
                               p->InstrumentID, p->InvestorRange, p->BrokerID, p->InvestorID, p->Delta);
}

CThostFtdcOptionInstrDeltaField *from_CThostFtdcOptionInstrDeltaField(PyObject * p) {
    CThostFtdcOptionInstrDeltaField *t = (CThostFtdcOptionInstrDeltaField *) calloc(1,
                                                                                    sizeof(CThostFtdcOptionInstrDeltaField));
    memset(t, 0, sizeof(CThostFtdcOptionInstrDeltaField));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    t->InvestorRange = PyString_AsString(PyObject_GetAttrString(p, "InvestorRange"))[0];
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    t->Delta = PyFloat_AsDouble(PyObject_GetAttrString(p, "Delta"));

    return t;
};

PyObject *new_CThostFtdcForQuoteRspField(CThostFtdcForQuoteRspField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcForQuoteRspField", "ssssss",
                               p->TradingDay, p->InstrumentID, p->ForQuoteSysID, p->ForQuoteTime, p->ActionDay,
                               p->ExchangeID);
}

CThostFtdcForQuoteRspField *from_CThostFtdcForQuoteRspField(PyObject * p) {
    CThostFtdcForQuoteRspField *t = (CThostFtdcForQuoteRspField *) calloc(1, sizeof(CThostFtdcForQuoteRspField));
    memset(t, 0, sizeof(CThostFtdcForQuoteRspField));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    strcpy(t->ForQuoteSysID, PyString_AsString(PyObject_GetAttrString(p, "ForQuoteSysID")));
    strcpy(t->ForQuoteTime, PyString_AsString(PyObject_GetAttrString(p, "ForQuoteTime")));
    strcpy(t->ActionDay, PyString_AsString(PyObject_GetAttrString(p, "ActionDay")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));

    return t;
};

PyObject *new_CThostFtdcStrikeOffsetField(CThostFtdcStrikeOffsetField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcStrikeOffsetField", "scssd",
                               p->InstrumentID, p->InvestorRange, p->BrokerID, p->InvestorID, p->Offset);
}

CThostFtdcStrikeOffsetField *from_CThostFtdcStrikeOffsetField(PyObject * p) {
    CThostFtdcStrikeOffsetField *t = (CThostFtdcStrikeOffsetField *) calloc(1, sizeof(CThostFtdcStrikeOffsetField));
    memset(t, 0, sizeof(CThostFtdcStrikeOffsetField));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    t->InvestorRange = PyString_AsString(PyObject_GetAttrString(p, "InvestorRange"))[0];
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    t->Offset = PyFloat_AsDouble(PyObject_GetAttrString(p, "Offset"));

    return t;
};

PyObject *new_CThostFtdcQryStrikeOffsetField(CThostFtdcQryStrikeOffsetField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryStrikeOffsetField", "sss",
                               p->BrokerID, p->InvestorID, p->InstrumentID);
}

CThostFtdcQryStrikeOffsetField *from_CThostFtdcQryStrikeOffsetField(PyObject * p) {
    CThostFtdcQryStrikeOffsetField *t = (CThostFtdcQryStrikeOffsetField *) calloc(1,
                                                                                  sizeof(CThostFtdcQryStrikeOffsetField));
    memset(t, 0, sizeof(CThostFtdcQryStrikeOffsetField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));

    return t;
};

PyObject *new_CThostFtdcInputBatchOrderActionField(CThostFtdcInputBatchOrderActionField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcInputBatchOrderActionField", "ssiiiiss",
                               p->BrokerID, p->InvestorID, p->OrderActionRef, p->RequestID, p->FrontID, p->SessionID,
                               p->ExchangeID, p->UserID);
}

CThostFtdcInputBatchOrderActionField *from_CThostFtdcInputBatchOrderActionField(PyObject * p) {
    CThostFtdcInputBatchOrderActionField *t = (CThostFtdcInputBatchOrderActionField *) calloc(1,
                                                                                              sizeof(CThostFtdcInputBatchOrderActionField));
    memset(t, 0, sizeof(CThostFtdcInputBatchOrderActionField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    t->OrderActionRef = PyInt_AsLong(PyObject_GetAttrString(p, "OrderActionRef"));
    t->RequestID = PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
    t->FrontID = PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));

    return t;
};

PyObject *new_CThostFtdcBatchOrderActionField(CThostFtdcBatchOrderActionField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcBatchOrderActionField", "ssiiiissssisssscss",
                               p->BrokerID, p->InvestorID, p->OrderActionRef, p->RequestID, p->FrontID, p->SessionID,
                               p->ExchangeID, p->ActionDate, p->ActionTime, p->TraderID, p->InstallID, p->ActionLocalID,
                               p->ParticipantID, p->ClientID, p->BusinessUnit, p->OrderActionStatus, p->UserID,
                               p->StatusMsg);
}

CThostFtdcBatchOrderActionField *from_CThostFtdcBatchOrderActionField(PyObject * p) {
    CThostFtdcBatchOrderActionField *t = (CThostFtdcBatchOrderActionField *) calloc(1,
                                                                                    sizeof(CThostFtdcBatchOrderActionField));
    memset(t, 0, sizeof(CThostFtdcBatchOrderActionField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    t->OrderActionRef = PyInt_AsLong(PyObject_GetAttrString(p, "OrderActionRef"));
    t->RequestID = PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
    t->FrontID = PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->ActionDate, PyString_AsString(PyObject_GetAttrString(p, "ActionDate")));
    strcpy(t->ActionTime, PyString_AsString(PyObject_GetAttrString(p, "ActionTime")));
    strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    strcpy(t->ActionLocalID, PyString_AsString(PyObject_GetAttrString(p, "ActionLocalID")));
    strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
    strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
    strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
    t->OrderActionStatus = PyString_AsString(PyObject_GetAttrString(p, "OrderActionStatus"))[0];
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    strcpy(t->StatusMsg, PyString_AsString(PyObject_GetAttrString(p, "StatusMsg")));

    return t;
};

PyObject *new_CThostFtdcExchangeBatchOrderActionField(CThostFtdcExchangeBatchOrderActionField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcExchangeBatchOrderActionField", "ssssisssscs",
                               p->ExchangeID, p->ActionDate, p->ActionTime, p->TraderID, p->InstallID, p->ActionLocalID,
                               p->ParticipantID, p->ClientID, p->BusinessUnit, p->OrderActionStatus, p->UserID);
}

CThostFtdcExchangeBatchOrderActionField *from_CThostFtdcExchangeBatchOrderActionField(PyObject * p) {
    CThostFtdcExchangeBatchOrderActionField *t = (CThostFtdcExchangeBatchOrderActionField *) calloc(1,
                                                                                                    sizeof(CThostFtdcExchangeBatchOrderActionField));
    memset(t, 0, sizeof(CThostFtdcExchangeBatchOrderActionField));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->ActionDate, PyString_AsString(PyObject_GetAttrString(p, "ActionDate")));
    strcpy(t->ActionTime, PyString_AsString(PyObject_GetAttrString(p, "ActionTime")));
    strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    strcpy(t->ActionLocalID, PyString_AsString(PyObject_GetAttrString(p, "ActionLocalID")));
    strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
    strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
    strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
    t->OrderActionStatus = PyString_AsString(PyObject_GetAttrString(p, "OrderActionStatus"))[0];
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));

    return t;
};

PyObject *new_CThostFtdcQryBatchOrderActionField(CThostFtdcQryBatchOrderActionField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryBatchOrderActionField", "sss",
                               p->BrokerID, p->InvestorID, p->ExchangeID);
}

CThostFtdcQryBatchOrderActionField *from_CThostFtdcQryBatchOrderActionField(PyObject * p) {
    CThostFtdcQryBatchOrderActionField *t = (CThostFtdcQryBatchOrderActionField *) calloc(1,
                                                                                          sizeof(CThostFtdcQryBatchOrderActionField));
    memset(t, 0, sizeof(CThostFtdcQryBatchOrderActionField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));

    return t;
};

PyObject *new_CThostFtdcCombInstrumentGuardField(CThostFtdcCombInstrumentGuardField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcCombInstrumentGuardField", "ssd",
                               p->BrokerID, p->InstrumentID, p->GuarantRatio);
}

CThostFtdcCombInstrumentGuardField *from_CThostFtdcCombInstrumentGuardField(PyObject * p) {
    CThostFtdcCombInstrumentGuardField *t = (CThostFtdcCombInstrumentGuardField *) calloc(1,
                                                                                          sizeof(CThostFtdcCombInstrumentGuardField));
    memset(t, 0, sizeof(CThostFtdcCombInstrumentGuardField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    t->GuarantRatio = PyFloat_AsDouble(PyObject_GetAttrString(p, "GuarantRatio"));

    return t;
};

PyObject *new_CThostFtdcQryCombInstrumentGuardField(CThostFtdcQryCombInstrumentGuardField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryCombInstrumentGuardField", "ss",
                               p->BrokerID, p->InstrumentID);
}

CThostFtdcQryCombInstrumentGuardField *from_CThostFtdcQryCombInstrumentGuardField(PyObject * p) {
    CThostFtdcQryCombInstrumentGuardField *t = (CThostFtdcQryCombInstrumentGuardField *) calloc(1,
                                                                                                sizeof(CThostFtdcQryCombInstrumentGuardField));
    memset(t, 0, sizeof(CThostFtdcQryCombInstrumentGuardField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));

    return t;
};

PyObject *new_CThostFtdcInputCombActionField(CThostFtdcInputCombActionField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcInputCombActionField", "ssssscicc",
                               p->BrokerID, p->InvestorID, p->InstrumentID, p->CombActionRef, p->UserID, p->Direction,
                               p->Volume, p->CombDirection, p->HedgeFlag);
}

CThostFtdcInputCombActionField *from_CThostFtdcInputCombActionField(PyObject * p) {
    CThostFtdcInputCombActionField *t = (CThostFtdcInputCombActionField *) calloc(1,
                                                                                  sizeof(CThostFtdcInputCombActionField));
    memset(t, 0, sizeof(CThostFtdcInputCombActionField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    strcpy(t->CombActionRef, PyString_AsString(PyObject_GetAttrString(p, "CombActionRef")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    t->Direction = PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
    t->Volume = PyInt_AsLong(PyObject_GetAttrString(p, "Volume"));
    t->CombDirection = PyString_AsString(PyObject_GetAttrString(p, "CombDirection"))[0];
    t->HedgeFlag = PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];

    return t;
};

PyObject *new_CThostFtdcCombActionField(CThostFtdcCombActionField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcCombActionField", "sssssciccssssssicisiiiiss",
                               p->BrokerID, p->InvestorID, p->InstrumentID, p->CombActionRef, p->UserID, p->Direction,
                               p->Volume, p->CombDirection, p->HedgeFlag, p->ActionLocalID, p->ExchangeID,
                               p->ParticipantID, p->ClientID, p->ExchangeInstID, p->TraderID, p->InstallID,
                               p->ActionStatus, p->NotifySequence, p->TradingDay, p->SettlementID, p->SequenceNo,
                               p->FrontID, p->SessionID, p->UserProductInfo, p->StatusMsg);
}

CThostFtdcCombActionField *from_CThostFtdcCombActionField(PyObject * p) {
    CThostFtdcCombActionField *t = (CThostFtdcCombActionField *) calloc(1, sizeof(CThostFtdcCombActionField));
    memset(t, 0, sizeof(CThostFtdcCombActionField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    strcpy(t->CombActionRef, PyString_AsString(PyObject_GetAttrString(p, "CombActionRef")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    t->Direction = PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
    t->Volume = PyInt_AsLong(PyObject_GetAttrString(p, "Volume"));
    t->CombDirection = PyString_AsString(PyObject_GetAttrString(p, "CombDirection"))[0];
    t->HedgeFlag = PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
    strcpy(t->ActionLocalID, PyString_AsString(PyObject_GetAttrString(p, "ActionLocalID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
    strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
    strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
    strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    t->ActionStatus = PyString_AsString(PyObject_GetAttrString(p, "ActionStatus"))[0];
    t->NotifySequence = PyInt_AsLong(PyObject_GetAttrString(p, "NotifySequence"));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->SettlementID = PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
    t->SequenceNo = PyInt_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
    t->FrontID = PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    strcpy(t->UserProductInfo, PyString_AsString(PyObject_GetAttrString(p, "UserProductInfo")));
    strcpy(t->StatusMsg, PyString_AsString(PyObject_GetAttrString(p, "StatusMsg")));

    return t;
};

PyObject *new_CThostFtdcQryCombActionField(CThostFtdcQryCombActionField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryCombActionField", "ssss",
                               p->BrokerID, p->InvestorID, p->InstrumentID, p->ExchangeID);
}

CThostFtdcQryCombActionField *from_CThostFtdcQryCombActionField(PyObject * p) {
    CThostFtdcQryCombActionField *t = (CThostFtdcQryCombActionField *) calloc(1, sizeof(CThostFtdcQryCombActionField));
    memset(t, 0, sizeof(CThostFtdcQryCombActionField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));

    return t;
};

PyObject *new_CThostFtdcExchangeCombActionField(CThostFtdcExchangeCombActionField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcExchangeCombActionField", "ciccssssssicisii",
                               p->Direction, p->Volume, p->CombDirection, p->HedgeFlag, p->ActionLocalID, p->ExchangeID,
                               p->ParticipantID, p->ClientID, p->ExchangeInstID, p->TraderID, p->InstallID,
                               p->ActionStatus, p->NotifySequence, p->TradingDay, p->SettlementID, p->SequenceNo);
}

CThostFtdcExchangeCombActionField *from_CThostFtdcExchangeCombActionField(PyObject * p) {
    CThostFtdcExchangeCombActionField *t = (CThostFtdcExchangeCombActionField *) calloc(1,
                                                                                        sizeof(CThostFtdcExchangeCombActionField));
    memset(t, 0, sizeof(CThostFtdcExchangeCombActionField));
    t->Direction = PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
    t->Volume = PyInt_AsLong(PyObject_GetAttrString(p, "Volume"));
    t->CombDirection = PyString_AsString(PyObject_GetAttrString(p, "CombDirection"))[0];
    t->HedgeFlag = PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
    strcpy(t->ActionLocalID, PyString_AsString(PyObject_GetAttrString(p, "ActionLocalID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
    strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
    strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
    strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    t->ActionStatus = PyString_AsString(PyObject_GetAttrString(p, "ActionStatus"))[0];
    t->NotifySequence = PyInt_AsLong(PyObject_GetAttrString(p, "NotifySequence"));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->SettlementID = PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
    t->SequenceNo = PyInt_AsLong(PyObject_GetAttrString(p, "SequenceNo"));

    return t;
};

PyObject *new_CThostFtdcQryExchangeCombActionField(CThostFtdcQryExchangeCombActionField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryExchangeCombActionField", "sssss",
                               p->ParticipantID, p->ClientID, p->ExchangeInstID, p->ExchangeID, p->TraderID);
}

CThostFtdcQryExchangeCombActionField *from_CThostFtdcQryExchangeCombActionField(PyObject * p) {
    CThostFtdcQryExchangeCombActionField *t = (CThostFtdcQryExchangeCombActionField *) calloc(1,
                                                                                              sizeof(CThostFtdcQryExchangeCombActionField));
    memset(t, 0, sizeof(CThostFtdcQryExchangeCombActionField));
    strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
    strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
    strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));

    return t;
};

PyObject *new_CThostFtdcProductExchRateField(CThostFtdcProductExchRateField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcProductExchRateField", "ssd",
                               p->ProductID, p->QuoteCurrencyID, p->ExchangeRate);
}

CThostFtdcProductExchRateField *from_CThostFtdcProductExchRateField(PyObject * p) {
    CThostFtdcProductExchRateField *t = (CThostFtdcProductExchRateField *) calloc(1,
                                                                                  sizeof(CThostFtdcProductExchRateField));
    memset(t, 0, sizeof(CThostFtdcProductExchRateField));
    strcpy(t->ProductID, PyString_AsString(PyObject_GetAttrString(p, "ProductID")));
    strcpy(t->QuoteCurrencyID, PyString_AsString(PyObject_GetAttrString(p, "QuoteCurrencyID")));
    t->ExchangeRate = PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchangeRate"));

    return t;
};

PyObject *new_CThostFtdcQryProductExchRateField(CThostFtdcQryProductExchRateField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryProductExchRateField", "s",
                               p->ProductID);
}

CThostFtdcQryProductExchRateField *from_CThostFtdcQryProductExchRateField(PyObject * p) {
    CThostFtdcQryProductExchRateField *t = (CThostFtdcQryProductExchRateField *) calloc(1,
                                                                                        sizeof(CThostFtdcQryProductExchRateField));
    memset(t, 0, sizeof(CThostFtdcQryProductExchRateField));
    strcpy(t->ProductID, PyString_AsString(PyObject_GetAttrString(p, "ProductID")));

    return t;
};

PyObject *new_CThostFtdcQryForQuoteParamField(CThostFtdcQryForQuoteParamField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryForQuoteParamField", "sss",
                               p->BrokerID, p->InstrumentID, p->ExchangeID);
}

CThostFtdcQryForQuoteParamField *from_CThostFtdcQryForQuoteParamField(PyObject * p) {
    CThostFtdcQryForQuoteParamField *t = (CThostFtdcQryForQuoteParamField *) calloc(1,
                                                                                    sizeof(CThostFtdcQryForQuoteParamField));
    memset(t, 0, sizeof(CThostFtdcQryForQuoteParamField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));

    return t;
};

PyObject *new_CThostFtdcForQuoteParamField(CThostFtdcForQuoteParamField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcForQuoteParamField", "sssdd",
                               p->BrokerID, p->InstrumentID, p->ExchangeID, p->LastPrice, p->PriceInterval);
}

CThostFtdcForQuoteParamField *from_CThostFtdcForQuoteParamField(PyObject * p) {
    CThostFtdcForQuoteParamField *t = (CThostFtdcForQuoteParamField *) calloc(1, sizeof(CThostFtdcForQuoteParamField));
    memset(t, 0, sizeof(CThostFtdcForQuoteParamField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    t->LastPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "LastPrice"));
    t->PriceInterval = PyFloat_AsDouble(PyObject_GetAttrString(p, "PriceInterval"));

    return t;
};

PyObject *new_CThostFtdcMarketDataField(CThostFtdcMarketDataField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcMarketDataField", "ssssdddddddiddddddddsis",
                               p->TradingDay, p->InstrumentID, p->ExchangeID, p->ExchangeInstID, p->LastPrice,
                               p->PreSettlementPrice, p->PreClosePrice, p->PreOpenInterest, p->OpenPrice,
                               p->HighestPrice, p->LowestPrice, p->Volume, p->Turnover, p->OpenInterest, p->ClosePrice,
                               p->SettlementPrice, p->UpperLimitPrice, p->LowerLimitPrice, p->PreDelta, p->CurrDelta,
                               p->UpdateTime, p->UpdateMillisec, p->ActionDay);
}

CThostFtdcMarketDataField *from_CThostFtdcMarketDataField(PyObject * p) {
    CThostFtdcMarketDataField *t = (CThostFtdcMarketDataField *) calloc(1, sizeof(CThostFtdcMarketDataField));
    memset(t, 0, sizeof(CThostFtdcMarketDataField));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
    t->LastPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "LastPrice"));
    t->PreSettlementPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "PreSettlementPrice"));
    t->PreClosePrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "PreClosePrice"));
    t->PreOpenInterest = PyFloat_AsDouble(PyObject_GetAttrString(p, "PreOpenInterest"));
    t->OpenPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenPrice"));
    t->HighestPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "HighestPrice"));
    t->LowestPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "LowestPrice"));
    t->Volume = PyInt_AsLong(PyObject_GetAttrString(p, "Volume"));
    t->Turnover = PyFloat_AsDouble(PyObject_GetAttrString(p, "Turnover"));
    t->OpenInterest = PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenInterest"));
    t->ClosePrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "ClosePrice"));
    t->SettlementPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "SettlementPrice"));
    t->UpperLimitPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "UpperLimitPrice"));
    t->LowerLimitPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "LowerLimitPrice"));
    t->PreDelta = PyFloat_AsDouble(PyObject_GetAttrString(p, "PreDelta"));
    t->CurrDelta = PyFloat_AsDouble(PyObject_GetAttrString(p, "CurrDelta"));
    strcpy(t->UpdateTime, PyString_AsString(PyObject_GetAttrString(p, "UpdateTime")));
    t->UpdateMillisec = PyInt_AsLong(PyObject_GetAttrString(p, "UpdateMillisec"));
    strcpy(t->ActionDay, PyString_AsString(PyObject_GetAttrString(p, "ActionDay")));

    return t;
};

PyObject *new_CThostFtdcMarketDataBaseField(CThostFtdcMarketDataBaseField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcMarketDataBaseField", "sdddd",
                               p->TradingDay, p->PreSettlementPrice, p->PreClosePrice, p->PreOpenInterest, p->PreDelta);
}

CThostFtdcMarketDataBaseField *from_CThostFtdcMarketDataBaseField(PyObject * p) {
    CThostFtdcMarketDataBaseField *t = (CThostFtdcMarketDataBaseField *) calloc(1,
                                                                                sizeof(CThostFtdcMarketDataBaseField));
    memset(t, 0, sizeof(CThostFtdcMarketDataBaseField));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->PreSettlementPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "PreSettlementPrice"));
    t->PreClosePrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "PreClosePrice"));
    t->PreOpenInterest = PyFloat_AsDouble(PyObject_GetAttrString(p, "PreOpenInterest"));
    t->PreDelta = PyFloat_AsDouble(PyObject_GetAttrString(p, "PreDelta"));

    return t;
};

PyObject *new_CThostFtdcMarketDataStaticField(CThostFtdcMarketDataStaticField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcMarketDataStaticField", "dddddddd",
                               p->OpenPrice, p->HighestPrice, p->LowestPrice, p->ClosePrice, p->UpperLimitPrice,
                               p->LowerLimitPrice, p->SettlementPrice, p->CurrDelta);
}

CThostFtdcMarketDataStaticField *from_CThostFtdcMarketDataStaticField(PyObject * p) {
    CThostFtdcMarketDataStaticField *t = (CThostFtdcMarketDataStaticField *) calloc(1,
                                                                                    sizeof(CThostFtdcMarketDataStaticField));
    memset(t, 0, sizeof(CThostFtdcMarketDataStaticField));
    t->OpenPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenPrice"));
    t->HighestPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "HighestPrice"));
    t->LowestPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "LowestPrice"));
    t->ClosePrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "ClosePrice"));
    t->UpperLimitPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "UpperLimitPrice"));
    t->LowerLimitPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "LowerLimitPrice"));
    t->SettlementPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "SettlementPrice"));
    t->CurrDelta = PyFloat_AsDouble(PyObject_GetAttrString(p, "CurrDelta"));

    return t;
};

PyObject *new_CThostFtdcMarketDataLastMatchField(CThostFtdcMarketDataLastMatchField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcMarketDataLastMatchField", "didd",
                               p->LastPrice, p->Volume, p->Turnover, p->OpenInterest);
}

CThostFtdcMarketDataLastMatchField *from_CThostFtdcMarketDataLastMatchField(PyObject * p) {
    CThostFtdcMarketDataLastMatchField *t = (CThostFtdcMarketDataLastMatchField *) calloc(1,
                                                                                          sizeof(CThostFtdcMarketDataLastMatchField));
    memset(t, 0, sizeof(CThostFtdcMarketDataLastMatchField));
    t->LastPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "LastPrice"));
    t->Volume = PyInt_AsLong(PyObject_GetAttrString(p, "Volume"));
    t->Turnover = PyFloat_AsDouble(PyObject_GetAttrString(p, "Turnover"));
    t->OpenInterest = PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenInterest"));

    return t;
};

PyObject *new_CThostFtdcMarketDataBestPriceField(CThostFtdcMarketDataBestPriceField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcMarketDataBestPriceField", "didi",
                               p->BidPrice1, p->BidVolume1, p->AskPrice1, p->AskVolume1);
}

CThostFtdcMarketDataBestPriceField *from_CThostFtdcMarketDataBestPriceField(PyObject * p) {
    CThostFtdcMarketDataBestPriceField *t = (CThostFtdcMarketDataBestPriceField *) calloc(1,
                                                                                          sizeof(CThostFtdcMarketDataBestPriceField));
    memset(t, 0, sizeof(CThostFtdcMarketDataBestPriceField));
    t->BidPrice1 = PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPrice1"));
    t->BidVolume1 = PyInt_AsLong(PyObject_GetAttrString(p, "BidVolume1"));
    t->AskPrice1 = PyFloat_AsDouble(PyObject_GetAttrString(p, "AskPrice1"));
    t->AskVolume1 = PyInt_AsLong(PyObject_GetAttrString(p, "AskVolume1"));

    return t;
};

PyObject *new_CThostFtdcMarketDataBid23Field(CThostFtdcMarketDataBid23Field * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcMarketDataBid23Field", "didi",
                               p->BidPrice2, p->BidVolume2, p->BidPrice3, p->BidVolume3);
}

CThostFtdcMarketDataBid23Field *from_CThostFtdcMarketDataBid23Field(PyObject * p) {
    CThostFtdcMarketDataBid23Field *t = (CThostFtdcMarketDataBid23Field *) calloc(1,
                                                                                  sizeof(CThostFtdcMarketDataBid23Field));
    memset(t, 0, sizeof(CThostFtdcMarketDataBid23Field));
    t->BidPrice2 = PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPrice2"));
    t->BidVolume2 = PyInt_AsLong(PyObject_GetAttrString(p, "BidVolume2"));
    t->BidPrice3 = PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPrice3"));
    t->BidVolume3 = PyInt_AsLong(PyObject_GetAttrString(p, "BidVolume3"));

    return t;
};

PyObject *new_CThostFtdcMarketDataAsk23Field(CThostFtdcMarketDataAsk23Field * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcMarketDataAsk23Field", "didi",
                               p->AskPrice2, p->AskVolume2, p->AskPrice3, p->AskVolume3);
}

CThostFtdcMarketDataAsk23Field *from_CThostFtdcMarketDataAsk23Field(PyObject * p) {
    CThostFtdcMarketDataAsk23Field *t = (CThostFtdcMarketDataAsk23Field *) calloc(1,
                                                                                  sizeof(CThostFtdcMarketDataAsk23Field));
    memset(t, 0, sizeof(CThostFtdcMarketDataAsk23Field));
    t->AskPrice2 = PyFloat_AsDouble(PyObject_GetAttrString(p, "AskPrice2"));
    t->AskVolume2 = PyInt_AsLong(PyObject_GetAttrString(p, "AskVolume2"));
    t->AskPrice3 = PyFloat_AsDouble(PyObject_GetAttrString(p, "AskPrice3"));
    t->AskVolume3 = PyInt_AsLong(PyObject_GetAttrString(p, "AskVolume3"));

    return t;
};

PyObject *new_CThostFtdcMarketDataBid45Field(CThostFtdcMarketDataBid45Field * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcMarketDataBid45Field", "didi",
                               p->BidPrice4, p->BidVolume4, p->BidPrice5, p->BidVolume5);
}

CThostFtdcMarketDataBid45Field *from_CThostFtdcMarketDataBid45Field(PyObject * p) {
    CThostFtdcMarketDataBid45Field *t = (CThostFtdcMarketDataBid45Field *) calloc(1,
                                                                                  sizeof(CThostFtdcMarketDataBid45Field));
    memset(t, 0, sizeof(CThostFtdcMarketDataBid45Field));
    t->BidPrice4 = PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPrice4"));
    t->BidVolume4 = PyInt_AsLong(PyObject_GetAttrString(p, "BidVolume4"));
    t->BidPrice5 = PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPrice5"));
    t->BidVolume5 = PyInt_AsLong(PyObject_GetAttrString(p, "BidVolume5"));

    return t;
};

PyObject *new_CThostFtdcMarketDataAsk45Field(CThostFtdcMarketDataAsk45Field * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcMarketDataAsk45Field", "didi",
                               p->AskPrice4, p->AskVolume4, p->AskPrice5, p->AskVolume5);
}

CThostFtdcMarketDataAsk45Field *from_CThostFtdcMarketDataAsk45Field(PyObject * p) {
    CThostFtdcMarketDataAsk45Field *t = (CThostFtdcMarketDataAsk45Field *) calloc(1,
                                                                                  sizeof(CThostFtdcMarketDataAsk45Field));
    memset(t, 0, sizeof(CThostFtdcMarketDataAsk45Field));
    t->AskPrice4 = PyFloat_AsDouble(PyObject_GetAttrString(p, "AskPrice4"));
    t->AskVolume4 = PyInt_AsLong(PyObject_GetAttrString(p, "AskVolume4"));
    t->AskPrice5 = PyFloat_AsDouble(PyObject_GetAttrString(p, "AskPrice5"));
    t->AskVolume5 = PyInt_AsLong(PyObject_GetAttrString(p, "AskVolume5"));

    return t;
};

PyObject *new_CThostFtdcMarketDataUpdateTimeField(CThostFtdcMarketDataUpdateTimeField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcMarketDataUpdateTimeField", "ssis",
                               p->InstrumentID, p->UpdateTime, p->UpdateMillisec, p->ActionDay);
}

CThostFtdcMarketDataUpdateTimeField *from_CThostFtdcMarketDataUpdateTimeField(PyObject * p) {
    CThostFtdcMarketDataUpdateTimeField *t = (CThostFtdcMarketDataUpdateTimeField *) calloc(1,
                                                                                            sizeof(CThostFtdcMarketDataUpdateTimeField));
    memset(t, 0, sizeof(CThostFtdcMarketDataUpdateTimeField));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    strcpy(t->UpdateTime, PyString_AsString(PyObject_GetAttrString(p, "UpdateTime")));
    t->UpdateMillisec = PyInt_AsLong(PyObject_GetAttrString(p, "UpdateMillisec"));
    strcpy(t->ActionDay, PyString_AsString(PyObject_GetAttrString(p, "ActionDay")));

    return t;
};

PyObject *new_CThostFtdcMarketDataExchangeField(CThostFtdcMarketDataExchangeField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcMarketDataExchangeField", "s",
                               p->ExchangeID);
}

CThostFtdcMarketDataExchangeField *from_CThostFtdcMarketDataExchangeField(PyObject * p) {
    CThostFtdcMarketDataExchangeField *t = (CThostFtdcMarketDataExchangeField *) calloc(1,
                                                                                        sizeof(CThostFtdcMarketDataExchangeField));
    memset(t, 0, sizeof(CThostFtdcMarketDataExchangeField));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));

    return t;
};

PyObject *new_CThostFtdcSpecificInstrumentField(CThostFtdcSpecificInstrumentField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcSpecificInstrumentField", "s",
                               p->InstrumentID);
}

CThostFtdcSpecificInstrumentField *from_CThostFtdcSpecificInstrumentField(PyObject * p) {
    CThostFtdcSpecificInstrumentField *t = (CThostFtdcSpecificInstrumentField *) calloc(1,
                                                                                        sizeof(CThostFtdcSpecificInstrumentField));
    memset(t, 0, sizeof(CThostFtdcSpecificInstrumentField));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));

    return t;
};

PyObject *new_CThostFtdcInstrumentStatusField(CThostFtdcInstrumentStatusField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcInstrumentStatusField", "sssscisc",
                               p->ExchangeID, p->ExchangeInstID, p->SettlementGroupID, p->InstrumentID,
                               p->InstrumentStatus, p->TradingSegmentSN, p->EnterTime, p->EnterReason);
}

CThostFtdcInstrumentStatusField *from_CThostFtdcInstrumentStatusField(PyObject * p) {
    CThostFtdcInstrumentStatusField *t = (CThostFtdcInstrumentStatusField *) calloc(1,
                                                                                    sizeof(CThostFtdcInstrumentStatusField));
    memset(t, 0, sizeof(CThostFtdcInstrumentStatusField));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
    strcpy(t->SettlementGroupID, PyString_AsString(PyObject_GetAttrString(p, "SettlementGroupID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    t->InstrumentStatus = PyString_AsString(PyObject_GetAttrString(p, "InstrumentStatus"))[0];
    t->TradingSegmentSN = PyInt_AsLong(PyObject_GetAttrString(p, "TradingSegmentSN"));
    strcpy(t->EnterTime, PyString_AsString(PyObject_GetAttrString(p, "EnterTime")));
    t->EnterReason = PyString_AsString(PyObject_GetAttrString(p, "EnterReason"))[0];

    return t;
};

PyObject *new_CThostFtdcQryInstrumentStatusField(CThostFtdcQryInstrumentStatusField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryInstrumentStatusField", "ss",
                               p->ExchangeID, p->ExchangeInstID);
}

CThostFtdcQryInstrumentStatusField *from_CThostFtdcQryInstrumentStatusField(PyObject * p) {
    CThostFtdcQryInstrumentStatusField *t = (CThostFtdcQryInstrumentStatusField *) calloc(1,
                                                                                          sizeof(CThostFtdcQryInstrumentStatusField));
    memset(t, 0, sizeof(CThostFtdcQryInstrumentStatusField));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));

    return t;
};

PyObject *new_CThostFtdcInvestorAccountField(CThostFtdcInvestorAccountField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcInvestorAccountField", "ssss",
                               p->BrokerID, p->InvestorID, p->AccountID, p->CurrencyID);
}

CThostFtdcInvestorAccountField *from_CThostFtdcInvestorAccountField(PyObject * p) {
    CThostFtdcInvestorAccountField *t = (CThostFtdcInvestorAccountField *) calloc(1,
                                                                                  sizeof(CThostFtdcInvestorAccountField));
    memset(t, 0, sizeof(CThostFtdcInvestorAccountField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
    strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));

    return t;
};

PyObject *new_CThostFtdcPositionProfitAlgorithmField(CThostFtdcPositionProfitAlgorithmField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcPositionProfitAlgorithmField", "sscss",
                               p->BrokerID, p->AccountID, p->Algorithm, p->Memo, p->CurrencyID);
}

CThostFtdcPositionProfitAlgorithmField *from_CThostFtdcPositionProfitAlgorithmField(PyObject * p) {
    CThostFtdcPositionProfitAlgorithmField *t = (CThostFtdcPositionProfitAlgorithmField *) calloc(1,
                                                                                                  sizeof(CThostFtdcPositionProfitAlgorithmField));
    memset(t, 0, sizeof(CThostFtdcPositionProfitAlgorithmField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
    t->Algorithm = PyString_AsString(PyObject_GetAttrString(p, "Algorithm"))[0];
    strcpy(t->Memo, PyString_AsString(PyObject_GetAttrString(p, "Memo")));
    strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));

    return t;
};

PyObject *new_CThostFtdcDiscountField(CThostFtdcDiscountField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcDiscountField", "scsd",
                               p->BrokerID, p->InvestorRange, p->InvestorID, p->Discount);
}

CThostFtdcDiscountField *from_CThostFtdcDiscountField(PyObject * p) {
    CThostFtdcDiscountField *t = (CThostFtdcDiscountField *) calloc(1, sizeof(CThostFtdcDiscountField));
    memset(t, 0, sizeof(CThostFtdcDiscountField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    t->InvestorRange = PyString_AsString(PyObject_GetAttrString(p, "InvestorRange"))[0];
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    t->Discount = PyFloat_AsDouble(PyObject_GetAttrString(p, "Discount"));

    return t;
};

PyObject *new_CThostFtdcQryTransferBankField(CThostFtdcQryTransferBankField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryTransferBankField", "ss",
                               p->BankID, p->BankBrchID);
}

CThostFtdcQryTransferBankField *from_CThostFtdcQryTransferBankField(PyObject * p) {
    CThostFtdcQryTransferBankField *t = (CThostFtdcQryTransferBankField *) calloc(1,
                                                                                  sizeof(CThostFtdcQryTransferBankField));
    memset(t, 0, sizeof(CThostFtdcQryTransferBankField));
    strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
    strcpy(t->BankBrchID, PyString_AsString(PyObject_GetAttrString(p, "BankBrchID")));

    return t;
};

PyObject *new_CThostFtdcTransferBankField(CThostFtdcTransferBankField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcTransferBankField", "sssi",
                               p->BankID, p->BankBrchID, p->BankName, p->IsActive);
}

CThostFtdcTransferBankField *from_CThostFtdcTransferBankField(PyObject * p) {
    CThostFtdcTransferBankField *t = (CThostFtdcTransferBankField *) calloc(1, sizeof(CThostFtdcTransferBankField));
    memset(t, 0, sizeof(CThostFtdcTransferBankField));
    strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
    strcpy(t->BankBrchID, PyString_AsString(PyObject_GetAttrString(p, "BankBrchID")));
    strcpy(t->BankName, PyString_AsString(PyObject_GetAttrString(p, "BankName")));
    t->IsActive = PyInt_AsLong(PyObject_GetAttrString(p, "IsActive"));

    return t;
};

PyObject *new_CThostFtdcQryInvestorPositionDetailField(CThostFtdcQryInvestorPositionDetailField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryInvestorPositionDetailField", "sss",
                               p->BrokerID, p->InvestorID, p->InstrumentID);
}

CThostFtdcQryInvestorPositionDetailField *from_CThostFtdcQryInvestorPositionDetailField(PyObject * p) {
    CThostFtdcQryInvestorPositionDetailField *t = (CThostFtdcQryInvestorPositionDetailField *) calloc(1,
                                                                                                      sizeof(CThostFtdcQryInvestorPositionDetailField));
    memset(t, 0, sizeof(CThostFtdcQryInvestorPositionDetailField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));

    return t;
};

PyObject *new_CThostFtdcInvestorPositionDetailField(CThostFtdcInvestorPositionDetailField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcInvestorPositionDetailField", "sssccssidsicssddddddddddid",
                               p->InstrumentID, p->BrokerID, p->InvestorID, p->HedgeFlag, p->Direction, p->OpenDate,
                               p->TradeID, p->Volume, p->OpenPrice, p->TradingDay, p->SettlementID, p->TradeType,
                               p->CombInstrumentID, p->ExchangeID, p->CloseProfitByDate, p->CloseProfitByTrade,
                               p->PositionProfitByDate, p->PositionProfitByTrade, p->Margin, p->ExchMargin,
                               p->MarginRateByMoney, p->MarginRateByVolume, p->LastSettlementPrice, p->SettlementPrice,
                               p->CloseVolume, p->CloseAmount);
}

CThostFtdcInvestorPositionDetailField *from_CThostFtdcInvestorPositionDetailField(PyObject * p) {
    CThostFtdcInvestorPositionDetailField *t = (CThostFtdcInvestorPositionDetailField *) calloc(1,
                                                                                                sizeof(CThostFtdcInvestorPositionDetailField));
    memset(t, 0, sizeof(CThostFtdcInvestorPositionDetailField));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    t->HedgeFlag = PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
    t->Direction = PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
    strcpy(t->OpenDate, PyString_AsString(PyObject_GetAttrString(p, "OpenDate")));
    strcpy(t->TradeID, PyString_AsString(PyObject_GetAttrString(p, "TradeID")));
    t->Volume = PyInt_AsLong(PyObject_GetAttrString(p, "Volume"));
    t->OpenPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenPrice"));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->SettlementID = PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
    t->TradeType = PyString_AsString(PyObject_GetAttrString(p, "TradeType"))[0];
    strcpy(t->CombInstrumentID, PyString_AsString(PyObject_GetAttrString(p, "CombInstrumentID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    t->CloseProfitByDate = PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfitByDate"));
    t->CloseProfitByTrade = PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfitByTrade"));
    t->PositionProfitByDate = PyFloat_AsDouble(PyObject_GetAttrString(p, "PositionProfitByDate"));
    t->PositionProfitByTrade = PyFloat_AsDouble(PyObject_GetAttrString(p, "PositionProfitByTrade"));
    t->Margin = PyFloat_AsDouble(PyObject_GetAttrString(p, "Margin"));
    t->ExchMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchMargin"));
    t->MarginRateByMoney = PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginRateByMoney"));
    t->MarginRateByVolume = PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginRateByVolume"));
    t->LastSettlementPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "LastSettlementPrice"));
    t->SettlementPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "SettlementPrice"));
    t->CloseVolume = PyInt_AsLong(PyObject_GetAttrString(p, "CloseVolume"));
    t->CloseAmount = PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseAmount"));

    return t;
};

PyObject *new_CThostFtdcTradingAccountPasswordField(CThostFtdcTradingAccountPasswordField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcTradingAccountPasswordField", "ssss",
                               p->BrokerID, p->AccountID, p->Password, p->CurrencyID);
}

CThostFtdcTradingAccountPasswordField *from_CThostFtdcTradingAccountPasswordField(PyObject * p) {
    CThostFtdcTradingAccountPasswordField *t = (CThostFtdcTradingAccountPasswordField *) calloc(1,
                                                                                                sizeof(CThostFtdcTradingAccountPasswordField));
    memset(t, 0, sizeof(CThostFtdcTradingAccountPasswordField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
    strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
    strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));

    return t;
};

PyObject *new_CThostFtdcMDTraderOfferField(CThostFtdcMDTraderOfferField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcMDTraderOfferField", "ssssiscssssssssssss",
                               p->ExchangeID, p->TraderID, p->ParticipantID, p->Password, p->InstallID, p->OrderLocalID,
                               p->TraderConnectStatus, p->ConnectRequestDate, p->ConnectRequestTime, p->LastReportDate,
                               p->LastReportTime, p->ConnectDate, p->ConnectTime, p->StartDate, p->StartTime,
                               p->TradingDay, p->BrokerID, p->MaxTradeID, p->MaxOrderMessageReference);
}

CThostFtdcMDTraderOfferField *from_CThostFtdcMDTraderOfferField(PyObject * p) {
    CThostFtdcMDTraderOfferField *t = (CThostFtdcMDTraderOfferField *) calloc(1, sizeof(CThostFtdcMDTraderOfferField));
    memset(t, 0, sizeof(CThostFtdcMDTraderOfferField));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
    strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
    strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
    t->TraderConnectStatus = PyString_AsString(PyObject_GetAttrString(p, "TraderConnectStatus"))[0];
    strcpy(t->ConnectRequestDate, PyString_AsString(PyObject_GetAttrString(p, "ConnectRequestDate")));
    strcpy(t->ConnectRequestTime, PyString_AsString(PyObject_GetAttrString(p, "ConnectRequestTime")));
    strcpy(t->LastReportDate, PyString_AsString(PyObject_GetAttrString(p, "LastReportDate")));
    strcpy(t->LastReportTime, PyString_AsString(PyObject_GetAttrString(p, "LastReportTime")));
    strcpy(t->ConnectDate, PyString_AsString(PyObject_GetAttrString(p, "ConnectDate")));
    strcpy(t->ConnectTime, PyString_AsString(PyObject_GetAttrString(p, "ConnectTime")));
    strcpy(t->StartDate, PyString_AsString(PyObject_GetAttrString(p, "StartDate")));
    strcpy(t->StartTime, PyString_AsString(PyObject_GetAttrString(p, "StartTime")));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->MaxTradeID, PyString_AsString(PyObject_GetAttrString(p, "MaxTradeID")));
    strcpy(t->MaxOrderMessageReference, PyString_AsString(PyObject_GetAttrString(p, "MaxOrderMessageReference")));

    return t;
};

PyObject *new_CThostFtdcQryMDTraderOfferField(CThostFtdcQryMDTraderOfferField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryMDTraderOfferField", "sss",
                               p->ExchangeID, p->ParticipantID, p->TraderID);
}

CThostFtdcQryMDTraderOfferField *from_CThostFtdcQryMDTraderOfferField(PyObject * p) {
    CThostFtdcQryMDTraderOfferField *t = (CThostFtdcQryMDTraderOfferField *) calloc(1,
                                                                                    sizeof(CThostFtdcQryMDTraderOfferField));
    memset(t, 0, sizeof(CThostFtdcQryMDTraderOfferField));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
    strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));

    return t;
};

PyObject *new_CThostFtdcQryNoticeField(CThostFtdcQryNoticeField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryNoticeField", "s",
                               p->BrokerID);
}

CThostFtdcQryNoticeField *from_CThostFtdcQryNoticeField(PyObject * p) {
    CThostFtdcQryNoticeField *t = (CThostFtdcQryNoticeField *) calloc(1, sizeof(CThostFtdcQryNoticeField));
    memset(t, 0, sizeof(CThostFtdcQryNoticeField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

    return t;
};

PyObject *new_CThostFtdcNoticeField(CThostFtdcNoticeField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcNoticeField", "sss",
                               p->BrokerID, p->Content, p->SequenceLabel);
}

CThostFtdcNoticeField *from_CThostFtdcNoticeField(PyObject * p) {
    CThostFtdcNoticeField *t = (CThostFtdcNoticeField *) calloc(1, sizeof(CThostFtdcNoticeField));
    memset(t, 0, sizeof(CThostFtdcNoticeField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->Content, PyString_AsString(PyObject_GetAttrString(p, "Content")));
    strcpy(t->SequenceLabel, PyString_AsString(PyObject_GetAttrString(p, "SequenceLabel")));

    return t;
};

PyObject *new_CThostFtdcUserRightField(CThostFtdcUserRightField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcUserRightField", "ssci",
                               p->BrokerID, p->UserID, p->UserRightType, p->IsForbidden);
}

CThostFtdcUserRightField *from_CThostFtdcUserRightField(PyObject * p) {
    CThostFtdcUserRightField *t = (CThostFtdcUserRightField *) calloc(1, sizeof(CThostFtdcUserRightField));
    memset(t, 0, sizeof(CThostFtdcUserRightField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    t->UserRightType = PyString_AsString(PyObject_GetAttrString(p, "UserRightType"))[0];
    t->IsForbidden = PyInt_AsLong(PyObject_GetAttrString(p, "IsForbidden"));

    return t;
};

PyObject *new_CThostFtdcQrySettlementInfoConfirmField(CThostFtdcQrySettlementInfoConfirmField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQrySettlementInfoConfirmField", "ss",
                               p->BrokerID, p->InvestorID);
}

CThostFtdcQrySettlementInfoConfirmField *from_CThostFtdcQrySettlementInfoConfirmField(PyObject * p) {
    CThostFtdcQrySettlementInfoConfirmField *t = (CThostFtdcQrySettlementInfoConfirmField *) calloc(1,
                                                                                                    sizeof(CThostFtdcQrySettlementInfoConfirmField));
    memset(t, 0, sizeof(CThostFtdcQrySettlementInfoConfirmField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));

    return t;
};

PyObject *new_CThostFtdcLoadSettlementInfoField(CThostFtdcLoadSettlementInfoField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcLoadSettlementInfoField", "s",
                               p->BrokerID);
}

CThostFtdcLoadSettlementInfoField *from_CThostFtdcLoadSettlementInfoField(PyObject * p) {
    CThostFtdcLoadSettlementInfoField *t = (CThostFtdcLoadSettlementInfoField *) calloc(1,
                                                                                        sizeof(CThostFtdcLoadSettlementInfoField));
    memset(t, 0, sizeof(CThostFtdcLoadSettlementInfoField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

    return t;
};

PyObject *new_CThostFtdcBrokerWithdrawAlgorithmField(CThostFtdcBrokerWithdrawAlgorithmField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcBrokerWithdrawAlgorithmField", "scdcccisdc",
                               p->BrokerID, p->WithdrawAlgorithm, p->UsingRatio, p->IncludeCloseProfit,
                               p->AllWithoutTrade, p->AvailIncludeCloseProfit, p->IsBrokerUserEvent, p->CurrencyID,
                               p->FundMortgageRatio, p->BalanceAlgorithm);
}

CThostFtdcBrokerWithdrawAlgorithmField *from_CThostFtdcBrokerWithdrawAlgorithmField(PyObject * p) {
    CThostFtdcBrokerWithdrawAlgorithmField *t = (CThostFtdcBrokerWithdrawAlgorithmField *) calloc(1,
                                                                                                  sizeof(CThostFtdcBrokerWithdrawAlgorithmField));
    memset(t, 0, sizeof(CThostFtdcBrokerWithdrawAlgorithmField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    t->WithdrawAlgorithm = PyString_AsString(PyObject_GetAttrString(p, "WithdrawAlgorithm"))[0];
    t->UsingRatio = PyFloat_AsDouble(PyObject_GetAttrString(p, "UsingRatio"));
    t->IncludeCloseProfit = PyString_AsString(PyObject_GetAttrString(p, "IncludeCloseProfit"))[0];
    t->AllWithoutTrade = PyString_AsString(PyObject_GetAttrString(p, "AllWithoutTrade"))[0];
    t->AvailIncludeCloseProfit = PyString_AsString(PyObject_GetAttrString(p, "AvailIncludeCloseProfit"))[0];
    t->IsBrokerUserEvent = PyInt_AsLong(PyObject_GetAttrString(p, "IsBrokerUserEvent"));
    strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
    t->FundMortgageRatio = PyFloat_AsDouble(PyObject_GetAttrString(p, "FundMortgageRatio"));
    t->BalanceAlgorithm = PyString_AsString(PyObject_GetAttrString(p, "BalanceAlgorithm"))[0];

    return t;
};

PyObject *new_CThostFtdcTradingAccountPasswordUpdateV1Field(CThostFtdcTradingAccountPasswordUpdateV1Field * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcTradingAccountPasswordUpdateV1Field", "ssss",
                               p->BrokerID, p->InvestorID, p->OldPassword, p->NewPassword);
}

CThostFtdcTradingAccountPasswordUpdateV1Field *from_CThostFtdcTradingAccountPasswordUpdateV1Field(PyObject * p) {
    CThostFtdcTradingAccountPasswordUpdateV1Field *t = (CThostFtdcTradingAccountPasswordUpdateV1Field *) calloc(1,
                                                                                                                sizeof(CThostFtdcTradingAccountPasswordUpdateV1Field));
    memset(t, 0, sizeof(CThostFtdcTradingAccountPasswordUpdateV1Field));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->OldPassword, PyString_AsString(PyObject_GetAttrString(p, "OldPassword")));
    strcpy(t->NewPassword, PyString_AsString(PyObject_GetAttrString(p, "NewPassword")));

    return t;
};

PyObject *new_CThostFtdcTradingAccountPasswordUpdateField(CThostFtdcTradingAccountPasswordUpdateField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcTradingAccountPasswordUpdateField", "sssss",
                               p->BrokerID, p->AccountID, p->OldPassword, p->NewPassword, p->CurrencyID);
}

CThostFtdcTradingAccountPasswordUpdateField *from_CThostFtdcTradingAccountPasswordUpdateField(PyObject * p) {
    CThostFtdcTradingAccountPasswordUpdateField *t = (CThostFtdcTradingAccountPasswordUpdateField *) calloc(1,
                                                                                                            sizeof(CThostFtdcTradingAccountPasswordUpdateField));
    memset(t, 0, sizeof(CThostFtdcTradingAccountPasswordUpdateField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
    strcpy(t->OldPassword, PyString_AsString(PyObject_GetAttrString(p, "OldPassword")));
    strcpy(t->NewPassword, PyString_AsString(PyObject_GetAttrString(p, "NewPassword")));
    strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));

    return t;
};

PyObject *new_CThostFtdcQryCombinationLegField(CThostFtdcQryCombinationLegField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryCombinationLegField", "sis",
                               p->CombInstrumentID, p->LegID, p->LegInstrumentID);
}

CThostFtdcQryCombinationLegField *from_CThostFtdcQryCombinationLegField(PyObject * p) {
    CThostFtdcQryCombinationLegField *t = (CThostFtdcQryCombinationLegField *) calloc(1,
                                                                                      sizeof(CThostFtdcQryCombinationLegField));
    memset(t, 0, sizeof(CThostFtdcQryCombinationLegField));
    strcpy(t->CombInstrumentID, PyString_AsString(PyObject_GetAttrString(p, "CombInstrumentID")));
    t->LegID = PyInt_AsLong(PyObject_GetAttrString(p, "LegID"));
    strcpy(t->LegInstrumentID, PyString_AsString(PyObject_GetAttrString(p, "LegInstrumentID")));

    return t;
};

PyObject *new_CThostFtdcQrySyncStatusField(CThostFtdcQrySyncStatusField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQrySyncStatusField", "s",
                               p->TradingDay);
}

CThostFtdcQrySyncStatusField *from_CThostFtdcQrySyncStatusField(PyObject * p) {
    CThostFtdcQrySyncStatusField *t = (CThostFtdcQrySyncStatusField *) calloc(1, sizeof(CThostFtdcQrySyncStatusField));
    memset(t, 0, sizeof(CThostFtdcQrySyncStatusField));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));

    return t;
};

PyObject *new_CThostFtdcCombinationLegField(CThostFtdcCombinationLegField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcCombinationLegField", "siscii",
                               p->CombInstrumentID, p->LegID, p->LegInstrumentID, p->Direction, p->LegMultiple,
                               p->ImplyLevel);
}

CThostFtdcCombinationLegField *from_CThostFtdcCombinationLegField(PyObject * p) {
    CThostFtdcCombinationLegField *t = (CThostFtdcCombinationLegField *) calloc(1,
                                                                                sizeof(CThostFtdcCombinationLegField));
    memset(t, 0, sizeof(CThostFtdcCombinationLegField));
    strcpy(t->CombInstrumentID, PyString_AsString(PyObject_GetAttrString(p, "CombInstrumentID")));
    t->LegID = PyInt_AsLong(PyObject_GetAttrString(p, "LegID"));
    strcpy(t->LegInstrumentID, PyString_AsString(PyObject_GetAttrString(p, "LegInstrumentID")));
    t->Direction = PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
    t->LegMultiple = PyInt_AsLong(PyObject_GetAttrString(p, "LegMultiple"));
    t->ImplyLevel = PyInt_AsLong(PyObject_GetAttrString(p, "ImplyLevel"));

    return t;
};

PyObject *new_CThostFtdcSyncStatusField(CThostFtdcSyncStatusField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcSyncStatusField", "sc",
                               p->TradingDay, p->DataSyncStatus);
}

CThostFtdcSyncStatusField *from_CThostFtdcSyncStatusField(PyObject * p) {
    CThostFtdcSyncStatusField *t = (CThostFtdcSyncStatusField *) calloc(1, sizeof(CThostFtdcSyncStatusField));
    memset(t, 0, sizeof(CThostFtdcSyncStatusField));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->DataSyncStatus = PyString_AsString(PyObject_GetAttrString(p, "DataSyncStatus"))[0];

    return t;
};

PyObject *new_CThostFtdcQryLinkManField(CThostFtdcQryLinkManField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryLinkManField", "ss",
                               p->BrokerID, p->InvestorID);
}

CThostFtdcQryLinkManField *from_CThostFtdcQryLinkManField(PyObject * p) {
    CThostFtdcQryLinkManField *t = (CThostFtdcQryLinkManField *) calloc(1, sizeof(CThostFtdcQryLinkManField));
    memset(t, 0, sizeof(CThostFtdcQryLinkManField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));

    return t;
};

PyObject *new_CThostFtdcLinkManField(CThostFtdcLinkManField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcLinkManField", "ssccsssssiss",
                               p->BrokerID, p->InvestorID, p->PersonType, p->IdentifiedCardType, p->IdentifiedCardNo,
                               p->PersonName, p->Telephone, p->Address, p->ZipCode, p->Priority, p->UOAZipCode,
                               p->PersonFullName);
}

CThostFtdcLinkManField *from_CThostFtdcLinkManField(PyObject * p) {
    CThostFtdcLinkManField *t = (CThostFtdcLinkManField *) calloc(1, sizeof(CThostFtdcLinkManField));
    memset(t, 0, sizeof(CThostFtdcLinkManField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    t->PersonType = PyString_AsString(PyObject_GetAttrString(p, "PersonType"))[0];
    t->IdentifiedCardType = PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardType"))[0];
    strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
    strcpy(t->PersonName, PyString_AsString(PyObject_GetAttrString(p, "PersonName")));
    strcpy(t->Telephone, PyString_AsString(PyObject_GetAttrString(p, "Telephone")));
    strcpy(t->Address, PyString_AsString(PyObject_GetAttrString(p, "Address")));
    strcpy(t->ZipCode, PyString_AsString(PyObject_GetAttrString(p, "ZipCode")));
    t->Priority = PyInt_AsLong(PyObject_GetAttrString(p, "Priority"));
    strcpy(t->UOAZipCode, PyString_AsString(PyObject_GetAttrString(p, "UOAZipCode")));
    strcpy(t->PersonFullName, PyString_AsString(PyObject_GetAttrString(p, "PersonFullName")));

    return t;
};

PyObject *new_CThostFtdcQryBrokerUserEventField(CThostFtdcQryBrokerUserEventField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryBrokerUserEventField", "ssc",
                               p->BrokerID, p->UserID, p->UserEventType);
}

CThostFtdcQryBrokerUserEventField *from_CThostFtdcQryBrokerUserEventField(PyObject * p) {
    CThostFtdcQryBrokerUserEventField *t = (CThostFtdcQryBrokerUserEventField *) calloc(1,
                                                                                        sizeof(CThostFtdcQryBrokerUserEventField));
    memset(t, 0, sizeof(CThostFtdcQryBrokerUserEventField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    t->UserEventType = PyString_AsString(PyObject_GetAttrString(p, "UserEventType"))[0];

    return t;
};

PyObject *new_CThostFtdcBrokerUserEventField(CThostFtdcBrokerUserEventField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcBrokerUserEventField", "sscisssss",
                               p->BrokerID, p->UserID, p->UserEventType, p->EventSequenceNo, p->EventDate, p->EventTime,
                               p->UserEventInfo, p->InvestorID, p->InstrumentID);
}

CThostFtdcBrokerUserEventField *from_CThostFtdcBrokerUserEventField(PyObject * p) {
    CThostFtdcBrokerUserEventField *t = (CThostFtdcBrokerUserEventField *) calloc(1,
                                                                                  sizeof(CThostFtdcBrokerUserEventField));
    memset(t, 0, sizeof(CThostFtdcBrokerUserEventField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    t->UserEventType = PyString_AsString(PyObject_GetAttrString(p, "UserEventType"))[0];
    t->EventSequenceNo = PyInt_AsLong(PyObject_GetAttrString(p, "EventSequenceNo"));
    strcpy(t->EventDate, PyString_AsString(PyObject_GetAttrString(p, "EventDate")));
    strcpy(t->EventTime, PyString_AsString(PyObject_GetAttrString(p, "EventTime")));
    strcpy(t->UserEventInfo, PyString_AsString(PyObject_GetAttrString(p, "UserEventInfo")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));

    return t;
};

PyObject *new_CThostFtdcQryContractBankField(CThostFtdcQryContractBankField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryContractBankField", "sss",
                               p->BrokerID, p->BankID, p->BankBrchID);
}

CThostFtdcQryContractBankField *from_CThostFtdcQryContractBankField(PyObject * p) {
    CThostFtdcQryContractBankField *t = (CThostFtdcQryContractBankField *) calloc(1,
                                                                                  sizeof(CThostFtdcQryContractBankField));
    memset(t, 0, sizeof(CThostFtdcQryContractBankField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
    strcpy(t->BankBrchID, PyString_AsString(PyObject_GetAttrString(p, "BankBrchID")));

    return t;
};

PyObject *new_CThostFtdcContractBankField(CThostFtdcContractBankField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcContractBankField", "ssss",
                               p->BrokerID, p->BankID, p->BankBrchID, p->BankName);
}

CThostFtdcContractBankField *from_CThostFtdcContractBankField(PyObject * p) {
    CThostFtdcContractBankField *t = (CThostFtdcContractBankField *) calloc(1, sizeof(CThostFtdcContractBankField));
    memset(t, 0, sizeof(CThostFtdcContractBankField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
    strcpy(t->BankBrchID, PyString_AsString(PyObject_GetAttrString(p, "BankBrchID")));
    strcpy(t->BankName, PyString_AsString(PyObject_GetAttrString(p, "BankName")));

    return t;
};

PyObject *new_CThostFtdcInvestorPositionCombineDetailField(CThostFtdcInvestorPositionCombineDetailField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcInvestorPositionCombineDetailField", "sssissssscciddddiisi",
                               p->TradingDay, p->OpenDate, p->ExchangeID, p->SettlementID, p->BrokerID, p->InvestorID,
                               p->ComTradeID, p->TradeID, p->InstrumentID, p->HedgeFlag, p->Direction, p->TotalAmt,
                               p->Margin, p->ExchMargin, p->MarginRateByMoney, p->MarginRateByVolume, p->LegID,
                               p->LegMultiple, p->CombInstrumentID, p->TradeGroupID);
}

CThostFtdcInvestorPositionCombineDetailField *from_CThostFtdcInvestorPositionCombineDetailField(PyObject * p) {
    CThostFtdcInvestorPositionCombineDetailField *t = (CThostFtdcInvestorPositionCombineDetailField *) calloc(1,
                                                                                                              sizeof(CThostFtdcInvestorPositionCombineDetailField));
    memset(t, 0, sizeof(CThostFtdcInvestorPositionCombineDetailField));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    strcpy(t->OpenDate, PyString_AsString(PyObject_GetAttrString(p, "OpenDate")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    t->SettlementID = PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->ComTradeID, PyString_AsString(PyObject_GetAttrString(p, "ComTradeID")));
    strcpy(t->TradeID, PyString_AsString(PyObject_GetAttrString(p, "TradeID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    t->HedgeFlag = PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
    t->Direction = PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
    t->TotalAmt = PyInt_AsLong(PyObject_GetAttrString(p, "TotalAmt"));
    t->Margin = PyFloat_AsDouble(PyObject_GetAttrString(p, "Margin"));
    t->ExchMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchMargin"));
    t->MarginRateByMoney = PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginRateByMoney"));
    t->MarginRateByVolume = PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginRateByVolume"));
    t->LegID = PyInt_AsLong(PyObject_GetAttrString(p, "LegID"));
    t->LegMultiple = PyInt_AsLong(PyObject_GetAttrString(p, "LegMultiple"));
    strcpy(t->CombInstrumentID, PyString_AsString(PyObject_GetAttrString(p, "CombInstrumentID")));
    t->TradeGroupID = PyInt_AsLong(PyObject_GetAttrString(p, "TradeGroupID"));

    return t;
};

PyObject *new_CThostFtdcParkedOrderField(CThostFtdcParkedOrderField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcParkedOrderField", "sssssccssdicscicdcisiissccisi",
                               p->BrokerID, p->InvestorID, p->InstrumentID, p->OrderRef, p->UserID, p->OrderPriceType,
                               p->Direction, p->CombOffsetFlag, p->CombHedgeFlag, p->LimitPrice, p->VolumeTotalOriginal,
                               p->TimeCondition, p->GTDDate, p->VolumeCondition, p->MinVolume, p->ContingentCondition,
                               p->StopPrice, p->ForceCloseReason, p->IsAutoSuspend, p->BusinessUnit, p->RequestID,
                               p->UserForceClose, p->ExchangeID, p->ParkedOrderID, p->UserType, p->Status, p->ErrorID,
                               p->ErrorMsg, p->IsSwapOrder);
}

CThostFtdcParkedOrderField *from_CThostFtdcParkedOrderField(PyObject * p) {
    CThostFtdcParkedOrderField *t = (CThostFtdcParkedOrderField *) calloc(1, sizeof(CThostFtdcParkedOrderField));
    memset(t, 0, sizeof(CThostFtdcParkedOrderField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    strcpy(t->OrderRef, PyString_AsString(PyObject_GetAttrString(p, "OrderRef")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    t->OrderPriceType = PyString_AsString(PyObject_GetAttrString(p, "OrderPriceType"))[0];
    t->Direction = PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
    strcpy(t->CombOffsetFlag, PyString_AsString(PyObject_GetAttrString(p, "CombOffsetFlag")));
    strcpy(t->CombHedgeFlag, PyString_AsString(PyObject_GetAttrString(p, "CombHedgeFlag")));
    t->LimitPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
    t->VolumeTotalOriginal = PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTotalOriginal"));
    t->TimeCondition = PyString_AsString(PyObject_GetAttrString(p, "TimeCondition"))[0];
    strcpy(t->GTDDate, PyString_AsString(PyObject_GetAttrString(p, "GTDDate")));
    t->VolumeCondition = PyString_AsString(PyObject_GetAttrString(p, "VolumeCondition"))[0];
    t->MinVolume = PyInt_AsLong(PyObject_GetAttrString(p, "MinVolume"));
    t->ContingentCondition = PyString_AsString(PyObject_GetAttrString(p, "ContingentCondition"))[0];
    t->StopPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "StopPrice"));
    t->ForceCloseReason = PyString_AsString(PyObject_GetAttrString(p, "ForceCloseReason"))[0];
    t->IsAutoSuspend = PyInt_AsLong(PyObject_GetAttrString(p, "IsAutoSuspend"));
    strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
    t->RequestID = PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
    t->UserForceClose = PyInt_AsLong(PyObject_GetAttrString(p, "UserForceClose"));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->ParkedOrderID, PyString_AsString(PyObject_GetAttrString(p, "ParkedOrderID")));
    t->UserType = PyString_AsString(PyObject_GetAttrString(p, "UserType"))[0];
    t->Status = PyString_AsString(PyObject_GetAttrString(p, "Status"))[0];
    t->ErrorID = PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
    strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
    t->IsSwapOrder = PyInt_AsLong(PyObject_GetAttrString(p, "IsSwapOrder"));

    return t;
};

PyObject *new_CThostFtdcParkedOrderActionField(CThostFtdcParkedOrderActionField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcParkedOrderActionField", "ssisiiisscdisssccis",
                               p->BrokerID, p->InvestorID, p->OrderActionRef, p->OrderRef, p->RequestID, p->FrontID,
                               p->SessionID, p->ExchangeID, p->OrderSysID, p->ActionFlag, p->LimitPrice,
                               p->VolumeChange, p->UserID, p->InstrumentID, p->ParkedOrderActionID, p->UserType,
                               p->Status, p->ErrorID, p->ErrorMsg);
}

CThostFtdcParkedOrderActionField *from_CThostFtdcParkedOrderActionField(PyObject * p) {
    CThostFtdcParkedOrderActionField *t = (CThostFtdcParkedOrderActionField *) calloc(1,
                                                                                      sizeof(CThostFtdcParkedOrderActionField));
    memset(t, 0, sizeof(CThostFtdcParkedOrderActionField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    t->OrderActionRef = PyInt_AsLong(PyObject_GetAttrString(p, "OrderActionRef"));
    strcpy(t->OrderRef, PyString_AsString(PyObject_GetAttrString(p, "OrderRef")));
    t->RequestID = PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
    t->FrontID = PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->OrderSysID, PyString_AsString(PyObject_GetAttrString(p, "OrderSysID")));
    t->ActionFlag = PyString_AsString(PyObject_GetAttrString(p, "ActionFlag"))[0];
    t->LimitPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
    t->VolumeChange = PyInt_AsLong(PyObject_GetAttrString(p, "VolumeChange"));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    strcpy(t->ParkedOrderActionID, PyString_AsString(PyObject_GetAttrString(p, "ParkedOrderActionID")));
    t->UserType = PyString_AsString(PyObject_GetAttrString(p, "UserType"))[0];
    t->Status = PyString_AsString(PyObject_GetAttrString(p, "Status"))[0];
    t->ErrorID = PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
    strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));

    return t;
};

PyObject *new_CThostFtdcQryParkedOrderField(CThostFtdcQryParkedOrderField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryParkedOrderField", "ssss",
                               p->BrokerID, p->InvestorID, p->InstrumentID, p->ExchangeID);
}

CThostFtdcQryParkedOrderField *from_CThostFtdcQryParkedOrderField(PyObject * p) {
    CThostFtdcQryParkedOrderField *t = (CThostFtdcQryParkedOrderField *) calloc(1,
                                                                                sizeof(CThostFtdcQryParkedOrderField));
    memset(t, 0, sizeof(CThostFtdcQryParkedOrderField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));

    return t;
};

PyObject *new_CThostFtdcQryParkedOrderActionField(CThostFtdcQryParkedOrderActionField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryParkedOrderActionField", "ssss",
                               p->BrokerID, p->InvestorID, p->InstrumentID, p->ExchangeID);
}

CThostFtdcQryParkedOrderActionField *from_CThostFtdcQryParkedOrderActionField(PyObject * p) {
    CThostFtdcQryParkedOrderActionField *t = (CThostFtdcQryParkedOrderActionField *) calloc(1,
                                                                                            sizeof(CThostFtdcQryParkedOrderActionField));
    memset(t, 0, sizeof(CThostFtdcQryParkedOrderActionField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));

    return t;
};

PyObject *new_CThostFtdcRemoveParkedOrderField(CThostFtdcRemoveParkedOrderField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcRemoveParkedOrderField", "sss",
                               p->BrokerID, p->InvestorID, p->ParkedOrderID);
}

CThostFtdcRemoveParkedOrderField *from_CThostFtdcRemoveParkedOrderField(PyObject * p) {
    CThostFtdcRemoveParkedOrderField *t = (CThostFtdcRemoveParkedOrderField *) calloc(1,
                                                                                      sizeof(CThostFtdcRemoveParkedOrderField));
    memset(t, 0, sizeof(CThostFtdcRemoveParkedOrderField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->ParkedOrderID, PyString_AsString(PyObject_GetAttrString(p, "ParkedOrderID")));

    return t;
};

PyObject *new_CThostFtdcRemoveParkedOrderActionField(CThostFtdcRemoveParkedOrderActionField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcRemoveParkedOrderActionField", "sss",
                               p->BrokerID, p->InvestorID, p->ParkedOrderActionID);
}

CThostFtdcRemoveParkedOrderActionField *from_CThostFtdcRemoveParkedOrderActionField(PyObject * p) {
    CThostFtdcRemoveParkedOrderActionField *t = (CThostFtdcRemoveParkedOrderActionField *) calloc(1,
                                                                                                  sizeof(CThostFtdcRemoveParkedOrderActionField));
    memset(t, 0, sizeof(CThostFtdcRemoveParkedOrderActionField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->ParkedOrderActionID, PyString_AsString(PyObject_GetAttrString(p, "ParkedOrderActionID")));

    return t;
};

PyObject *new_CThostFtdcInvestorWithdrawAlgorithmField(CThostFtdcInvestorWithdrawAlgorithmField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcInvestorWithdrawAlgorithmField", "scsdsd",
                               p->BrokerID, p->InvestorRange, p->InvestorID, p->UsingRatio, p->CurrencyID,
                               p->FundMortgageRatio);
}

CThostFtdcInvestorWithdrawAlgorithmField *from_CThostFtdcInvestorWithdrawAlgorithmField(PyObject * p) {
    CThostFtdcInvestorWithdrawAlgorithmField *t = (CThostFtdcInvestorWithdrawAlgorithmField *) calloc(1,
                                                                                                      sizeof(CThostFtdcInvestorWithdrawAlgorithmField));
    memset(t, 0, sizeof(CThostFtdcInvestorWithdrawAlgorithmField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    t->InvestorRange = PyString_AsString(PyObject_GetAttrString(p, "InvestorRange"))[0];
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    t->UsingRatio = PyFloat_AsDouble(PyObject_GetAttrString(p, "UsingRatio"));
    strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
    t->FundMortgageRatio = PyFloat_AsDouble(PyObject_GetAttrString(p, "FundMortgageRatio"));

    return t;
};

PyObject *new_CThostFtdcQryInvestorPositionCombineDetailField(CThostFtdcQryInvestorPositionCombineDetailField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryInvestorPositionCombineDetailField", "sss",
                               p->BrokerID, p->InvestorID, p->CombInstrumentID);
}

CThostFtdcQryInvestorPositionCombineDetailField *from_CThostFtdcQryInvestorPositionCombineDetailField(PyObject * p) {
    CThostFtdcQryInvestorPositionCombineDetailField *t = (CThostFtdcQryInvestorPositionCombineDetailField *) calloc(1,
                                                                                                                    sizeof(CThostFtdcQryInvestorPositionCombineDetailField));
    memset(t, 0, sizeof(CThostFtdcQryInvestorPositionCombineDetailField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->CombInstrumentID, PyString_AsString(PyObject_GetAttrString(p, "CombInstrumentID")));

    return t;
};

PyObject *new_CThostFtdcMarketDataAveragePriceField(CThostFtdcMarketDataAveragePriceField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcMarketDataAveragePriceField", "d",
                               p->AveragePrice);
}

CThostFtdcMarketDataAveragePriceField *from_CThostFtdcMarketDataAveragePriceField(PyObject * p) {
    CThostFtdcMarketDataAveragePriceField *t = (CThostFtdcMarketDataAveragePriceField *) calloc(1,
                                                                                                sizeof(CThostFtdcMarketDataAveragePriceField));
    memset(t, 0, sizeof(CThostFtdcMarketDataAveragePriceField));
    t->AveragePrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "AveragePrice"));

    return t;
};

PyObject *new_CThostFtdcVerifyInvestorPasswordField(CThostFtdcVerifyInvestorPasswordField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcVerifyInvestorPasswordField", "sss",
                               p->BrokerID, p->InvestorID, p->Password);
}

CThostFtdcVerifyInvestorPasswordField *from_CThostFtdcVerifyInvestorPasswordField(PyObject * p) {
    CThostFtdcVerifyInvestorPasswordField *t = (CThostFtdcVerifyInvestorPasswordField *) calloc(1,
                                                                                                sizeof(CThostFtdcVerifyInvestorPasswordField));
    memset(t, 0, sizeof(CThostFtdcVerifyInvestorPasswordField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));

    return t;
};

PyObject *new_CThostFtdcUserIPField(CThostFtdcUserIPField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcUserIPField", "sssss",
                               p->BrokerID, p->UserID, p->IPAddress, p->IPMask, p->MacAddress);
}

CThostFtdcUserIPField *from_CThostFtdcUserIPField(PyObject * p) {
    CThostFtdcUserIPField *t = (CThostFtdcUserIPField *) calloc(1, sizeof(CThostFtdcUserIPField));
    memset(t, 0, sizeof(CThostFtdcUserIPField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    strcpy(t->IPAddress, PyString_AsString(PyObject_GetAttrString(p, "IPAddress")));
    strcpy(t->IPMask, PyString_AsString(PyObject_GetAttrString(p, "IPMask")));
    strcpy(t->MacAddress, PyString_AsString(PyObject_GetAttrString(p, "MacAddress")));

    return t;
};

PyObject *new_CThostFtdcTradingNoticeInfoField(CThostFtdcTradingNoticeInfoField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcTradingNoticeInfoField", "sssshi",
                               p->BrokerID, p->InvestorID, p->SendTime, p->FieldContent, p->SequenceSeries,
                               p->SequenceNo);
}

CThostFtdcTradingNoticeInfoField *from_CThostFtdcTradingNoticeInfoField(PyObject * p) {
    CThostFtdcTradingNoticeInfoField *t = (CThostFtdcTradingNoticeInfoField *) calloc(1,
                                                                                      sizeof(CThostFtdcTradingNoticeInfoField));
    memset(t, 0, sizeof(CThostFtdcTradingNoticeInfoField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->SendTime, PyString_AsString(PyObject_GetAttrString(p, "SendTime")));
    strcpy(t->FieldContent, PyString_AsString(PyObject_GetAttrString(p, "FieldContent")));
    t->SequenceSeries = PyInt_AsLong(PyObject_GetAttrString(p, "SequenceSeries"));
    t->SequenceNo = PyInt_AsLong(PyObject_GetAttrString(p, "SequenceNo"));

    return t;
};

PyObject *new_CThostFtdcTradingNoticeField(CThostFtdcTradingNoticeField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcTradingNoticeField", "scshssis",
                               p->BrokerID, p->InvestorRange, p->InvestorID, p->SequenceSeries, p->UserID, p->SendTime,
                               p->SequenceNo, p->FieldContent);
}

CThostFtdcTradingNoticeField *from_CThostFtdcTradingNoticeField(PyObject * p) {
    CThostFtdcTradingNoticeField *t = (CThostFtdcTradingNoticeField *) calloc(1, sizeof(CThostFtdcTradingNoticeField));
    memset(t, 0, sizeof(CThostFtdcTradingNoticeField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    t->InvestorRange = PyString_AsString(PyObject_GetAttrString(p, "InvestorRange"))[0];
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    t->SequenceSeries = PyInt_AsLong(PyObject_GetAttrString(p, "SequenceSeries"));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    strcpy(t->SendTime, PyString_AsString(PyObject_GetAttrString(p, "SendTime")));
    t->SequenceNo = PyInt_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
    strcpy(t->FieldContent, PyString_AsString(PyObject_GetAttrString(p, "FieldContent")));

    return t;
};

PyObject *new_CThostFtdcQryTradingNoticeField(CThostFtdcQryTradingNoticeField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryTradingNoticeField", "ss",
                               p->BrokerID, p->InvestorID);
}

CThostFtdcQryTradingNoticeField *from_CThostFtdcQryTradingNoticeField(PyObject * p) {
    CThostFtdcQryTradingNoticeField *t = (CThostFtdcQryTradingNoticeField *) calloc(1,
                                                                                    sizeof(CThostFtdcQryTradingNoticeField));
    memset(t, 0, sizeof(CThostFtdcQryTradingNoticeField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));

    return t;
};

PyObject *new_CThostFtdcQryErrOrderField(CThostFtdcQryErrOrderField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryErrOrderField", "ss",
                               p->BrokerID, p->InvestorID);
}

CThostFtdcQryErrOrderField *from_CThostFtdcQryErrOrderField(PyObject * p) {
    CThostFtdcQryErrOrderField *t = (CThostFtdcQryErrOrderField *) calloc(1, sizeof(CThostFtdcQryErrOrderField));
    memset(t, 0, sizeof(CThostFtdcQryErrOrderField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));

    return t;
};

PyObject *new_CThostFtdcErrOrderField(CThostFtdcErrOrderField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcErrOrderField", "sssssccssdicscicdcisiiisi",
                               p->BrokerID, p->InvestorID, p->InstrumentID, p->OrderRef, p->UserID, p->OrderPriceType,
                               p->Direction, p->CombOffsetFlag, p->CombHedgeFlag, p->LimitPrice, p->VolumeTotalOriginal,
                               p->TimeCondition, p->GTDDate, p->VolumeCondition, p->MinVolume, p->ContingentCondition,
                               p->StopPrice, p->ForceCloseReason, p->IsAutoSuspend, p->BusinessUnit, p->RequestID,
                               p->UserForceClose, p->ErrorID, p->ErrorMsg, p->IsSwapOrder);
}

CThostFtdcErrOrderField *from_CThostFtdcErrOrderField(PyObject * p) {
    CThostFtdcErrOrderField *t = (CThostFtdcErrOrderField *) calloc(1, sizeof(CThostFtdcErrOrderField));
    memset(t, 0, sizeof(CThostFtdcErrOrderField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    strcpy(t->OrderRef, PyString_AsString(PyObject_GetAttrString(p, "OrderRef")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    t->OrderPriceType = PyString_AsString(PyObject_GetAttrString(p, "OrderPriceType"))[0];
    t->Direction = PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
    strcpy(t->CombOffsetFlag, PyString_AsString(PyObject_GetAttrString(p, "CombOffsetFlag")));
    strcpy(t->CombHedgeFlag, PyString_AsString(PyObject_GetAttrString(p, "CombHedgeFlag")));
    t->LimitPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
    t->VolumeTotalOriginal = PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTotalOriginal"));
    t->TimeCondition = PyString_AsString(PyObject_GetAttrString(p, "TimeCondition"))[0];
    strcpy(t->GTDDate, PyString_AsString(PyObject_GetAttrString(p, "GTDDate")));
    t->VolumeCondition = PyString_AsString(PyObject_GetAttrString(p, "VolumeCondition"))[0];
    t->MinVolume = PyInt_AsLong(PyObject_GetAttrString(p, "MinVolume"));
    t->ContingentCondition = PyString_AsString(PyObject_GetAttrString(p, "ContingentCondition"))[0];
    t->StopPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "StopPrice"));
    t->ForceCloseReason = PyString_AsString(PyObject_GetAttrString(p, "ForceCloseReason"))[0];
    t->IsAutoSuspend = PyInt_AsLong(PyObject_GetAttrString(p, "IsAutoSuspend"));
    strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
    t->RequestID = PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
    t->UserForceClose = PyInt_AsLong(PyObject_GetAttrString(p, "UserForceClose"));
    t->ErrorID = PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
    strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
    t->IsSwapOrder = PyInt_AsLong(PyObject_GetAttrString(p, "IsSwapOrder"));

    return t;
};

PyObject *new_CThostFtdcErrorConditionalOrderField(CThostFtdcErrorConditionalOrderField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcErrorConditionalOrderField",
                               "sssssccssdicscicdcisissssssicisisccciissssssssiiissisisiisi",
                               p->BrokerID, p->InvestorID, p->InstrumentID, p->OrderRef, p->UserID, p->OrderPriceType,
                               p->Direction, p->CombOffsetFlag, p->CombHedgeFlag, p->LimitPrice, p->VolumeTotalOriginal,
                               p->TimeCondition, p->GTDDate, p->VolumeCondition, p->MinVolume, p->ContingentCondition,
                               p->StopPrice, p->ForceCloseReason, p->IsAutoSuspend, p->BusinessUnit, p->RequestID,
                               p->OrderLocalID, p->ExchangeID, p->ParticipantID, p->ClientID, p->ExchangeInstID,
                               p->TraderID, p->InstallID, p->OrderSubmitStatus, p->NotifySequence, p->TradingDay,
                               p->SettlementID, p->OrderSysID, p->OrderSource, p->OrderStatus, p->OrderType,
                               p->VolumeTraded, p->VolumeTotal, p->InsertDate, p->InsertTime, p->ActiveTime,
                               p->SuspendTime, p->UpdateTime, p->CancelTime, p->ActiveTraderID, p->ClearingPartID,
                               p->SequenceNo, p->FrontID, p->SessionID, p->UserProductInfo, p->StatusMsg,
                               p->UserForceClose, p->ActiveUserID, p->BrokerOrderSeq, p->RelativeOrderSysID,
                               p->ZCETotalTradedVolume, p->ErrorID, p->ErrorMsg, p->IsSwapOrder);
}

CThostFtdcErrorConditionalOrderField *from_CThostFtdcErrorConditionalOrderField(PyObject * p) {
    CThostFtdcErrorConditionalOrderField *t = (CThostFtdcErrorConditionalOrderField *) calloc(1,
                                                                                              sizeof(CThostFtdcErrorConditionalOrderField));
    memset(t, 0, sizeof(CThostFtdcErrorConditionalOrderField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    strcpy(t->OrderRef, PyString_AsString(PyObject_GetAttrString(p, "OrderRef")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    t->OrderPriceType = PyString_AsString(PyObject_GetAttrString(p, "OrderPriceType"))[0];
    t->Direction = PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
    strcpy(t->CombOffsetFlag, PyString_AsString(PyObject_GetAttrString(p, "CombOffsetFlag")));
    strcpy(t->CombHedgeFlag, PyString_AsString(PyObject_GetAttrString(p, "CombHedgeFlag")));
    t->LimitPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
    t->VolumeTotalOriginal = PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTotalOriginal"));
    t->TimeCondition = PyString_AsString(PyObject_GetAttrString(p, "TimeCondition"))[0];
    strcpy(t->GTDDate, PyString_AsString(PyObject_GetAttrString(p, "GTDDate")));
    t->VolumeCondition = PyString_AsString(PyObject_GetAttrString(p, "VolumeCondition"))[0];
    t->MinVolume = PyInt_AsLong(PyObject_GetAttrString(p, "MinVolume"));
    t->ContingentCondition = PyString_AsString(PyObject_GetAttrString(p, "ContingentCondition"))[0];
    t->StopPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "StopPrice"));
    t->ForceCloseReason = PyString_AsString(PyObject_GetAttrString(p, "ForceCloseReason"))[0];
    t->IsAutoSuspend = PyInt_AsLong(PyObject_GetAttrString(p, "IsAutoSuspend"));
    strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
    t->RequestID = PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
    strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
    strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
    strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
    strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    t->OrderSubmitStatus = PyString_AsString(PyObject_GetAttrString(p, "OrderSubmitStatus"))[0];
    t->NotifySequence = PyInt_AsLong(PyObject_GetAttrString(p, "NotifySequence"));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->SettlementID = PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
    strcpy(t->OrderSysID, PyString_AsString(PyObject_GetAttrString(p, "OrderSysID")));
    t->OrderSource = PyString_AsString(PyObject_GetAttrString(p, "OrderSource"))[0];
    t->OrderStatus = PyString_AsString(PyObject_GetAttrString(p, "OrderStatus"))[0];
    t->OrderType = PyString_AsString(PyObject_GetAttrString(p, "OrderType"))[0];
    t->VolumeTraded = PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTraded"));
    t->VolumeTotal = PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTotal"));
    strcpy(t->InsertDate, PyString_AsString(PyObject_GetAttrString(p, "InsertDate")));
    strcpy(t->InsertTime, PyString_AsString(PyObject_GetAttrString(p, "InsertTime")));
    strcpy(t->ActiveTime, PyString_AsString(PyObject_GetAttrString(p, "ActiveTime")));
    strcpy(t->SuspendTime, PyString_AsString(PyObject_GetAttrString(p, "SuspendTime")));
    strcpy(t->UpdateTime, PyString_AsString(PyObject_GetAttrString(p, "UpdateTime")));
    strcpy(t->CancelTime, PyString_AsString(PyObject_GetAttrString(p, "CancelTime")));
    strcpy(t->ActiveTraderID, PyString_AsString(PyObject_GetAttrString(p, "ActiveTraderID")));
    strcpy(t->ClearingPartID, PyString_AsString(PyObject_GetAttrString(p, "ClearingPartID")));
    t->SequenceNo = PyInt_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
    t->FrontID = PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    strcpy(t->UserProductInfo, PyString_AsString(PyObject_GetAttrString(p, "UserProductInfo")));
    strcpy(t->StatusMsg, PyString_AsString(PyObject_GetAttrString(p, "StatusMsg")));
    t->UserForceClose = PyInt_AsLong(PyObject_GetAttrString(p, "UserForceClose"));
    strcpy(t->ActiveUserID, PyString_AsString(PyObject_GetAttrString(p, "ActiveUserID")));
    t->BrokerOrderSeq = PyInt_AsLong(PyObject_GetAttrString(p, "BrokerOrderSeq"));
    strcpy(t->RelativeOrderSysID, PyString_AsString(PyObject_GetAttrString(p, "RelativeOrderSysID")));
    t->ZCETotalTradedVolume = PyInt_AsLong(PyObject_GetAttrString(p, "ZCETotalTradedVolume"));
    t->ErrorID = PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
    strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
    t->IsSwapOrder = PyInt_AsLong(PyObject_GetAttrString(p, "IsSwapOrder"));

    return t;
};

PyObject *new_CThostFtdcQryErrOrderActionField(CThostFtdcQryErrOrderActionField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryErrOrderActionField", "ss",
                               p->BrokerID, p->InvestorID);
}

CThostFtdcQryErrOrderActionField *from_CThostFtdcQryErrOrderActionField(PyObject * p) {
    CThostFtdcQryErrOrderActionField *t = (CThostFtdcQryErrOrderActionField *) calloc(1,
                                                                                      sizeof(CThostFtdcQryErrOrderActionField));
    memset(t, 0, sizeof(CThostFtdcQryErrOrderActionField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));

    return t;
};

PyObject *new_CThostFtdcErrOrderActionField(CThostFtdcErrOrderActionField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcErrOrderActionField", "ssisiiisscdisssissssscsssis",
                               p->BrokerID, p->InvestorID, p->OrderActionRef, p->OrderRef, p->RequestID, p->FrontID,
                               p->SessionID, p->ExchangeID, p->OrderSysID, p->ActionFlag, p->LimitPrice,
                               p->VolumeChange, p->ActionDate, p->ActionTime, p->TraderID, p->InstallID,
                               p->OrderLocalID, p->ActionLocalID, p->ParticipantID, p->ClientID, p->BusinessUnit,
                               p->OrderActionStatus, p->UserID, p->StatusMsg, p->InstrumentID, p->ErrorID, p->ErrorMsg);
}

CThostFtdcErrOrderActionField *from_CThostFtdcErrOrderActionField(PyObject * p) {
    CThostFtdcErrOrderActionField *t = (CThostFtdcErrOrderActionField *) calloc(1,
                                                                                sizeof(CThostFtdcErrOrderActionField));
    memset(t, 0, sizeof(CThostFtdcErrOrderActionField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    t->OrderActionRef = PyInt_AsLong(PyObject_GetAttrString(p, "OrderActionRef"));
    strcpy(t->OrderRef, PyString_AsString(PyObject_GetAttrString(p, "OrderRef")));
    t->RequestID = PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
    t->FrontID = PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->OrderSysID, PyString_AsString(PyObject_GetAttrString(p, "OrderSysID")));
    t->ActionFlag = PyString_AsString(PyObject_GetAttrString(p, "ActionFlag"))[0];
    t->LimitPrice = PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
    t->VolumeChange = PyInt_AsLong(PyObject_GetAttrString(p, "VolumeChange"));
    strcpy(t->ActionDate, PyString_AsString(PyObject_GetAttrString(p, "ActionDate")));
    strcpy(t->ActionTime, PyString_AsString(PyObject_GetAttrString(p, "ActionTime")));
    strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
    strcpy(t->ActionLocalID, PyString_AsString(PyObject_GetAttrString(p, "ActionLocalID")));
    strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
    strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
    strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
    t->OrderActionStatus = PyString_AsString(PyObject_GetAttrString(p, "OrderActionStatus"))[0];
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    strcpy(t->StatusMsg, PyString_AsString(PyObject_GetAttrString(p, "StatusMsg")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    t->ErrorID = PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
    strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));

    return t;
};

PyObject *new_CThostFtdcQryExchangeSequenceField(CThostFtdcQryExchangeSequenceField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryExchangeSequenceField", "s",
                               p->ExchangeID);
}

CThostFtdcQryExchangeSequenceField *from_CThostFtdcQryExchangeSequenceField(PyObject * p) {
    CThostFtdcQryExchangeSequenceField *t = (CThostFtdcQryExchangeSequenceField *) calloc(1,
                                                                                          sizeof(CThostFtdcQryExchangeSequenceField));
    memset(t, 0, sizeof(CThostFtdcQryExchangeSequenceField));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));

    return t;
};

PyObject *new_CThostFtdcExchangeSequenceField(CThostFtdcExchangeSequenceField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcExchangeSequenceField", "sic",
                               p->ExchangeID, p->SequenceNo, p->MarketStatus);
}

CThostFtdcExchangeSequenceField *from_CThostFtdcExchangeSequenceField(PyObject * p) {
    CThostFtdcExchangeSequenceField *t = (CThostFtdcExchangeSequenceField *) calloc(1,
                                                                                    sizeof(CThostFtdcExchangeSequenceField));
    memset(t, 0, sizeof(CThostFtdcExchangeSequenceField));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    t->SequenceNo = PyInt_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
    t->MarketStatus = PyString_AsString(PyObject_GetAttrString(p, "MarketStatus"))[0];

    return t;
};

PyObject *new_CThostFtdcQueryMaxOrderVolumeWithPriceField(CThostFtdcQueryMaxOrderVolumeWithPriceField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQueryMaxOrderVolumeWithPriceField", "ssscccid",
                               p->BrokerID, p->InvestorID, p->InstrumentID, p->Direction, p->OffsetFlag, p->HedgeFlag,
                               p->MaxVolume, p->Price);
}

CThostFtdcQueryMaxOrderVolumeWithPriceField *from_CThostFtdcQueryMaxOrderVolumeWithPriceField(PyObject * p) {
    CThostFtdcQueryMaxOrderVolumeWithPriceField *t = (CThostFtdcQueryMaxOrderVolumeWithPriceField *) calloc(1,
                                                                                                            sizeof(CThostFtdcQueryMaxOrderVolumeWithPriceField));
    memset(t, 0, sizeof(CThostFtdcQueryMaxOrderVolumeWithPriceField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    t->Direction = PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
    t->OffsetFlag = PyString_AsString(PyObject_GetAttrString(p, "OffsetFlag"))[0];
    t->HedgeFlag = PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
    t->MaxVolume = PyInt_AsLong(PyObject_GetAttrString(p, "MaxVolume"));
    t->Price = PyFloat_AsDouble(PyObject_GetAttrString(p, "Price"));

    return t;
};

PyObject *new_CThostFtdcQryBrokerTradingParamsField(CThostFtdcQryBrokerTradingParamsField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryBrokerTradingParamsField", "sss",
                               p->BrokerID, p->InvestorID, p->CurrencyID);
}

CThostFtdcQryBrokerTradingParamsField *from_CThostFtdcQryBrokerTradingParamsField(PyObject * p) {
    CThostFtdcQryBrokerTradingParamsField *t = (CThostFtdcQryBrokerTradingParamsField *) calloc(1,
                                                                                                sizeof(CThostFtdcQryBrokerTradingParamsField));
    memset(t, 0, sizeof(CThostFtdcQryBrokerTradingParamsField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));

    return t;
};

PyObject *new_CThostFtdcBrokerTradingParamsField(CThostFtdcBrokerTradingParamsField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcBrokerTradingParamsField", "sscccsc",
                               p->BrokerID, p->InvestorID, p->MarginPriceType, p->Algorithm, p->AvailIncludeCloseProfit,
                               p->CurrencyID, p->OptionRoyaltyPriceType);
}

CThostFtdcBrokerTradingParamsField *from_CThostFtdcBrokerTradingParamsField(PyObject * p) {
    CThostFtdcBrokerTradingParamsField *t = (CThostFtdcBrokerTradingParamsField *) calloc(1,
                                                                                          sizeof(CThostFtdcBrokerTradingParamsField));
    memset(t, 0, sizeof(CThostFtdcBrokerTradingParamsField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    t->MarginPriceType = PyString_AsString(PyObject_GetAttrString(p, "MarginPriceType"))[0];
    t->Algorithm = PyString_AsString(PyObject_GetAttrString(p, "Algorithm"))[0];
    t->AvailIncludeCloseProfit = PyString_AsString(PyObject_GetAttrString(p, "AvailIncludeCloseProfit"))[0];
    strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
    t->OptionRoyaltyPriceType = PyString_AsString(PyObject_GetAttrString(p, "OptionRoyaltyPriceType"))[0];

    return t;
};

PyObject *new_CThostFtdcQryBrokerTradingAlgosField(CThostFtdcQryBrokerTradingAlgosField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryBrokerTradingAlgosField", "sss",
                               p->BrokerID, p->ExchangeID, p->InstrumentID);
}

CThostFtdcQryBrokerTradingAlgosField *from_CThostFtdcQryBrokerTradingAlgosField(PyObject * p) {
    CThostFtdcQryBrokerTradingAlgosField *t = (CThostFtdcQryBrokerTradingAlgosField *) calloc(1,
                                                                                              sizeof(CThostFtdcQryBrokerTradingAlgosField));
    memset(t, 0, sizeof(CThostFtdcQryBrokerTradingAlgosField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));

    return t;
};

PyObject *new_CThostFtdcBrokerTradingAlgosField(CThostFtdcBrokerTradingAlgosField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcBrokerTradingAlgosField", "sssccc",
                               p->BrokerID, p->ExchangeID, p->InstrumentID, p->HandlePositionAlgoID,
                               p->FindMarginRateAlgoID, p->HandleTradingAccountAlgoID);
}

CThostFtdcBrokerTradingAlgosField *from_CThostFtdcBrokerTradingAlgosField(PyObject * p) {
    CThostFtdcBrokerTradingAlgosField *t = (CThostFtdcBrokerTradingAlgosField *) calloc(1,
                                                                                        sizeof(CThostFtdcBrokerTradingAlgosField));
    memset(t, 0, sizeof(CThostFtdcBrokerTradingAlgosField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    t->HandlePositionAlgoID = PyString_AsString(PyObject_GetAttrString(p, "HandlePositionAlgoID"))[0];
    t->FindMarginRateAlgoID = PyString_AsString(PyObject_GetAttrString(p, "FindMarginRateAlgoID"))[0];
    t->HandleTradingAccountAlgoID = PyString_AsString(PyObject_GetAttrString(p, "HandleTradingAccountAlgoID"))[0];

    return t;
};

PyObject *new_CThostFtdcQueryBrokerDepositField(CThostFtdcQueryBrokerDepositField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQueryBrokerDepositField", "ss",
                               p->BrokerID, p->ExchangeID);
}

CThostFtdcQueryBrokerDepositField *from_CThostFtdcQueryBrokerDepositField(PyObject * p) {
    CThostFtdcQueryBrokerDepositField *t = (CThostFtdcQueryBrokerDepositField *) calloc(1,
                                                                                        sizeof(CThostFtdcQueryBrokerDepositField));
    memset(t, 0, sizeof(CThostFtdcQueryBrokerDepositField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));

    return t;
};

PyObject *new_CThostFtdcBrokerDepositField(CThostFtdcBrokerDepositField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcBrokerDepositField", "ssssddddddddd",
                               p->TradingDay, p->BrokerID, p->ParticipantID, p->ExchangeID, p->PreBalance,
                               p->CurrMargin, p->CloseProfit, p->Balance, p->Deposit, p->Withdraw, p->Available,
                               p->Reserve, p->FrozenMargin);
}

CThostFtdcBrokerDepositField *from_CThostFtdcBrokerDepositField(PyObject * p) {
    CThostFtdcBrokerDepositField *t = (CThostFtdcBrokerDepositField *) calloc(1, sizeof(CThostFtdcBrokerDepositField));
    memset(t, 0, sizeof(CThostFtdcBrokerDepositField));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    t->PreBalance = PyFloat_AsDouble(PyObject_GetAttrString(p, "PreBalance"));
    t->CurrMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "CurrMargin"));
    t->CloseProfit = PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfit"));
    t->Balance = PyFloat_AsDouble(PyObject_GetAttrString(p, "Balance"));
    t->Deposit = PyFloat_AsDouble(PyObject_GetAttrString(p, "Deposit"));
    t->Withdraw = PyFloat_AsDouble(PyObject_GetAttrString(p, "Withdraw"));
    t->Available = PyFloat_AsDouble(PyObject_GetAttrString(p, "Available"));
    t->Reserve = PyFloat_AsDouble(PyObject_GetAttrString(p, "Reserve"));
    t->FrozenMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenMargin"));

    return t;
};

PyObject *new_CThostFtdcQryCFMMCBrokerKeyField(CThostFtdcQryCFMMCBrokerKeyField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryCFMMCBrokerKeyField", "s",
                               p->BrokerID);
}

CThostFtdcQryCFMMCBrokerKeyField *from_CThostFtdcQryCFMMCBrokerKeyField(PyObject * p) {
    CThostFtdcQryCFMMCBrokerKeyField *t = (CThostFtdcQryCFMMCBrokerKeyField *) calloc(1,
                                                                                      sizeof(CThostFtdcQryCFMMCBrokerKeyField));
    memset(t, 0, sizeof(CThostFtdcQryCFMMCBrokerKeyField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

    return t;
};

PyObject *new_CThostFtdcCFMMCBrokerKeyField(CThostFtdcCFMMCBrokerKeyField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcCFMMCBrokerKeyField", "ssssisc",
                               p->BrokerID, p->ParticipantID, p->CreateDate, p->CreateTime, p->KeyID, p->CurrentKey,
                               p->KeyKind);
}

CThostFtdcCFMMCBrokerKeyField *from_CThostFtdcCFMMCBrokerKeyField(PyObject * p) {
    CThostFtdcCFMMCBrokerKeyField *t = (CThostFtdcCFMMCBrokerKeyField *) calloc(1,
                                                                                sizeof(CThostFtdcCFMMCBrokerKeyField));
    memset(t, 0, sizeof(CThostFtdcCFMMCBrokerKeyField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
    strcpy(t->CreateDate, PyString_AsString(PyObject_GetAttrString(p, "CreateDate")));
    strcpy(t->CreateTime, PyString_AsString(PyObject_GetAttrString(p, "CreateTime")));
    t->KeyID = PyInt_AsLong(PyObject_GetAttrString(p, "KeyID"));
    strcpy(t->CurrentKey, PyString_AsString(PyObject_GetAttrString(p, "CurrentKey")));
    t->KeyKind = PyString_AsString(PyObject_GetAttrString(p, "KeyKind"))[0];

    return t;
};

PyObject *new_CThostFtdcCFMMCTradingAccountKeyField(CThostFtdcCFMMCTradingAccountKeyField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcCFMMCTradingAccountKeyField", "sssis",
                               p->BrokerID, p->ParticipantID, p->AccountID, p->KeyID, p->CurrentKey);
}

CThostFtdcCFMMCTradingAccountKeyField *from_CThostFtdcCFMMCTradingAccountKeyField(PyObject * p) {
    CThostFtdcCFMMCTradingAccountKeyField *t = (CThostFtdcCFMMCTradingAccountKeyField *) calloc(1,
                                                                                                sizeof(CThostFtdcCFMMCTradingAccountKeyField));
    memset(t, 0, sizeof(CThostFtdcCFMMCTradingAccountKeyField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
    strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
    t->KeyID = PyInt_AsLong(PyObject_GetAttrString(p, "KeyID"));
    strcpy(t->CurrentKey, PyString_AsString(PyObject_GetAttrString(p, "CurrentKey")));

    return t;
};

PyObject *new_CThostFtdcQryCFMMCTradingAccountKeyField(CThostFtdcQryCFMMCTradingAccountKeyField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryCFMMCTradingAccountKeyField", "ss",
                               p->BrokerID, p->InvestorID);
}

CThostFtdcQryCFMMCTradingAccountKeyField *from_CThostFtdcQryCFMMCTradingAccountKeyField(PyObject * p) {
    CThostFtdcQryCFMMCTradingAccountKeyField *t = (CThostFtdcQryCFMMCTradingAccountKeyField *) calloc(1,
                                                                                                      sizeof(CThostFtdcQryCFMMCTradingAccountKeyField));
    memset(t, 0, sizeof(CThostFtdcQryCFMMCTradingAccountKeyField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));

    return t;
};

PyObject *new_CThostFtdcBrokerUserOTPParamField(CThostFtdcBrokerUserOTPParamField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcBrokerUserOTPParamField", "sssssiic",
                               p->BrokerID, p->UserID, p->OTPVendorsID, p->SerialNumber, p->AuthKey, p->LastDrift,
                               p->LastSuccess, p->OTPType);
}

CThostFtdcBrokerUserOTPParamField *from_CThostFtdcBrokerUserOTPParamField(PyObject * p) {
    CThostFtdcBrokerUserOTPParamField *t = (CThostFtdcBrokerUserOTPParamField *) calloc(1,
                                                                                        sizeof(CThostFtdcBrokerUserOTPParamField));
    memset(t, 0, sizeof(CThostFtdcBrokerUserOTPParamField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    strcpy(t->OTPVendorsID, PyString_AsString(PyObject_GetAttrString(p, "OTPVendorsID")));
    strcpy(t->SerialNumber, PyString_AsString(PyObject_GetAttrString(p, "SerialNumber")));
    strcpy(t->AuthKey, PyString_AsString(PyObject_GetAttrString(p, "AuthKey")));
    t->LastDrift = PyInt_AsLong(PyObject_GetAttrString(p, "LastDrift"));
    t->LastSuccess = PyInt_AsLong(PyObject_GetAttrString(p, "LastSuccess"));
    t->OTPType = PyString_AsString(PyObject_GetAttrString(p, "OTPType"))[0];

    return t;
};

PyObject *new_CThostFtdcManualSyncBrokerUserOTPField(CThostFtdcManualSyncBrokerUserOTPField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcManualSyncBrokerUserOTPField", "sscss",
                               p->BrokerID, p->UserID, p->OTPType, p->FirstOTP, p->SecondOTP);
}

CThostFtdcManualSyncBrokerUserOTPField *from_CThostFtdcManualSyncBrokerUserOTPField(PyObject * p) {
    CThostFtdcManualSyncBrokerUserOTPField *t = (CThostFtdcManualSyncBrokerUserOTPField *) calloc(1,
                                                                                                  sizeof(CThostFtdcManualSyncBrokerUserOTPField));
    memset(t, 0, sizeof(CThostFtdcManualSyncBrokerUserOTPField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    t->OTPType = PyString_AsString(PyObject_GetAttrString(p, "OTPType"))[0];
    strcpy(t->FirstOTP, PyString_AsString(PyObject_GetAttrString(p, "FirstOTP")));
    strcpy(t->SecondOTP, PyString_AsString(PyObject_GetAttrString(p, "SecondOTP")));

    return t;
};

PyObject *new_CThostFtdcCommRateModelField(CThostFtdcCommRateModelField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcCommRateModelField", "sss",
                               p->BrokerID, p->CommModelID, p->CommModelName);
}

CThostFtdcCommRateModelField *from_CThostFtdcCommRateModelField(PyObject * p) {
    CThostFtdcCommRateModelField *t = (CThostFtdcCommRateModelField *) calloc(1, sizeof(CThostFtdcCommRateModelField));
    memset(t, 0, sizeof(CThostFtdcCommRateModelField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->CommModelID, PyString_AsString(PyObject_GetAttrString(p, "CommModelID")));
    strcpy(t->CommModelName, PyString_AsString(PyObject_GetAttrString(p, "CommModelName")));

    return t;
};

PyObject *new_CThostFtdcQryCommRateModelField(CThostFtdcQryCommRateModelField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryCommRateModelField", "ss",
                               p->BrokerID, p->CommModelID);
}

CThostFtdcQryCommRateModelField *from_CThostFtdcQryCommRateModelField(PyObject * p) {
    CThostFtdcQryCommRateModelField *t = (CThostFtdcQryCommRateModelField *) calloc(1,
                                                                                    sizeof(CThostFtdcQryCommRateModelField));
    memset(t, 0, sizeof(CThostFtdcQryCommRateModelField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->CommModelID, PyString_AsString(PyObject_GetAttrString(p, "CommModelID")));

    return t;
};

PyObject *new_CThostFtdcMarginModelField(CThostFtdcMarginModelField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcMarginModelField", "sss",
                               p->BrokerID, p->MarginModelID, p->MarginModelName);
}

CThostFtdcMarginModelField *from_CThostFtdcMarginModelField(PyObject * p) {
    CThostFtdcMarginModelField *t = (CThostFtdcMarginModelField *) calloc(1, sizeof(CThostFtdcMarginModelField));
    memset(t, 0, sizeof(CThostFtdcMarginModelField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->MarginModelID, PyString_AsString(PyObject_GetAttrString(p, "MarginModelID")));
    strcpy(t->MarginModelName, PyString_AsString(PyObject_GetAttrString(p, "MarginModelName")));

    return t;
};

PyObject *new_CThostFtdcQryMarginModelField(CThostFtdcQryMarginModelField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryMarginModelField", "ss",
                               p->BrokerID, p->MarginModelID);
}

CThostFtdcQryMarginModelField *from_CThostFtdcQryMarginModelField(PyObject * p) {
    CThostFtdcQryMarginModelField *t = (CThostFtdcQryMarginModelField *) calloc(1,
                                                                                sizeof(CThostFtdcQryMarginModelField));
    memset(t, 0, sizeof(CThostFtdcQryMarginModelField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->MarginModelID, PyString_AsString(PyObject_GetAttrString(p, "MarginModelID")));

    return t;
};

PyObject *new_CThostFtdcEWarrantOffsetField(CThostFtdcEWarrantOffsetField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcEWarrantOffsetField", "ssssscci",
                               p->TradingDay, p->BrokerID, p->InvestorID, p->ExchangeID, p->InstrumentID, p->Direction,
                               p->HedgeFlag, p->Volume);
}

CThostFtdcEWarrantOffsetField *from_CThostFtdcEWarrantOffsetField(PyObject * p) {
    CThostFtdcEWarrantOffsetField *t = (CThostFtdcEWarrantOffsetField *) calloc(1,
                                                                                sizeof(CThostFtdcEWarrantOffsetField));
    memset(t, 0, sizeof(CThostFtdcEWarrantOffsetField));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
    t->Direction = PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
    t->HedgeFlag = PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
    t->Volume = PyInt_AsLong(PyObject_GetAttrString(p, "Volume"));

    return t;
};

PyObject *new_CThostFtdcQryEWarrantOffsetField(CThostFtdcQryEWarrantOffsetField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryEWarrantOffsetField", "ssss",
                               p->BrokerID, p->InvestorID, p->ExchangeID, p->InstrumentID);
}

CThostFtdcQryEWarrantOffsetField *from_CThostFtdcQryEWarrantOffsetField(PyObject * p) {
    CThostFtdcQryEWarrantOffsetField *t = (CThostFtdcQryEWarrantOffsetField *) calloc(1,
                                                                                      sizeof(CThostFtdcQryEWarrantOffsetField));
    memset(t, 0, sizeof(CThostFtdcQryEWarrantOffsetField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));

    return t;
};

PyObject *new_CThostFtdcQryInvestorProductGroupMarginField(CThostFtdcQryInvestorProductGroupMarginField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryInvestorProductGroupMarginField", "sssc",
                               p->BrokerID, p->InvestorID, p->ProductGroupID, p->HedgeFlag);
}

CThostFtdcQryInvestorProductGroupMarginField *from_CThostFtdcQryInvestorProductGroupMarginField(PyObject * p) {
    CThostFtdcQryInvestorProductGroupMarginField *t = (CThostFtdcQryInvestorProductGroupMarginField *) calloc(1,
                                                                                                              sizeof(CThostFtdcQryInvestorProductGroupMarginField));
    memset(t, 0, sizeof(CThostFtdcQryInvestorProductGroupMarginField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->ProductGroupID, PyString_AsString(PyObject_GetAttrString(p, "ProductGroupID")));
    t->HedgeFlag = PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];

    return t;
};

PyObject *new_CThostFtdcInvestorProductGroupMarginField(CThostFtdcInvestorProductGroupMarginField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcInvestorProductGroupMarginField", "ssssidddddddddddddddddddddc",
                               p->ProductGroupID, p->BrokerID, p->InvestorID, p->TradingDay, p->SettlementID,
                               p->FrozenMargin, p->LongFrozenMargin, p->ShortFrozenMargin, p->UseMargin,
                               p->LongUseMargin, p->ShortUseMargin, p->ExchMargin, p->LongExchMargin,
                               p->ShortExchMargin, p->CloseProfit, p->FrozenCommission, p->Commission, p->FrozenCash,
                               p->CashIn, p->PositionProfit, p->OffsetAmount, p->LongOffsetAmount, p->ShortOffsetAmount,
                               p->ExchOffsetAmount, p->LongExchOffsetAmount, p->ShortExchOffsetAmount, p->HedgeFlag);
}

CThostFtdcInvestorProductGroupMarginField *from_CThostFtdcInvestorProductGroupMarginField(PyObject * p) {
    CThostFtdcInvestorProductGroupMarginField *t = (CThostFtdcInvestorProductGroupMarginField *) calloc(1,
                                                                                                        sizeof(CThostFtdcInvestorProductGroupMarginField));
    memset(t, 0, sizeof(CThostFtdcInvestorProductGroupMarginField));
    strcpy(t->ProductGroupID, PyString_AsString(PyObject_GetAttrString(p, "ProductGroupID")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->SettlementID = PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
    t->FrozenMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenMargin"));
    t->LongFrozenMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "LongFrozenMargin"));
    t->ShortFrozenMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortFrozenMargin"));
    t->UseMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "UseMargin"));
    t->LongUseMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "LongUseMargin"));
    t->ShortUseMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortUseMargin"));
    t->ExchMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchMargin"));
    t->LongExchMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "LongExchMargin"));
    t->ShortExchMargin = PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortExchMargin"));
    t->CloseProfit = PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfit"));
    t->FrozenCommission = PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenCommission"));
    t->Commission = PyFloat_AsDouble(PyObject_GetAttrString(p, "Commission"));
    t->FrozenCash = PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenCash"));
    t->CashIn = PyFloat_AsDouble(PyObject_GetAttrString(p, "CashIn"));
    t->PositionProfit = PyFloat_AsDouble(PyObject_GetAttrString(p, "PositionProfit"));
    t->OffsetAmount = PyFloat_AsDouble(PyObject_GetAttrString(p, "OffsetAmount"));
    t->LongOffsetAmount = PyFloat_AsDouble(PyObject_GetAttrString(p, "LongOffsetAmount"));
    t->ShortOffsetAmount = PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortOffsetAmount"));
    t->ExchOffsetAmount = PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchOffsetAmount"));
    t->LongExchOffsetAmount = PyFloat_AsDouble(PyObject_GetAttrString(p, "LongExchOffsetAmount"));
    t->ShortExchOffsetAmount = PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortExchOffsetAmount"));
    t->HedgeFlag = PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];

    return t;
};

PyObject *new_CThostFtdcQueryCFMMCTradingAccountTokenField(CThostFtdcQueryCFMMCTradingAccountTokenField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQueryCFMMCTradingAccountTokenField", "ss",
                               p->BrokerID, p->InvestorID);
}

CThostFtdcQueryCFMMCTradingAccountTokenField *from_CThostFtdcQueryCFMMCTradingAccountTokenField(PyObject * p) {
    CThostFtdcQueryCFMMCTradingAccountTokenField *t = (CThostFtdcQueryCFMMCTradingAccountTokenField *) calloc(1,
                                                                                                              sizeof(CThostFtdcQueryCFMMCTradingAccountTokenField));
    memset(t, 0, sizeof(CThostFtdcQueryCFMMCTradingAccountTokenField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));

    return t;
};

PyObject *new_CThostFtdcCFMMCTradingAccountTokenField(CThostFtdcCFMMCTradingAccountTokenField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcCFMMCTradingAccountTokenField", "sssis",
                               p->BrokerID, p->ParticipantID, p->AccountID, p->KeyID, p->Token);
}

CThostFtdcCFMMCTradingAccountTokenField *from_CThostFtdcCFMMCTradingAccountTokenField(PyObject * p) {
    CThostFtdcCFMMCTradingAccountTokenField *t = (CThostFtdcCFMMCTradingAccountTokenField *) calloc(1,
                                                                                                    sizeof(CThostFtdcCFMMCTradingAccountTokenField));
    memset(t, 0, sizeof(CThostFtdcCFMMCTradingAccountTokenField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
    strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
    t->KeyID = PyInt_AsLong(PyObject_GetAttrString(p, "KeyID"));
    strcpy(t->Token, PyString_AsString(PyObject_GetAttrString(p, "Token")));

    return t;
};

PyObject *new_CThostFtdcQryProductGroupField(CThostFtdcQryProductGroupField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryProductGroupField", "ss",
                               p->ProductID, p->ExchangeID);
}

CThostFtdcQryProductGroupField *from_CThostFtdcQryProductGroupField(PyObject * p) {
    CThostFtdcQryProductGroupField *t = (CThostFtdcQryProductGroupField *) calloc(1,
                                                                                  sizeof(CThostFtdcQryProductGroupField));
    memset(t, 0, sizeof(CThostFtdcQryProductGroupField));
    strcpy(t->ProductID, PyString_AsString(PyObject_GetAttrString(p, "ProductID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));

    return t;
};

PyObject *new_CThostFtdcProductGroupField(CThostFtdcProductGroupField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcProductGroupField", "sss",
                               p->ProductID, p->ExchangeID, p->ProductGroupID);
}

CThostFtdcProductGroupField *from_CThostFtdcProductGroupField(PyObject * p) {
    CThostFtdcProductGroupField *t = (CThostFtdcProductGroupField *) calloc(1, sizeof(CThostFtdcProductGroupField));
    memset(t, 0, sizeof(CThostFtdcProductGroupField));
    strcpy(t->ProductID, PyString_AsString(PyObject_GetAttrString(p, "ProductID")));
    strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
    strcpy(t->ProductGroupID, PyString_AsString(PyObject_GetAttrString(p, "ProductGroupID")));

    return t;
};

PyObject *new_CThostFtdcReqOpenAccountField(CThostFtdcReqOpenAccountField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcReqOpenAccountField", "sssssssssiciscscscsssssscssssicscscscssccsis",
                               p->TradeCode, p->BankID, p->BankBranchID, p->BrokerID, p->BrokerBranchID, p->TradeDate,
                               p->TradeTime, p->BankSerial, p->TradingDay, p->PlateSerial, p->LastFragment,
                               p->SessionID, p->CustomerName, p->IdCardType, p->IdentifiedCardNo, p->Gender,
                               p->CountryCode, p->CustType, p->Address, p->ZipCode, p->Telephone, p->MobilePhone,
                               p->Fax, p->EMail, p->MoneyAccountStatus, p->BankAccount, p->BankPassWord, p->AccountID,
                               p->Password, p->InstallID, p->VerifyCertNoFlag, p->CurrencyID, p->CashExchangeCode,
                               p->Digest, p->BankAccType, p->DeviceID, p->BankSecuAccType, p->BrokerIDByBank,
                               p->BankSecuAcc, p->BankPwdFlag, p->SecuPwdFlag, p->OperNo, p->TID, p->UserID);
}

CThostFtdcReqOpenAccountField *from_CThostFtdcReqOpenAccountField(PyObject * p) {
    CThostFtdcReqOpenAccountField *t = (CThostFtdcReqOpenAccountField *) calloc(1,
                                                                                sizeof(CThostFtdcReqOpenAccountField));
    memset(t, 0, sizeof(CThostFtdcReqOpenAccountField));
    strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
    strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
    strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
    strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
    strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
    strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->PlateSerial = PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
    t->LastFragment = PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
    t->IdCardType = PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
    strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
    t->Gender = PyString_AsString(PyObject_GetAttrString(p, "Gender"))[0];
    strcpy(t->CountryCode, PyString_AsString(PyObject_GetAttrString(p, "CountryCode")));
    t->CustType = PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
    strcpy(t->Address, PyString_AsString(PyObject_GetAttrString(p, "Address")));
    strcpy(t->ZipCode, PyString_AsString(PyObject_GetAttrString(p, "ZipCode")));
    strcpy(t->Telephone, PyString_AsString(PyObject_GetAttrString(p, "Telephone")));
    strcpy(t->MobilePhone, PyString_AsString(PyObject_GetAttrString(p, "MobilePhone")));
    strcpy(t->Fax, PyString_AsString(PyObject_GetAttrString(p, "Fax")));
    strcpy(t->EMail, PyString_AsString(PyObject_GetAttrString(p, "EMail")));
    t->MoneyAccountStatus = PyString_AsString(PyObject_GetAttrString(p, "MoneyAccountStatus"))[0];
    strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
    strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
    strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
    strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    t->VerifyCertNoFlag = PyString_AsString(PyObject_GetAttrString(p, "VerifyCertNoFlag"))[0];
    strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
    t->CashExchangeCode = PyString_AsString(PyObject_GetAttrString(p, "CashExchangeCode"))[0];
    strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));
    t->BankAccType = PyString_AsString(PyObject_GetAttrString(p, "BankAccType"))[0];
    strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
    t->BankSecuAccType = PyString_AsString(PyObject_GetAttrString(p, "BankSecuAccType"))[0];
    strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
    strcpy(t->BankSecuAcc, PyString_AsString(PyObject_GetAttrString(p, "BankSecuAcc")));
    t->BankPwdFlag = PyString_AsString(PyObject_GetAttrString(p, "BankPwdFlag"))[0];
    t->SecuPwdFlag = PyString_AsString(PyObject_GetAttrString(p, "SecuPwdFlag"))[0];
    strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
    t->TID = PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));

    return t;
};

PyObject *new_CThostFtdcReqCancelAccountField(CThostFtdcReqCancelAccountField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcReqCancelAccountField", "sssssssssiciscscscsssssscssssicscscscssccsis",
                               p->TradeCode, p->BankID, p->BankBranchID, p->BrokerID, p->BrokerBranchID, p->TradeDate,
                               p->TradeTime, p->BankSerial, p->TradingDay, p->PlateSerial, p->LastFragment,
                               p->SessionID, p->CustomerName, p->IdCardType, p->IdentifiedCardNo, p->Gender,
                               p->CountryCode, p->CustType, p->Address, p->ZipCode, p->Telephone, p->MobilePhone,
                               p->Fax, p->EMail, p->MoneyAccountStatus, p->BankAccount, p->BankPassWord, p->AccountID,
                               p->Password, p->InstallID, p->VerifyCertNoFlag, p->CurrencyID, p->CashExchangeCode,
                               p->Digest, p->BankAccType, p->DeviceID, p->BankSecuAccType, p->BrokerIDByBank,
                               p->BankSecuAcc, p->BankPwdFlag, p->SecuPwdFlag, p->OperNo, p->TID, p->UserID);
}

CThostFtdcReqCancelAccountField *from_CThostFtdcReqCancelAccountField(PyObject * p) {
    CThostFtdcReqCancelAccountField *t = (CThostFtdcReqCancelAccountField *) calloc(1,
                                                                                    sizeof(CThostFtdcReqCancelAccountField));
    memset(t, 0, sizeof(CThostFtdcReqCancelAccountField));
    strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
    strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
    strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
    strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
    strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
    strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->PlateSerial = PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
    t->LastFragment = PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
    t->IdCardType = PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
    strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
    t->Gender = PyString_AsString(PyObject_GetAttrString(p, "Gender"))[0];
    strcpy(t->CountryCode, PyString_AsString(PyObject_GetAttrString(p, "CountryCode")));
    t->CustType = PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
    strcpy(t->Address, PyString_AsString(PyObject_GetAttrString(p, "Address")));
    strcpy(t->ZipCode, PyString_AsString(PyObject_GetAttrString(p, "ZipCode")));
    strcpy(t->Telephone, PyString_AsString(PyObject_GetAttrString(p, "Telephone")));
    strcpy(t->MobilePhone, PyString_AsString(PyObject_GetAttrString(p, "MobilePhone")));
    strcpy(t->Fax, PyString_AsString(PyObject_GetAttrString(p, "Fax")));
    strcpy(t->EMail, PyString_AsString(PyObject_GetAttrString(p, "EMail")));
    t->MoneyAccountStatus = PyString_AsString(PyObject_GetAttrString(p, "MoneyAccountStatus"))[0];
    strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
    strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
    strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
    strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    t->VerifyCertNoFlag = PyString_AsString(PyObject_GetAttrString(p, "VerifyCertNoFlag"))[0];
    strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
    t->CashExchangeCode = PyString_AsString(PyObject_GetAttrString(p, "CashExchangeCode"))[0];
    strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));
    t->BankAccType = PyString_AsString(PyObject_GetAttrString(p, "BankAccType"))[0];
    strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
    t->BankSecuAccType = PyString_AsString(PyObject_GetAttrString(p, "BankSecuAccType"))[0];
    strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
    strcpy(t->BankSecuAcc, PyString_AsString(PyObject_GetAttrString(p, "BankSecuAcc")));
    t->BankPwdFlag = PyString_AsString(PyObject_GetAttrString(p, "BankPwdFlag"))[0];
    t->SecuPwdFlag = PyString_AsString(PyObject_GetAttrString(p, "SecuPwdFlag"))[0];
    strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
    t->TID = PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));

    return t;
};

PyObject *new_CThostFtdcReqChangeAccountField(CThostFtdcReqChangeAccountField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcReqChangeAccountField", "sssssssssiciscscscsssssscsssssscicssccis",
                               p->TradeCode, p->BankID, p->BankBranchID, p->BrokerID, p->BrokerBranchID, p->TradeDate,
                               p->TradeTime, p->BankSerial, p->TradingDay, p->PlateSerial, p->LastFragment,
                               p->SessionID, p->CustomerName, p->IdCardType, p->IdentifiedCardNo, p->Gender,
                               p->CountryCode, p->CustType, p->Address, p->ZipCode, p->Telephone, p->MobilePhone,
                               p->Fax, p->EMail, p->MoneyAccountStatus, p->BankAccount, p->BankPassWord,
                               p->NewBankAccount, p->NewBankPassWord, p->AccountID, p->Password, p->BankAccType,
                               p->InstallID, p->VerifyCertNoFlag, p->CurrencyID, p->BrokerIDByBank, p->BankPwdFlag,
                               p->SecuPwdFlag, p->TID, p->Digest);
}

CThostFtdcReqChangeAccountField *from_CThostFtdcReqChangeAccountField(PyObject * p) {
    CThostFtdcReqChangeAccountField *t = (CThostFtdcReqChangeAccountField *) calloc(1,
                                                                                    sizeof(CThostFtdcReqChangeAccountField));
    memset(t, 0, sizeof(CThostFtdcReqChangeAccountField));
    strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
    strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
    strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
    strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
    strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
    strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->PlateSerial = PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
    t->LastFragment = PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
    t->IdCardType = PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
    strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
    t->Gender = PyString_AsString(PyObject_GetAttrString(p, "Gender"))[0];
    strcpy(t->CountryCode, PyString_AsString(PyObject_GetAttrString(p, "CountryCode")));
    t->CustType = PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
    strcpy(t->Address, PyString_AsString(PyObject_GetAttrString(p, "Address")));
    strcpy(t->ZipCode, PyString_AsString(PyObject_GetAttrString(p, "ZipCode")));
    strcpy(t->Telephone, PyString_AsString(PyObject_GetAttrString(p, "Telephone")));
    strcpy(t->MobilePhone, PyString_AsString(PyObject_GetAttrString(p, "MobilePhone")));
    strcpy(t->Fax, PyString_AsString(PyObject_GetAttrString(p, "Fax")));
    strcpy(t->EMail, PyString_AsString(PyObject_GetAttrString(p, "EMail")));
    t->MoneyAccountStatus = PyString_AsString(PyObject_GetAttrString(p, "MoneyAccountStatus"))[0];
    strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
    strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
    strcpy(t->NewBankAccount, PyString_AsString(PyObject_GetAttrString(p, "NewBankAccount")));
    strcpy(t->NewBankPassWord, PyString_AsString(PyObject_GetAttrString(p, "NewBankPassWord")));
    strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
    strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
    t->BankAccType = PyString_AsString(PyObject_GetAttrString(p, "BankAccType"))[0];
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    t->VerifyCertNoFlag = PyString_AsString(PyObject_GetAttrString(p, "VerifyCertNoFlag"))[0];
    strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
    strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
    t->BankPwdFlag = PyString_AsString(PyObject_GetAttrString(p, "BankPwdFlag"))[0];
    t->SecuPwdFlag = PyString_AsString(PyObject_GetAttrString(p, "SecuPwdFlag"))[0];
    t->TID = PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
    strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));

    return t;
};

PyObject *new_CThostFtdcReqTransferField(CThostFtdcReqTransferField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcReqTransferField", "sssssssssiciscscssssiiscsddcddsscscssccsiic",
                               p->TradeCode, p->BankID, p->BankBranchID, p->BrokerID, p->BrokerBranchID, p->TradeDate,
                               p->TradeTime, p->BankSerial, p->TradingDay, p->PlateSerial, p->LastFragment,
                               p->SessionID, p->CustomerName, p->IdCardType, p->IdentifiedCardNo, p->CustType,
                               p->BankAccount, p->BankPassWord, p->AccountID, p->Password, p->InstallID,
                               p->FutureSerial, p->UserID, p->VerifyCertNoFlag, p->CurrencyID, p->TradeAmount,
                               p->FutureFetchAmount, p->FeePayFlag, p->CustFee, p->BrokerFee, p->Message, p->Digest,
                               p->BankAccType, p->DeviceID, p->BankSecuAccType, p->BrokerIDByBank, p->BankSecuAcc,
                               p->BankPwdFlag, p->SecuPwdFlag, p->OperNo, p->RequestID, p->TID, p->TransferStatus);
}

CThostFtdcReqTransferField *from_CThostFtdcReqTransferField(PyObject * p) {
    CThostFtdcReqTransferField *t = (CThostFtdcReqTransferField *) calloc(1, sizeof(CThostFtdcReqTransferField));
    memset(t, 0, sizeof(CThostFtdcReqTransferField));
    strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
    strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
    strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
    strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
    strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
    strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->PlateSerial = PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
    t->LastFragment = PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
    t->IdCardType = PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
    strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
    t->CustType = PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
    strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
    strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
    strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
    strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    t->FutureSerial = PyInt_AsLong(PyObject_GetAttrString(p, "FutureSerial"));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    t->VerifyCertNoFlag = PyString_AsString(PyObject_GetAttrString(p, "VerifyCertNoFlag"))[0];
    strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
    t->TradeAmount = PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmount"));
    t->FutureFetchAmount = PyFloat_AsDouble(PyObject_GetAttrString(p, "FutureFetchAmount"));
    t->FeePayFlag = PyString_AsString(PyObject_GetAttrString(p, "FeePayFlag"))[0];
    t->CustFee = PyFloat_AsDouble(PyObject_GetAttrString(p, "CustFee"));
    t->BrokerFee = PyFloat_AsDouble(PyObject_GetAttrString(p, "BrokerFee"));
    strcpy(t->Message, PyString_AsString(PyObject_GetAttrString(p, "Message")));
    strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));
    t->BankAccType = PyString_AsString(PyObject_GetAttrString(p, "BankAccType"))[0];
    strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
    t->BankSecuAccType = PyString_AsString(PyObject_GetAttrString(p, "BankSecuAccType"))[0];
    strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
    strcpy(t->BankSecuAcc, PyString_AsString(PyObject_GetAttrString(p, "BankSecuAcc")));
    t->BankPwdFlag = PyString_AsString(PyObject_GetAttrString(p, "BankPwdFlag"))[0];
    t->SecuPwdFlag = PyString_AsString(PyObject_GetAttrString(p, "SecuPwdFlag"))[0];
    strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
    t->RequestID = PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
    t->TID = PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
    t->TransferStatus = PyString_AsString(PyObject_GetAttrString(p, "TransferStatus"))[0];

    return t;
};

PyObject *new_CThostFtdcRspTransferField(CThostFtdcRspTransferField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcRspTransferField", "sssssssssiciscscssssiiscsddcddsscscssccsiicis",
                               p->TradeCode, p->BankID, p->BankBranchID, p->BrokerID, p->BrokerBranchID, p->TradeDate,
                               p->TradeTime, p->BankSerial, p->TradingDay, p->PlateSerial, p->LastFragment,
                               p->SessionID, p->CustomerName, p->IdCardType, p->IdentifiedCardNo, p->CustType,
                               p->BankAccount, p->BankPassWord, p->AccountID, p->Password, p->InstallID,
                               p->FutureSerial, p->UserID, p->VerifyCertNoFlag, p->CurrencyID, p->TradeAmount,
                               p->FutureFetchAmount, p->FeePayFlag, p->CustFee, p->BrokerFee, p->Message, p->Digest,
                               p->BankAccType, p->DeviceID, p->BankSecuAccType, p->BrokerIDByBank, p->BankSecuAcc,
                               p->BankPwdFlag, p->SecuPwdFlag, p->OperNo, p->RequestID, p->TID, p->TransferStatus,
                               p->ErrorID, p->ErrorMsg);
}

CThostFtdcRspTransferField *from_CThostFtdcRspTransferField(PyObject * p) {
    CThostFtdcRspTransferField *t = (CThostFtdcRspTransferField *) calloc(1, sizeof(CThostFtdcRspTransferField));
    memset(t, 0, sizeof(CThostFtdcRspTransferField));
    strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
    strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
    strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
    strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
    strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
    strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->PlateSerial = PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
    t->LastFragment = PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
    t->IdCardType = PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
    strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
    t->CustType = PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
    strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
    strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
    strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
    strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    t->FutureSerial = PyInt_AsLong(PyObject_GetAttrString(p, "FutureSerial"));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    t->VerifyCertNoFlag = PyString_AsString(PyObject_GetAttrString(p, "VerifyCertNoFlag"))[0];
    strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
    t->TradeAmount = PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmount"));
    t->FutureFetchAmount = PyFloat_AsDouble(PyObject_GetAttrString(p, "FutureFetchAmount"));
    t->FeePayFlag = PyString_AsString(PyObject_GetAttrString(p, "FeePayFlag"))[0];
    t->CustFee = PyFloat_AsDouble(PyObject_GetAttrString(p, "CustFee"));
    t->BrokerFee = PyFloat_AsDouble(PyObject_GetAttrString(p, "BrokerFee"));
    strcpy(t->Message, PyString_AsString(PyObject_GetAttrString(p, "Message")));
    strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));
    t->BankAccType = PyString_AsString(PyObject_GetAttrString(p, "BankAccType"))[0];
    strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
    t->BankSecuAccType = PyString_AsString(PyObject_GetAttrString(p, "BankSecuAccType"))[0];
    strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
    strcpy(t->BankSecuAcc, PyString_AsString(PyObject_GetAttrString(p, "BankSecuAcc")));
    t->BankPwdFlag = PyString_AsString(PyObject_GetAttrString(p, "BankPwdFlag"))[0];
    t->SecuPwdFlag = PyString_AsString(PyObject_GetAttrString(p, "SecuPwdFlag"))[0];
    strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
    t->RequestID = PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
    t->TID = PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
    t->TransferStatus = PyString_AsString(PyObject_GetAttrString(p, "TransferStatus"))[0];
    t->ErrorID = PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
    strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));

    return t;
};

PyObject *new_CThostFtdcReqRepealField(CThostFtdcReqRepealField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcReqRepealField", "iiccisisssssssssiciscscssssiiscsddcddsscscssccsiic",
                               p->RepealTimeInterval, p->RepealedTimes, p->BankRepealFlag, p->BrokerRepealFlag,
                               p->PlateRepealSerial, p->BankRepealSerial, p->FutureRepealSerial, p->TradeCode,
                               p->BankID, p->BankBranchID, p->BrokerID, p->BrokerBranchID, p->TradeDate, p->TradeTime,
                               p->BankSerial, p->TradingDay, p->PlateSerial, p->LastFragment, p->SessionID,
                               p->CustomerName, p->IdCardType, p->IdentifiedCardNo, p->CustType, p->BankAccount,
                               p->BankPassWord, p->AccountID, p->Password, p->InstallID, p->FutureSerial, p->UserID,
                               p->VerifyCertNoFlag, p->CurrencyID, p->TradeAmount, p->FutureFetchAmount, p->FeePayFlag,
                               p->CustFee, p->BrokerFee, p->Message, p->Digest, p->BankAccType, p->DeviceID,
                               p->BankSecuAccType, p->BrokerIDByBank, p->BankSecuAcc, p->BankPwdFlag, p->SecuPwdFlag,
                               p->OperNo, p->RequestID, p->TID, p->TransferStatus);
}

CThostFtdcReqRepealField *from_CThostFtdcReqRepealField(PyObject * p) {
    CThostFtdcReqRepealField *t = (CThostFtdcReqRepealField *) calloc(1, sizeof(CThostFtdcReqRepealField));
    memset(t, 0, sizeof(CThostFtdcReqRepealField));
    t->RepealTimeInterval = PyInt_AsLong(PyObject_GetAttrString(p, "RepealTimeInterval"));
    t->RepealedTimes = PyInt_AsLong(PyObject_GetAttrString(p, "RepealedTimes"));
    t->BankRepealFlag = PyString_AsString(PyObject_GetAttrString(p, "BankRepealFlag"))[0];
    t->BrokerRepealFlag = PyString_AsString(PyObject_GetAttrString(p, "BrokerRepealFlag"))[0];
    t->PlateRepealSerial = PyInt_AsLong(PyObject_GetAttrString(p, "PlateRepealSerial"));
    strcpy(t->BankRepealSerial, PyString_AsString(PyObject_GetAttrString(p, "BankRepealSerial")));
    t->FutureRepealSerial = PyInt_AsLong(PyObject_GetAttrString(p, "FutureRepealSerial"));
    strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
    strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
    strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
    strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
    strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
    strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->PlateSerial = PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
    t->LastFragment = PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
    t->IdCardType = PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
    strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
    t->CustType = PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
    strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
    strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
    strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
    strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    t->FutureSerial = PyInt_AsLong(PyObject_GetAttrString(p, "FutureSerial"));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    t->VerifyCertNoFlag = PyString_AsString(PyObject_GetAttrString(p, "VerifyCertNoFlag"))[0];
    strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
    t->TradeAmount = PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmount"));
    t->FutureFetchAmount = PyFloat_AsDouble(PyObject_GetAttrString(p, "FutureFetchAmount"));
    t->FeePayFlag = PyString_AsString(PyObject_GetAttrString(p, "FeePayFlag"))[0];
    t->CustFee = PyFloat_AsDouble(PyObject_GetAttrString(p, "CustFee"));
    t->BrokerFee = PyFloat_AsDouble(PyObject_GetAttrString(p, "BrokerFee"));
    strcpy(t->Message, PyString_AsString(PyObject_GetAttrString(p, "Message")));
    strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));
    t->BankAccType = PyString_AsString(PyObject_GetAttrString(p, "BankAccType"))[0];
    strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
    t->BankSecuAccType = PyString_AsString(PyObject_GetAttrString(p, "BankSecuAccType"))[0];
    strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
    strcpy(t->BankSecuAcc, PyString_AsString(PyObject_GetAttrString(p, "BankSecuAcc")));
    t->BankPwdFlag = PyString_AsString(PyObject_GetAttrString(p, "BankPwdFlag"))[0];
    t->SecuPwdFlag = PyString_AsString(PyObject_GetAttrString(p, "SecuPwdFlag"))[0];
    strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
    t->RequestID = PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
    t->TID = PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
    t->TransferStatus = PyString_AsString(PyObject_GetAttrString(p, "TransferStatus"))[0];

    return t;
};

PyObject *new_CThostFtdcRspRepealField(CThostFtdcRspRepealField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcRspRepealField", "iiccisisssssssssiciscscssssiiscsddcddsscscssccsiicis",
                               p->RepealTimeInterval, p->RepealedTimes, p->BankRepealFlag, p->BrokerRepealFlag,
                               p->PlateRepealSerial, p->BankRepealSerial, p->FutureRepealSerial, p->TradeCode,
                               p->BankID, p->BankBranchID, p->BrokerID, p->BrokerBranchID, p->TradeDate, p->TradeTime,
                               p->BankSerial, p->TradingDay, p->PlateSerial, p->LastFragment, p->SessionID,
                               p->CustomerName, p->IdCardType, p->IdentifiedCardNo, p->CustType, p->BankAccount,
                               p->BankPassWord, p->AccountID, p->Password, p->InstallID, p->FutureSerial, p->UserID,
                               p->VerifyCertNoFlag, p->CurrencyID, p->TradeAmount, p->FutureFetchAmount, p->FeePayFlag,
                               p->CustFee, p->BrokerFee, p->Message, p->Digest, p->BankAccType, p->DeviceID,
                               p->BankSecuAccType, p->BrokerIDByBank, p->BankSecuAcc, p->BankPwdFlag, p->SecuPwdFlag,
                               p->OperNo, p->RequestID, p->TID, p->TransferStatus, p->ErrorID, p->ErrorMsg);
}

CThostFtdcRspRepealField *from_CThostFtdcRspRepealField(PyObject * p) {
    CThostFtdcRspRepealField *t = (CThostFtdcRspRepealField *) calloc(1, sizeof(CThostFtdcRspRepealField));
    memset(t, 0, sizeof(CThostFtdcRspRepealField));
    t->RepealTimeInterval = PyInt_AsLong(PyObject_GetAttrString(p, "RepealTimeInterval"));
    t->RepealedTimes = PyInt_AsLong(PyObject_GetAttrString(p, "RepealedTimes"));
    t->BankRepealFlag = PyString_AsString(PyObject_GetAttrString(p, "BankRepealFlag"))[0];
    t->BrokerRepealFlag = PyString_AsString(PyObject_GetAttrString(p, "BrokerRepealFlag"))[0];
    t->PlateRepealSerial = PyInt_AsLong(PyObject_GetAttrString(p, "PlateRepealSerial"));
    strcpy(t->BankRepealSerial, PyString_AsString(PyObject_GetAttrString(p, "BankRepealSerial")));
    t->FutureRepealSerial = PyInt_AsLong(PyObject_GetAttrString(p, "FutureRepealSerial"));
    strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
    strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
    strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
    strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
    strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
    strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->PlateSerial = PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
    t->LastFragment = PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
    t->IdCardType = PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
    strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
    t->CustType = PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
    strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
    strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
    strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
    strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    t->FutureSerial = PyInt_AsLong(PyObject_GetAttrString(p, "FutureSerial"));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    t->VerifyCertNoFlag = PyString_AsString(PyObject_GetAttrString(p, "VerifyCertNoFlag"))[0];
    strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
    t->TradeAmount = PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmount"));
    t->FutureFetchAmount = PyFloat_AsDouble(PyObject_GetAttrString(p, "FutureFetchAmount"));
    t->FeePayFlag = PyString_AsString(PyObject_GetAttrString(p, "FeePayFlag"))[0];
    t->CustFee = PyFloat_AsDouble(PyObject_GetAttrString(p, "CustFee"));
    t->BrokerFee = PyFloat_AsDouble(PyObject_GetAttrString(p, "BrokerFee"));
    strcpy(t->Message, PyString_AsString(PyObject_GetAttrString(p, "Message")));
    strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));
    t->BankAccType = PyString_AsString(PyObject_GetAttrString(p, "BankAccType"))[0];
    strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
    t->BankSecuAccType = PyString_AsString(PyObject_GetAttrString(p, "BankSecuAccType"))[0];
    strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
    strcpy(t->BankSecuAcc, PyString_AsString(PyObject_GetAttrString(p, "BankSecuAcc")));
    t->BankPwdFlag = PyString_AsString(PyObject_GetAttrString(p, "BankPwdFlag"))[0];
    t->SecuPwdFlag = PyString_AsString(PyObject_GetAttrString(p, "SecuPwdFlag"))[0];
    strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
    t->RequestID = PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
    t->TID = PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
    t->TransferStatus = PyString_AsString(PyObject_GetAttrString(p, "TransferStatus"))[0];
    t->ErrorID = PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
    strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));

    return t;
};

PyObject *new_CThostFtdcReqQueryAccountField(CThostFtdcReqQueryAccountField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcReqQueryAccountField", "sssssssssiciscscssssiiscsscscssccsii",
                               p->TradeCode, p->BankID, p->BankBranchID, p->BrokerID, p->BrokerBranchID, p->TradeDate,
                               p->TradeTime, p->BankSerial, p->TradingDay, p->PlateSerial, p->LastFragment,
                               p->SessionID, p->CustomerName, p->IdCardType, p->IdentifiedCardNo, p->CustType,
                               p->BankAccount, p->BankPassWord, p->AccountID, p->Password, p->FutureSerial,
                               p->InstallID, p->UserID, p->VerifyCertNoFlag, p->CurrencyID, p->Digest, p->BankAccType,
                               p->DeviceID, p->BankSecuAccType, p->BrokerIDByBank, p->BankSecuAcc, p->BankPwdFlag,
                               p->SecuPwdFlag, p->OperNo, p->RequestID, p->TID);
}

CThostFtdcReqQueryAccountField *from_CThostFtdcReqQueryAccountField(PyObject * p) {
    CThostFtdcReqQueryAccountField *t = (CThostFtdcReqQueryAccountField *) calloc(1,
                                                                                  sizeof(CThostFtdcReqQueryAccountField));
    memset(t, 0, sizeof(CThostFtdcReqQueryAccountField));
    strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
    strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
    strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
    strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
    strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
    strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->PlateSerial = PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
    t->LastFragment = PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
    t->IdCardType = PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
    strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
    t->CustType = PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
    strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
    strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
    strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
    strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
    t->FutureSerial = PyInt_AsLong(PyObject_GetAttrString(p, "FutureSerial"));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    t->VerifyCertNoFlag = PyString_AsString(PyObject_GetAttrString(p, "VerifyCertNoFlag"))[0];
    strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
    strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));
    t->BankAccType = PyString_AsString(PyObject_GetAttrString(p, "BankAccType"))[0];
    strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
    t->BankSecuAccType = PyString_AsString(PyObject_GetAttrString(p, "BankSecuAccType"))[0];
    strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
    strcpy(t->BankSecuAcc, PyString_AsString(PyObject_GetAttrString(p, "BankSecuAcc")));
    t->BankPwdFlag = PyString_AsString(PyObject_GetAttrString(p, "BankPwdFlag"))[0];
    t->SecuPwdFlag = PyString_AsString(PyObject_GetAttrString(p, "SecuPwdFlag"))[0];
    strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
    t->RequestID = PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
    t->TID = PyInt_AsLong(PyObject_GetAttrString(p, "TID"));

    return t;
};

PyObject *new_CThostFtdcRspQueryAccountField(CThostFtdcRspQueryAccountField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcRspQueryAccountField", "sssssssssiciscscssssiiscsscscssccsiidd",
                               p->TradeCode, p->BankID, p->BankBranchID, p->BrokerID, p->BrokerBranchID, p->TradeDate,
                               p->TradeTime, p->BankSerial, p->TradingDay, p->PlateSerial, p->LastFragment,
                               p->SessionID, p->CustomerName, p->IdCardType, p->IdentifiedCardNo, p->CustType,
                               p->BankAccount, p->BankPassWord, p->AccountID, p->Password, p->FutureSerial,
                               p->InstallID, p->UserID, p->VerifyCertNoFlag, p->CurrencyID, p->Digest, p->BankAccType,
                               p->DeviceID, p->BankSecuAccType, p->BrokerIDByBank, p->BankSecuAcc, p->BankPwdFlag,
                               p->SecuPwdFlag, p->OperNo, p->RequestID, p->TID, p->BankUseAmount, p->BankFetchAmount);
}

CThostFtdcRspQueryAccountField *from_CThostFtdcRspQueryAccountField(PyObject * p) {
    CThostFtdcRspQueryAccountField *t = (CThostFtdcRspQueryAccountField *) calloc(1,
                                                                                  sizeof(CThostFtdcRspQueryAccountField));
    memset(t, 0, sizeof(CThostFtdcRspQueryAccountField));
    strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
    strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
    strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
    strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
    strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
    strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->PlateSerial = PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
    t->LastFragment = PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
    t->IdCardType = PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
    strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
    t->CustType = PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
    strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
    strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
    strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
    strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
    t->FutureSerial = PyInt_AsLong(PyObject_GetAttrString(p, "FutureSerial"));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    t->VerifyCertNoFlag = PyString_AsString(PyObject_GetAttrString(p, "VerifyCertNoFlag"))[0];
    strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
    strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));
    t->BankAccType = PyString_AsString(PyObject_GetAttrString(p, "BankAccType"))[0];
    strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
    t->BankSecuAccType = PyString_AsString(PyObject_GetAttrString(p, "BankSecuAccType"))[0];
    strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
    strcpy(t->BankSecuAcc, PyString_AsString(PyObject_GetAttrString(p, "BankSecuAcc")));
    t->BankPwdFlag = PyString_AsString(PyObject_GetAttrString(p, "BankPwdFlag"))[0];
    t->SecuPwdFlag = PyString_AsString(PyObject_GetAttrString(p, "SecuPwdFlag"))[0];
    strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
    t->RequestID = PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
    t->TID = PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
    t->BankUseAmount = PyFloat_AsDouble(PyObject_GetAttrString(p, "BankUseAmount"));
    t->BankFetchAmount = PyFloat_AsDouble(PyObject_GetAttrString(p, "BankFetchAmount"));

    return t;
};

PyObject *new_CThostFtdcFutureSignIOField(CThostFtdcFutureSignIOField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcFutureSignIOField", "sssssssssiciissssssii",
                               p->TradeCode, p->BankID, p->BankBranchID, p->BrokerID, p->BrokerBranchID, p->TradeDate,
                               p->TradeTime, p->BankSerial, p->TradingDay, p->PlateSerial, p->LastFragment,
                               p->SessionID, p->InstallID, p->UserID, p->Digest, p->CurrencyID, p->DeviceID,
                               p->BrokerIDByBank, p->OperNo, p->RequestID, p->TID);
}

CThostFtdcFutureSignIOField *from_CThostFtdcFutureSignIOField(PyObject * p) {
    CThostFtdcFutureSignIOField *t = (CThostFtdcFutureSignIOField *) calloc(1, sizeof(CThostFtdcFutureSignIOField));
    memset(t, 0, sizeof(CThostFtdcFutureSignIOField));
    strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
    strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
    strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
    strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
    strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
    strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->PlateSerial = PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
    t->LastFragment = PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));
    strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
    strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
    strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
    strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
    t->RequestID = PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
    t->TID = PyInt_AsLong(PyObject_GetAttrString(p, "TID"));

    return t;
};

PyObject *new_CThostFtdcRspFutureSignInField(CThostFtdcRspFutureSignInField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcRspFutureSignInField", "sssssssssiciissssssiiisss",
                               p->TradeCode, p->BankID, p->BankBranchID, p->BrokerID, p->BrokerBranchID, p->TradeDate,
                               p->TradeTime, p->BankSerial, p->TradingDay, p->PlateSerial, p->LastFragment,
                               p->SessionID, p->InstallID, p->UserID, p->Digest, p->CurrencyID, p->DeviceID,
                               p->BrokerIDByBank, p->OperNo, p->RequestID, p->TID, p->ErrorID, p->ErrorMsg, p->PinKey,
                               p->MacKey);
}

CThostFtdcRspFutureSignInField *from_CThostFtdcRspFutureSignInField(PyObject * p) {
    CThostFtdcRspFutureSignInField *t = (CThostFtdcRspFutureSignInField *) calloc(1,
                                                                                  sizeof(CThostFtdcRspFutureSignInField));
    memset(t, 0, sizeof(CThostFtdcRspFutureSignInField));
    strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
    strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
    strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
    strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
    strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
    strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->PlateSerial = PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
    t->LastFragment = PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));
    strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
    strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
    strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
    strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
    t->RequestID = PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
    t->TID = PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
    t->ErrorID = PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
    strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
    strcpy(t->PinKey, PyString_AsString(PyObject_GetAttrString(p, "PinKey")));
    strcpy(t->MacKey, PyString_AsString(PyObject_GetAttrString(p, "MacKey")));

    return t;
};

PyObject *new_CThostFtdcReqFutureSignOutField(CThostFtdcReqFutureSignOutField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcReqFutureSignOutField", "sssssssssiciissssssii",
                               p->TradeCode, p->BankID, p->BankBranchID, p->BrokerID, p->BrokerBranchID, p->TradeDate,
                               p->TradeTime, p->BankSerial, p->TradingDay, p->PlateSerial, p->LastFragment,
                               p->SessionID, p->InstallID, p->UserID, p->Digest, p->CurrencyID, p->DeviceID,
                               p->BrokerIDByBank, p->OperNo, p->RequestID, p->TID);
}

CThostFtdcReqFutureSignOutField *from_CThostFtdcReqFutureSignOutField(PyObject * p) {
    CThostFtdcReqFutureSignOutField *t = (CThostFtdcReqFutureSignOutField *) calloc(1,
                                                                                    sizeof(CThostFtdcReqFutureSignOutField));
    memset(t, 0, sizeof(CThostFtdcReqFutureSignOutField));
    strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
    strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
    strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
    strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
    strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
    strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->PlateSerial = PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
    t->LastFragment = PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));
    strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
    strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
    strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
    strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
    t->RequestID = PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
    t->TID = PyInt_AsLong(PyObject_GetAttrString(p, "TID"));

    return t;
};

PyObject *new_CThostFtdcRspFutureSignOutField(CThostFtdcRspFutureSignOutField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcRspFutureSignOutField", "sssssssssiciissssssiiis",
                               p->TradeCode, p->BankID, p->BankBranchID, p->BrokerID, p->BrokerBranchID, p->TradeDate,
                               p->TradeTime, p->BankSerial, p->TradingDay, p->PlateSerial, p->LastFragment,
                               p->SessionID, p->InstallID, p->UserID, p->Digest, p->CurrencyID, p->DeviceID,
                               p->BrokerIDByBank, p->OperNo, p->RequestID, p->TID, p->ErrorID, p->ErrorMsg);
}

CThostFtdcRspFutureSignOutField *from_CThostFtdcRspFutureSignOutField(PyObject * p) {
    CThostFtdcRspFutureSignOutField *t = (CThostFtdcRspFutureSignOutField *) calloc(1,
                                                                                    sizeof(CThostFtdcRspFutureSignOutField));
    memset(t, 0, sizeof(CThostFtdcRspFutureSignOutField));
    strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
    strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
    strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
    strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
    strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
    strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->PlateSerial = PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
    t->LastFragment = PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));
    strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
    strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
    strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
    strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
    t->RequestID = PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
    t->TID = PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
    t->ErrorID = PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
    strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));

    return t;
};

PyObject *new_CThostFtdcReqQueryTradeResultBySerialField(CThostFtdcReqQueryTradeResultBySerialField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcReqQueryTradeResultBySerialField", "sssssssssiciicsscscsssssds",
                               p->TradeCode, p->BankID, p->BankBranchID, p->BrokerID, p->BrokerBranchID, p->TradeDate,
                               p->TradeTime, p->BankSerial, p->TradingDay, p->PlateSerial, p->LastFragment,
                               p->SessionID, p->Reference, p->RefrenceIssureType, p->RefrenceIssure, p->CustomerName,
                               p->IdCardType, p->IdentifiedCardNo, p->CustType, p->BankAccount, p->BankPassWord,
                               p->AccountID, p->Password, p->CurrencyID, p->TradeAmount, p->Digest);
}

CThostFtdcReqQueryTradeResultBySerialField *from_CThostFtdcReqQueryTradeResultBySerialField(PyObject * p) {
    CThostFtdcReqQueryTradeResultBySerialField *t = (CThostFtdcReqQueryTradeResultBySerialField *) calloc(1,
                                                                                                          sizeof(CThostFtdcReqQueryTradeResultBySerialField));
    memset(t, 0, sizeof(CThostFtdcReqQueryTradeResultBySerialField));
    strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
    strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
    strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
    strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
    strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
    strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->PlateSerial = PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
    t->LastFragment = PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    t->Reference = PyInt_AsLong(PyObject_GetAttrString(p, "Reference"));
    t->RefrenceIssureType = PyString_AsString(PyObject_GetAttrString(p, "RefrenceIssureType"))[0];
    strcpy(t->RefrenceIssure, PyString_AsString(PyObject_GetAttrString(p, "RefrenceIssure")));
    strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
    t->IdCardType = PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
    strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
    t->CustType = PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
    strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
    strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
    strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
    strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
    strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
    t->TradeAmount = PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmount"));
    strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));

    return t;
};

PyObject *new_CThostFtdcRspQueryTradeResultBySerialField(CThostFtdcRspQueryTradeResultBySerialField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcRspQueryTradeResultBySerialField", "sssssssssiciisicssssssssds",
                               p->TradeCode, p->BankID, p->BankBranchID, p->BrokerID, p->BrokerBranchID, p->TradeDate,
                               p->TradeTime, p->BankSerial, p->TradingDay, p->PlateSerial, p->LastFragment,
                               p->SessionID, p->ErrorID, p->ErrorMsg, p->Reference, p->RefrenceIssureType,
                               p->RefrenceIssure, p->OriginReturnCode, p->OriginDescrInfoForReturnCode, p->BankAccount,
                               p->BankPassWord, p->AccountID, p->Password, p->CurrencyID, p->TradeAmount, p->Digest);
}

CThostFtdcRspQueryTradeResultBySerialField *from_CThostFtdcRspQueryTradeResultBySerialField(PyObject * p) {
    CThostFtdcRspQueryTradeResultBySerialField *t = (CThostFtdcRspQueryTradeResultBySerialField *) calloc(1,
                                                                                                          sizeof(CThostFtdcRspQueryTradeResultBySerialField));
    memset(t, 0, sizeof(CThostFtdcRspQueryTradeResultBySerialField));
    strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
    strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
    strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
    strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
    strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
    strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->PlateSerial = PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
    t->LastFragment = PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    t->ErrorID = PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
    strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
    t->Reference = PyInt_AsLong(PyObject_GetAttrString(p, "Reference"));
    t->RefrenceIssureType = PyString_AsString(PyObject_GetAttrString(p, "RefrenceIssureType"))[0];
    strcpy(t->RefrenceIssure, PyString_AsString(PyObject_GetAttrString(p, "RefrenceIssure")));
    strcpy(t->OriginReturnCode, PyString_AsString(PyObject_GetAttrString(p, "OriginReturnCode")));
    strcpy(t->OriginDescrInfoForReturnCode,
           PyString_AsString(PyObject_GetAttrString(p, "OriginDescrInfoForReturnCode")));
    strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
    strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
    strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
    strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
    strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
    t->TradeAmount = PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmount"));
    strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));

    return t;
};

PyObject *new_CThostFtdcReqDayEndFileReadyField(CThostFtdcReqDayEndFileReadyField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcReqDayEndFileReadyField", "sssssssssicics",
                               p->TradeCode, p->BankID, p->BankBranchID, p->BrokerID, p->BrokerBranchID, p->TradeDate,
                               p->TradeTime, p->BankSerial, p->TradingDay, p->PlateSerial, p->LastFragment,
                               p->SessionID, p->FileBusinessCode, p->Digest);
}

CThostFtdcReqDayEndFileReadyField *from_CThostFtdcReqDayEndFileReadyField(PyObject * p) {
    CThostFtdcReqDayEndFileReadyField *t = (CThostFtdcReqDayEndFileReadyField *) calloc(1,
                                                                                        sizeof(CThostFtdcReqDayEndFileReadyField));
    memset(t, 0, sizeof(CThostFtdcReqDayEndFileReadyField));
    strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
    strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
    strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
    strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
    strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
    strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->PlateSerial = PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
    t->LastFragment = PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    t->FileBusinessCode = PyString_AsString(PyObject_GetAttrString(p, "FileBusinessCode"))[0];
    strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));

    return t;
};

PyObject *new_CThostFtdcReturnResultField(CThostFtdcReturnResultField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcReturnResultField", "ss",
                               p->ReturnCode, p->DescrInfoForReturnCode);
}

CThostFtdcReturnResultField *from_CThostFtdcReturnResultField(PyObject * p) {
    CThostFtdcReturnResultField *t = (CThostFtdcReturnResultField *) calloc(1, sizeof(CThostFtdcReturnResultField));
    memset(t, 0, sizeof(CThostFtdcReturnResultField));
    strcpy(t->ReturnCode, PyString_AsString(PyObject_GetAttrString(p, "ReturnCode")));
    strcpy(t->DescrInfoForReturnCode, PyString_AsString(PyObject_GetAttrString(p, "DescrInfoForReturnCode")));

    return t;
};

PyObject *new_CThostFtdcVerifyFuturePasswordField(CThostFtdcVerifyFuturePasswordField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcVerifyFuturePasswordField", "sssssssssicissssiis",
                               p->TradeCode, p->BankID, p->BankBranchID, p->BrokerID, p->BrokerBranchID, p->TradeDate,
                               p->TradeTime, p->BankSerial, p->TradingDay, p->PlateSerial, p->LastFragment,
                               p->SessionID, p->AccountID, p->Password, p->BankAccount, p->BankPassWord, p->InstallID,
                               p->TID, p->CurrencyID);
}

CThostFtdcVerifyFuturePasswordField *from_CThostFtdcVerifyFuturePasswordField(PyObject * p) {
    CThostFtdcVerifyFuturePasswordField *t = (CThostFtdcVerifyFuturePasswordField *) calloc(1,
                                                                                            sizeof(CThostFtdcVerifyFuturePasswordField));
    memset(t, 0, sizeof(CThostFtdcVerifyFuturePasswordField));
    strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
    strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
    strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
    strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
    strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
    strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->PlateSerial = PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
    t->LastFragment = PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
    strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
    strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
    strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    t->TID = PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
    strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));

    return t;
};

PyObject *new_CThostFtdcVerifyCustInfoField(CThostFtdcVerifyCustInfoField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcVerifyCustInfoField", "scsc",
                               p->CustomerName, p->IdCardType, p->IdentifiedCardNo, p->CustType);
}

CThostFtdcVerifyCustInfoField *from_CThostFtdcVerifyCustInfoField(PyObject * p) {
    CThostFtdcVerifyCustInfoField *t = (CThostFtdcVerifyCustInfoField *) calloc(1,
                                                                                sizeof(CThostFtdcVerifyCustInfoField));
    memset(t, 0, sizeof(CThostFtdcVerifyCustInfoField));
    strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
    t->IdCardType = PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
    strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
    t->CustType = PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];

    return t;
};

PyObject *new_CThostFtdcVerifyFuturePasswordAndCustInfoField(CThostFtdcVerifyFuturePasswordAndCustInfoField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcVerifyFuturePasswordAndCustInfoField", "scscsss",
                               p->CustomerName, p->IdCardType, p->IdentifiedCardNo, p->CustType, p->AccountID,
                               p->Password, p->CurrencyID);
}

CThostFtdcVerifyFuturePasswordAndCustInfoField *from_CThostFtdcVerifyFuturePasswordAndCustInfoField(PyObject * p) {
    CThostFtdcVerifyFuturePasswordAndCustInfoField *t = (CThostFtdcVerifyFuturePasswordAndCustInfoField *) calloc(1,
                                                                                                                  sizeof(CThostFtdcVerifyFuturePasswordAndCustInfoField));
    memset(t, 0, sizeof(CThostFtdcVerifyFuturePasswordAndCustInfoField));
    strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
    t->IdCardType = PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
    strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
    t->CustType = PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
    strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
    strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
    strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));

    return t;
};

PyObject *new_CThostFtdcDepositResultInformField(CThostFtdcDepositResultInformField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcDepositResultInformField", "sssdiss",
                               p->DepositSeqNo, p->BrokerID, p->InvestorID, p->Deposit, p->RequestID, p->ReturnCode,
                               p->DescrInfoForReturnCode);
}

CThostFtdcDepositResultInformField *from_CThostFtdcDepositResultInformField(PyObject * p) {
    CThostFtdcDepositResultInformField *t = (CThostFtdcDepositResultInformField *) calloc(1,
                                                                                          sizeof(CThostFtdcDepositResultInformField));
    memset(t, 0, sizeof(CThostFtdcDepositResultInformField));
    strcpy(t->DepositSeqNo, PyString_AsString(PyObject_GetAttrString(p, "DepositSeqNo")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    t->Deposit = PyFloat_AsDouble(PyObject_GetAttrString(p, "Deposit"));
    t->RequestID = PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
    strcpy(t->ReturnCode, PyString_AsString(PyObject_GetAttrString(p, "ReturnCode")));
    strcpy(t->DescrInfoForReturnCode, PyString_AsString(PyObject_GetAttrString(p, "DescrInfoForReturnCode")));

    return t;
};

PyObject *new_CThostFtdcReqSyncKeyField(CThostFtdcReqSyncKeyField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcReqSyncKeyField", "sssssssssiciisssssii",
                               p->TradeCode, p->BankID, p->BankBranchID, p->BrokerID, p->BrokerBranchID, p->TradeDate,
                               p->TradeTime, p->BankSerial, p->TradingDay, p->PlateSerial, p->LastFragment,
                               p->SessionID, p->InstallID, p->UserID, p->Message, p->DeviceID, p->BrokerIDByBank,
                               p->OperNo, p->RequestID, p->TID);
}

CThostFtdcReqSyncKeyField *from_CThostFtdcReqSyncKeyField(PyObject * p) {
    CThostFtdcReqSyncKeyField *t = (CThostFtdcReqSyncKeyField *) calloc(1, sizeof(CThostFtdcReqSyncKeyField));
    memset(t, 0, sizeof(CThostFtdcReqSyncKeyField));
    strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
    strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
    strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
    strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
    strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
    strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->PlateSerial = PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
    t->LastFragment = PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    strcpy(t->Message, PyString_AsString(PyObject_GetAttrString(p, "Message")));
    strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
    strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
    strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
    t->RequestID = PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
    t->TID = PyInt_AsLong(PyObject_GetAttrString(p, "TID"));

    return t;
};

PyObject *new_CThostFtdcRspSyncKeyField(CThostFtdcRspSyncKeyField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcRspSyncKeyField", "sssssssssiciisssssiiis",
                               p->TradeCode, p->BankID, p->BankBranchID, p->BrokerID, p->BrokerBranchID, p->TradeDate,
                               p->TradeTime, p->BankSerial, p->TradingDay, p->PlateSerial, p->LastFragment,
                               p->SessionID, p->InstallID, p->UserID, p->Message, p->DeviceID, p->BrokerIDByBank,
                               p->OperNo, p->RequestID, p->TID, p->ErrorID, p->ErrorMsg);
}

CThostFtdcRspSyncKeyField *from_CThostFtdcRspSyncKeyField(PyObject * p) {
    CThostFtdcRspSyncKeyField *t = (CThostFtdcRspSyncKeyField *) calloc(1, sizeof(CThostFtdcRspSyncKeyField));
    memset(t, 0, sizeof(CThostFtdcRspSyncKeyField));
    strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
    strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
    strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
    strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
    strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
    strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->PlateSerial = PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
    t->LastFragment = PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    strcpy(t->Message, PyString_AsString(PyObject_GetAttrString(p, "Message")));
    strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
    strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
    strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
    t->RequestID = PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
    t->TID = PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
    t->ErrorID = PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
    strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));

    return t;
};

PyObject *new_CThostFtdcNotifyQueryAccountField(CThostFtdcNotifyQueryAccountField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcNotifyQueryAccountField", "sssssssssiciscscssssiiscsscscssccsiiddis",
                               p->TradeCode, p->BankID, p->BankBranchID, p->BrokerID, p->BrokerBranchID, p->TradeDate,
                               p->TradeTime, p->BankSerial, p->TradingDay, p->PlateSerial, p->LastFragment,
                               p->SessionID, p->CustomerName, p->IdCardType, p->IdentifiedCardNo, p->CustType,
                               p->BankAccount, p->BankPassWord, p->AccountID, p->Password, p->FutureSerial,
                               p->InstallID, p->UserID, p->VerifyCertNoFlag, p->CurrencyID, p->Digest, p->BankAccType,
                               p->DeviceID, p->BankSecuAccType, p->BrokerIDByBank, p->BankSecuAcc, p->BankPwdFlag,
                               p->SecuPwdFlag, p->OperNo, p->RequestID, p->TID, p->BankUseAmount, p->BankFetchAmount,
                               p->ErrorID, p->ErrorMsg);
}

CThostFtdcNotifyQueryAccountField *from_CThostFtdcNotifyQueryAccountField(PyObject * p) {
    CThostFtdcNotifyQueryAccountField *t = (CThostFtdcNotifyQueryAccountField *) calloc(1,
                                                                                        sizeof(CThostFtdcNotifyQueryAccountField));
    memset(t, 0, sizeof(CThostFtdcNotifyQueryAccountField));
    strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
    strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
    strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
    strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
    strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
    strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->PlateSerial = PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
    t->LastFragment = PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
    t->IdCardType = PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
    strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
    t->CustType = PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
    strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
    strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
    strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
    strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
    t->FutureSerial = PyInt_AsLong(PyObject_GetAttrString(p, "FutureSerial"));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    t->VerifyCertNoFlag = PyString_AsString(PyObject_GetAttrString(p, "VerifyCertNoFlag"))[0];
    strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
    strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));
    t->BankAccType = PyString_AsString(PyObject_GetAttrString(p, "BankAccType"))[0];
    strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
    t->BankSecuAccType = PyString_AsString(PyObject_GetAttrString(p, "BankSecuAccType"))[0];
    strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
    strcpy(t->BankSecuAcc, PyString_AsString(PyObject_GetAttrString(p, "BankSecuAcc")));
    t->BankPwdFlag = PyString_AsString(PyObject_GetAttrString(p, "BankPwdFlag"))[0];
    t->SecuPwdFlag = PyString_AsString(PyObject_GetAttrString(p, "SecuPwdFlag"))[0];
    strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
    t->RequestID = PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
    t->TID = PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
    t->BankUseAmount = PyFloat_AsDouble(PyObject_GetAttrString(p, "BankUseAmount"));
    t->BankFetchAmount = PyFloat_AsDouble(PyObject_GetAttrString(p, "BankFetchAmount"));
    t->ErrorID = PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
    strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));

    return t;
};

PyObject *new_CThostFtdcTransferSerialField(CThostFtdcTransferSerialField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcTransferSerialField", "issssisscsssscssicssdddcssis",
                               p->PlateSerial, p->TradeDate, p->TradingDay, p->TradeTime, p->TradeCode, p->SessionID,
                               p->BankID, p->BankBranchID, p->BankAccType, p->BankAccount, p->BankSerial, p->BrokerID,
                               p->BrokerBranchID, p->FutureAccType, p->AccountID, p->InvestorID, p->FutureSerial,
                               p->IdCardType, p->IdentifiedCardNo, p->CurrencyID, p->TradeAmount, p->CustFee,
                               p->BrokerFee, p->AvailabilityFlag, p->OperatorCode, p->BankNewAccount, p->ErrorID,
                               p->ErrorMsg);
}

CThostFtdcTransferSerialField *from_CThostFtdcTransferSerialField(PyObject * p) {
    CThostFtdcTransferSerialField *t = (CThostFtdcTransferSerialField *) calloc(1,
                                                                                sizeof(CThostFtdcTransferSerialField));
    memset(t, 0, sizeof(CThostFtdcTransferSerialField));
    t->PlateSerial = PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
    strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
    strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
    strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
    t->BankAccType = PyString_AsString(PyObject_GetAttrString(p, "BankAccType"))[0];
    strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
    strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
    t->FutureAccType = PyString_AsString(PyObject_GetAttrString(p, "FutureAccType"))[0];
    strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
    strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
    t->FutureSerial = PyInt_AsLong(PyObject_GetAttrString(p, "FutureSerial"));
    t->IdCardType = PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
    strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
    strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
    t->TradeAmount = PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmount"));
    t->CustFee = PyFloat_AsDouble(PyObject_GetAttrString(p, "CustFee"));
    t->BrokerFee = PyFloat_AsDouble(PyObject_GetAttrString(p, "BrokerFee"));
    t->AvailabilityFlag = PyString_AsString(PyObject_GetAttrString(p, "AvailabilityFlag"))[0];
    strcpy(t->OperatorCode, PyString_AsString(PyObject_GetAttrString(p, "OperatorCode")));
    strcpy(t->BankNewAccount, PyString_AsString(PyObject_GetAttrString(p, "BankNewAccount")));
    t->ErrorID = PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
    strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));

    return t;
};

PyObject *new_CThostFtdcQryTransferSerialField(CThostFtdcQryTransferSerialField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryTransferSerialField", "ssss",
                               p->BrokerID, p->AccountID, p->BankID, p->CurrencyID);
}

CThostFtdcQryTransferSerialField *from_CThostFtdcQryTransferSerialField(PyObject * p) {
    CThostFtdcQryTransferSerialField *t = (CThostFtdcQryTransferSerialField *) calloc(1,
                                                                                      sizeof(CThostFtdcQryTransferSerialField));
    memset(t, 0, sizeof(CThostFtdcQryTransferSerialField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
    strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
    strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));

    return t;
};

PyObject *new_CThostFtdcNotifyFutureSignInField(CThostFtdcNotifyFutureSignInField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcNotifyFutureSignInField", "sssssssssiciissssssiiisss",
                               p->TradeCode, p->BankID, p->BankBranchID, p->BrokerID, p->BrokerBranchID, p->TradeDate,
                               p->TradeTime, p->BankSerial, p->TradingDay, p->PlateSerial, p->LastFragment,
                               p->SessionID, p->InstallID, p->UserID, p->Digest, p->CurrencyID, p->DeviceID,
                               p->BrokerIDByBank, p->OperNo, p->RequestID, p->TID, p->ErrorID, p->ErrorMsg, p->PinKey,
                               p->MacKey);
}

CThostFtdcNotifyFutureSignInField *from_CThostFtdcNotifyFutureSignInField(PyObject * p) {
    CThostFtdcNotifyFutureSignInField *t = (CThostFtdcNotifyFutureSignInField *) calloc(1,
                                                                                        sizeof(CThostFtdcNotifyFutureSignInField));
    memset(t, 0, sizeof(CThostFtdcNotifyFutureSignInField));
    strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
    strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
    strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
    strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
    strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
    strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->PlateSerial = PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
    t->LastFragment = PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));
    strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
    strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
    strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
    strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
    t->RequestID = PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
    t->TID = PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
    t->ErrorID = PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
    strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
    strcpy(t->PinKey, PyString_AsString(PyObject_GetAttrString(p, "PinKey")));
    strcpy(t->MacKey, PyString_AsString(PyObject_GetAttrString(p, "MacKey")));

    return t;
};

PyObject *new_CThostFtdcNotifyFutureSignOutField(CThostFtdcNotifyFutureSignOutField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcNotifyFutureSignOutField", "sssssssssiciissssssiiis",
                               p->TradeCode, p->BankID, p->BankBranchID, p->BrokerID, p->BrokerBranchID, p->TradeDate,
                               p->TradeTime, p->BankSerial, p->TradingDay, p->PlateSerial, p->LastFragment,
                               p->SessionID, p->InstallID, p->UserID, p->Digest, p->CurrencyID, p->DeviceID,
                               p->BrokerIDByBank, p->OperNo, p->RequestID, p->TID, p->ErrorID, p->ErrorMsg);
}

CThostFtdcNotifyFutureSignOutField *from_CThostFtdcNotifyFutureSignOutField(PyObject * p) {
    CThostFtdcNotifyFutureSignOutField *t = (CThostFtdcNotifyFutureSignOutField *) calloc(1,
                                                                                          sizeof(CThostFtdcNotifyFutureSignOutField));
    memset(t, 0, sizeof(CThostFtdcNotifyFutureSignOutField));
    strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
    strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
    strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
    strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
    strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
    strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->PlateSerial = PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
    t->LastFragment = PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));
    strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
    strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
    strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
    strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
    t->RequestID = PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
    t->TID = PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
    t->ErrorID = PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
    strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));

    return t;
};

PyObject *new_CThostFtdcNotifySyncKeyField(CThostFtdcNotifySyncKeyField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcNotifySyncKeyField", "sssssssssiciisssssiiis",
                               p->TradeCode, p->BankID, p->BankBranchID, p->BrokerID, p->BrokerBranchID, p->TradeDate,
                               p->TradeTime, p->BankSerial, p->TradingDay, p->PlateSerial, p->LastFragment,
                               p->SessionID, p->InstallID, p->UserID, p->Message, p->DeviceID, p->BrokerIDByBank,
                               p->OperNo, p->RequestID, p->TID, p->ErrorID, p->ErrorMsg);
}

CThostFtdcNotifySyncKeyField *from_CThostFtdcNotifySyncKeyField(PyObject * p) {
    CThostFtdcNotifySyncKeyField *t = (CThostFtdcNotifySyncKeyField *) calloc(1, sizeof(CThostFtdcNotifySyncKeyField));
    memset(t, 0, sizeof(CThostFtdcNotifySyncKeyField));
    strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
    strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
    strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
    strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
    strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
    strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->PlateSerial = PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
    t->LastFragment = PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    strcpy(t->Message, PyString_AsString(PyObject_GetAttrString(p, "Message")));
    strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
    strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
    strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
    t->RequestID = PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
    t->TID = PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
    t->ErrorID = PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
    strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));

    return t;
};

PyObject *new_CThostFtdcQryAccountregisterField(CThostFtdcQryAccountregisterField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryAccountregisterField", "sssss",
                               p->BrokerID, p->AccountID, p->BankID, p->BankBranchID, p->CurrencyID);
}

CThostFtdcQryAccountregisterField *from_CThostFtdcQryAccountregisterField(PyObject * p) {
    CThostFtdcQryAccountregisterField *t = (CThostFtdcQryAccountregisterField *) calloc(1,
                                                                                        sizeof(CThostFtdcQryAccountregisterField));
    memset(t, 0, sizeof(CThostFtdcQryAccountregisterField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
    strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
    strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
    strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));

    return t;
};

PyObject *new_CThostFtdcAccountregisterField(CThostFtdcAccountregisterField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcAccountregisterField", "ssssssscssscssicc",
                               p->TradeDay, p->BankID, p->BankBranchID, p->BankAccount, p->BrokerID, p->BrokerBranchID,
                               p->AccountID, p->IdCardType, p->IdentifiedCardNo, p->CustomerName, p->CurrencyID,
                               p->OpenOrDestroy, p->RegDate, p->OutDate, p->TID, p->CustType, p->BankAccType);
}

CThostFtdcAccountregisterField *from_CThostFtdcAccountregisterField(PyObject * p) {
    CThostFtdcAccountregisterField *t = (CThostFtdcAccountregisterField *) calloc(1,
                                                                                  sizeof(CThostFtdcAccountregisterField));
    memset(t, 0, sizeof(CThostFtdcAccountregisterField));
    strcpy(t->TradeDay, PyString_AsString(PyObject_GetAttrString(p, "TradeDay")));
    strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
    strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
    strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
    strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
    t->IdCardType = PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
    strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
    strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
    strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
    t->OpenOrDestroy = PyString_AsString(PyObject_GetAttrString(p, "OpenOrDestroy"))[0];
    strcpy(t->RegDate, PyString_AsString(PyObject_GetAttrString(p, "RegDate")));
    strcpy(t->OutDate, PyString_AsString(PyObject_GetAttrString(p, "OutDate")));
    t->TID = PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
    t->CustType = PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
    t->BankAccType = PyString_AsString(PyObject_GetAttrString(p, "BankAccType"))[0];

    return t;
};

PyObject *new_CThostFtdcOpenAccountField(CThostFtdcOpenAccountField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcOpenAccountField", "sssssssssiciscscscsssssscssssicscscscssccsisis",
                               p->TradeCode, p->BankID, p->BankBranchID, p->BrokerID, p->BrokerBranchID, p->TradeDate,
                               p->TradeTime, p->BankSerial, p->TradingDay, p->PlateSerial, p->LastFragment,
                               p->SessionID, p->CustomerName, p->IdCardType, p->IdentifiedCardNo, p->Gender,
                               p->CountryCode, p->CustType, p->Address, p->ZipCode, p->Telephone, p->MobilePhone,
                               p->Fax, p->EMail, p->MoneyAccountStatus, p->BankAccount, p->BankPassWord, p->AccountID,
                               p->Password, p->InstallID, p->VerifyCertNoFlag, p->CurrencyID, p->CashExchangeCode,
                               p->Digest, p->BankAccType, p->DeviceID, p->BankSecuAccType, p->BrokerIDByBank,
                               p->BankSecuAcc, p->BankPwdFlag, p->SecuPwdFlag, p->OperNo, p->TID, p->UserID, p->ErrorID,
                               p->ErrorMsg);
}

CThostFtdcOpenAccountField *from_CThostFtdcOpenAccountField(PyObject * p) {
    CThostFtdcOpenAccountField *t = (CThostFtdcOpenAccountField *) calloc(1, sizeof(CThostFtdcOpenAccountField));
    memset(t, 0, sizeof(CThostFtdcOpenAccountField));
    strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
    strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
    strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
    strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
    strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
    strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->PlateSerial = PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
    t->LastFragment = PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
    t->IdCardType = PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
    strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
    t->Gender = PyString_AsString(PyObject_GetAttrString(p, "Gender"))[0];
    strcpy(t->CountryCode, PyString_AsString(PyObject_GetAttrString(p, "CountryCode")));
    t->CustType = PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
    strcpy(t->Address, PyString_AsString(PyObject_GetAttrString(p, "Address")));
    strcpy(t->ZipCode, PyString_AsString(PyObject_GetAttrString(p, "ZipCode")));
    strcpy(t->Telephone, PyString_AsString(PyObject_GetAttrString(p, "Telephone")));
    strcpy(t->MobilePhone, PyString_AsString(PyObject_GetAttrString(p, "MobilePhone")));
    strcpy(t->Fax, PyString_AsString(PyObject_GetAttrString(p, "Fax")));
    strcpy(t->EMail, PyString_AsString(PyObject_GetAttrString(p, "EMail")));
    t->MoneyAccountStatus = PyString_AsString(PyObject_GetAttrString(p, "MoneyAccountStatus"))[0];
    strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
    strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
    strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
    strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    t->VerifyCertNoFlag = PyString_AsString(PyObject_GetAttrString(p, "VerifyCertNoFlag"))[0];
    strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
    t->CashExchangeCode = PyString_AsString(PyObject_GetAttrString(p, "CashExchangeCode"))[0];
    strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));
    t->BankAccType = PyString_AsString(PyObject_GetAttrString(p, "BankAccType"))[0];
    strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
    t->BankSecuAccType = PyString_AsString(PyObject_GetAttrString(p, "BankSecuAccType"))[0];
    strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
    strcpy(t->BankSecuAcc, PyString_AsString(PyObject_GetAttrString(p, "BankSecuAcc")));
    t->BankPwdFlag = PyString_AsString(PyObject_GetAttrString(p, "BankPwdFlag"))[0];
    t->SecuPwdFlag = PyString_AsString(PyObject_GetAttrString(p, "SecuPwdFlag"))[0];
    strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
    t->TID = PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    t->ErrorID = PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
    strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));

    return t;
};

PyObject *new_CThostFtdcCancelAccountField(CThostFtdcCancelAccountField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcCancelAccountField", "sssssssssiciscscscsssssscssssicscscscssccsisis",
                               p->TradeCode, p->BankID, p->BankBranchID, p->BrokerID, p->BrokerBranchID, p->TradeDate,
                               p->TradeTime, p->BankSerial, p->TradingDay, p->PlateSerial, p->LastFragment,
                               p->SessionID, p->CustomerName, p->IdCardType, p->IdentifiedCardNo, p->Gender,
                               p->CountryCode, p->CustType, p->Address, p->ZipCode, p->Telephone, p->MobilePhone,
                               p->Fax, p->EMail, p->MoneyAccountStatus, p->BankAccount, p->BankPassWord, p->AccountID,
                               p->Password, p->InstallID, p->VerifyCertNoFlag, p->CurrencyID, p->CashExchangeCode,
                               p->Digest, p->BankAccType, p->DeviceID, p->BankSecuAccType, p->BrokerIDByBank,
                               p->BankSecuAcc, p->BankPwdFlag, p->SecuPwdFlag, p->OperNo, p->TID, p->UserID, p->ErrorID,
                               p->ErrorMsg);
}

CThostFtdcCancelAccountField *from_CThostFtdcCancelAccountField(PyObject * p) {
    CThostFtdcCancelAccountField *t = (CThostFtdcCancelAccountField *) calloc(1, sizeof(CThostFtdcCancelAccountField));
    memset(t, 0, sizeof(CThostFtdcCancelAccountField));
    strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
    strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
    strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
    strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
    strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
    strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->PlateSerial = PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
    t->LastFragment = PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
    t->IdCardType = PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
    strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
    t->Gender = PyString_AsString(PyObject_GetAttrString(p, "Gender"))[0];
    strcpy(t->CountryCode, PyString_AsString(PyObject_GetAttrString(p, "CountryCode")));
    t->CustType = PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
    strcpy(t->Address, PyString_AsString(PyObject_GetAttrString(p, "Address")));
    strcpy(t->ZipCode, PyString_AsString(PyObject_GetAttrString(p, "ZipCode")));
    strcpy(t->Telephone, PyString_AsString(PyObject_GetAttrString(p, "Telephone")));
    strcpy(t->MobilePhone, PyString_AsString(PyObject_GetAttrString(p, "MobilePhone")));
    strcpy(t->Fax, PyString_AsString(PyObject_GetAttrString(p, "Fax")));
    strcpy(t->EMail, PyString_AsString(PyObject_GetAttrString(p, "EMail")));
    t->MoneyAccountStatus = PyString_AsString(PyObject_GetAttrString(p, "MoneyAccountStatus"))[0];
    strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
    strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
    strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
    strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    t->VerifyCertNoFlag = PyString_AsString(PyObject_GetAttrString(p, "VerifyCertNoFlag"))[0];
    strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
    t->CashExchangeCode = PyString_AsString(PyObject_GetAttrString(p, "CashExchangeCode"))[0];
    strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));
    t->BankAccType = PyString_AsString(PyObject_GetAttrString(p, "BankAccType"))[0];
    strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
    t->BankSecuAccType = PyString_AsString(PyObject_GetAttrString(p, "BankSecuAccType"))[0];
    strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
    strcpy(t->BankSecuAcc, PyString_AsString(PyObject_GetAttrString(p, "BankSecuAcc")));
    t->BankPwdFlag = PyString_AsString(PyObject_GetAttrString(p, "BankPwdFlag"))[0];
    t->SecuPwdFlag = PyString_AsString(PyObject_GetAttrString(p, "SecuPwdFlag"))[0];
    strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
    t->TID = PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    t->ErrorID = PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
    strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));

    return t;
};

PyObject *new_CThostFtdcChangeAccountField(CThostFtdcChangeAccountField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcChangeAccountField", "sssssssssiciscscscsssssscsssssscicssccisis",
                               p->TradeCode, p->BankID, p->BankBranchID, p->BrokerID, p->BrokerBranchID, p->TradeDate,
                               p->TradeTime, p->BankSerial, p->TradingDay, p->PlateSerial, p->LastFragment,
                               p->SessionID, p->CustomerName, p->IdCardType, p->IdentifiedCardNo, p->Gender,
                               p->CountryCode, p->CustType, p->Address, p->ZipCode, p->Telephone, p->MobilePhone,
                               p->Fax, p->EMail, p->MoneyAccountStatus, p->BankAccount, p->BankPassWord,
                               p->NewBankAccount, p->NewBankPassWord, p->AccountID, p->Password, p->BankAccType,
                               p->InstallID, p->VerifyCertNoFlag, p->CurrencyID, p->BrokerIDByBank, p->BankPwdFlag,
                               p->SecuPwdFlag, p->TID, p->Digest, p->ErrorID, p->ErrorMsg);
}

CThostFtdcChangeAccountField *from_CThostFtdcChangeAccountField(PyObject * p) {
    CThostFtdcChangeAccountField *t = (CThostFtdcChangeAccountField *) calloc(1, sizeof(CThostFtdcChangeAccountField));
    memset(t, 0, sizeof(CThostFtdcChangeAccountField));
    strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
    strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
    strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
    strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
    strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
    strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
    strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
    t->PlateSerial = PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
    t->LastFragment = PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
    t->SessionID = PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
    strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
    t->IdCardType = PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
    strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
    t->Gender = PyString_AsString(PyObject_GetAttrString(p, "Gender"))[0];
    strcpy(t->CountryCode, PyString_AsString(PyObject_GetAttrString(p, "CountryCode")));
    t->CustType = PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
    strcpy(t->Address, PyString_AsString(PyObject_GetAttrString(p, "Address")));
    strcpy(t->ZipCode, PyString_AsString(PyObject_GetAttrString(p, "ZipCode")));
    strcpy(t->Telephone, PyString_AsString(PyObject_GetAttrString(p, "Telephone")));
    strcpy(t->MobilePhone, PyString_AsString(PyObject_GetAttrString(p, "MobilePhone")));
    strcpy(t->Fax, PyString_AsString(PyObject_GetAttrString(p, "Fax")));
    strcpy(t->EMail, PyString_AsString(PyObject_GetAttrString(p, "EMail")));
    t->MoneyAccountStatus = PyString_AsString(PyObject_GetAttrString(p, "MoneyAccountStatus"))[0];
    strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
    strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
    strcpy(t->NewBankAccount, PyString_AsString(PyObject_GetAttrString(p, "NewBankAccount")));
    strcpy(t->NewBankPassWord, PyString_AsString(PyObject_GetAttrString(p, "NewBankPassWord")));
    strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
    strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
    t->BankAccType = PyString_AsString(PyObject_GetAttrString(p, "BankAccType"))[0];
    t->InstallID = PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
    t->VerifyCertNoFlag = PyString_AsString(PyObject_GetAttrString(p, "VerifyCertNoFlag"))[0];
    strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
    strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
    t->BankPwdFlag = PyString_AsString(PyObject_GetAttrString(p, "BankPwdFlag"))[0];
    t->SecuPwdFlag = PyString_AsString(PyObject_GetAttrString(p, "SecuPwdFlag"))[0];
    t->TID = PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
    strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));
    t->ErrorID = PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
    strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));

    return t;
};

PyObject *new_CThostFtdcSecAgentACIDMapField(CThostFtdcSecAgentACIDMapField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcSecAgentACIDMapField", "sssss",
                               p->BrokerID, p->UserID, p->AccountID, p->CurrencyID, p->BrokerSecAgentID);
}

CThostFtdcSecAgentACIDMapField *from_CThostFtdcSecAgentACIDMapField(PyObject * p) {
    CThostFtdcSecAgentACIDMapField *t = (CThostFtdcSecAgentACIDMapField *) calloc(1,
                                                                                  sizeof(CThostFtdcSecAgentACIDMapField));
    memset(t, 0, sizeof(CThostFtdcSecAgentACIDMapField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
    strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
    strcpy(t->BrokerSecAgentID, PyString_AsString(PyObject_GetAttrString(p, "BrokerSecAgentID")));

    return t;
};

PyObject *new_CThostFtdcQrySecAgentACIDMapField(CThostFtdcQrySecAgentACIDMapField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQrySecAgentACIDMapField", "ssss",
                               p->BrokerID, p->UserID, p->AccountID, p->CurrencyID);
}

CThostFtdcQrySecAgentACIDMapField *from_CThostFtdcQrySecAgentACIDMapField(PyObject * p) {
    CThostFtdcQrySecAgentACIDMapField *t = (CThostFtdcQrySecAgentACIDMapField *) calloc(1,
                                                                                        sizeof(CThostFtdcQrySecAgentACIDMapField));
    memset(t, 0, sizeof(CThostFtdcQrySecAgentACIDMapField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
    strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));

    return t;
};

PyObject *new_CThostFtdcUserRightsAssignField(CThostFtdcUserRightsAssignField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcUserRightsAssignField", "ssi",
                               p->BrokerID, p->UserID, p->DRIdentityID);
}

CThostFtdcUserRightsAssignField *from_CThostFtdcUserRightsAssignField(PyObject * p) {
    CThostFtdcUserRightsAssignField *t = (CThostFtdcUserRightsAssignField *) calloc(1,
                                                                                    sizeof(CThostFtdcUserRightsAssignField));
    memset(t, 0, sizeof(CThostFtdcUserRightsAssignField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    t->DRIdentityID = PyInt_AsLong(PyObject_GetAttrString(p, "DRIdentityID"));

    return t;
};

PyObject *new_CThostFtdcBrokerUserRightAssignField(CThostFtdcBrokerUserRightAssignField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcBrokerUserRightAssignField", "sii",
                               p->BrokerID, p->DRIdentityID, p->Tradeable);
}

CThostFtdcBrokerUserRightAssignField *from_CThostFtdcBrokerUserRightAssignField(PyObject * p) {
    CThostFtdcBrokerUserRightAssignField *t = (CThostFtdcBrokerUserRightAssignField *) calloc(1,
                                                                                              sizeof(CThostFtdcBrokerUserRightAssignField));
    memset(t, 0, sizeof(CThostFtdcBrokerUserRightAssignField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    t->DRIdentityID = PyInt_AsLong(PyObject_GetAttrString(p, "DRIdentityID"));
    t->Tradeable = PyInt_AsLong(PyObject_GetAttrString(p, "Tradeable"));

    return t;
};

PyObject *new_CThostFtdcDRTransferField(CThostFtdcDRTransferField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcDRTransferField", "iiss",
                               p->OrigDRIdentityID, p->DestDRIdentityID, p->OrigBrokerID, p->DestBrokerID);
}

CThostFtdcDRTransferField *from_CThostFtdcDRTransferField(PyObject * p) {
    CThostFtdcDRTransferField *t = (CThostFtdcDRTransferField *) calloc(1, sizeof(CThostFtdcDRTransferField));
    memset(t, 0, sizeof(CThostFtdcDRTransferField));
    t->OrigDRIdentityID = PyInt_AsLong(PyObject_GetAttrString(p, "OrigDRIdentityID"));
    t->DestDRIdentityID = PyInt_AsLong(PyObject_GetAttrString(p, "DestDRIdentityID"));
    strcpy(t->OrigBrokerID, PyString_AsString(PyObject_GetAttrString(p, "OrigBrokerID")));
    strcpy(t->DestBrokerID, PyString_AsString(PyObject_GetAttrString(p, "DestBrokerID")));

    return t;
};

PyObject *new_CThostFtdcFensUserInfoField(CThostFtdcFensUserInfoField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcFensUserInfoField", "ssc",
                               p->BrokerID, p->UserID, p->LoginMode);
}

CThostFtdcFensUserInfoField *from_CThostFtdcFensUserInfoField(PyObject * p) {
    CThostFtdcFensUserInfoField *t = (CThostFtdcFensUserInfoField *) calloc(1, sizeof(CThostFtdcFensUserInfoField));
    memset(t, 0, sizeof(CThostFtdcFensUserInfoField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    t->LoginMode = PyString_AsString(PyObject_GetAttrString(p, "LoginMode"))[0];

    return t;
};

PyObject *new_CThostFtdcCurrTransferIdentityField(CThostFtdcCurrTransferIdentityField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcCurrTransferIdentityField", "i",
                               p->IdentityID);
}

CThostFtdcCurrTransferIdentityField *from_CThostFtdcCurrTransferIdentityField(PyObject * p) {
    CThostFtdcCurrTransferIdentityField *t = (CThostFtdcCurrTransferIdentityField *) calloc(1,
                                                                                            sizeof(CThostFtdcCurrTransferIdentityField));
    memset(t, 0, sizeof(CThostFtdcCurrTransferIdentityField));
    t->IdentityID = PyInt_AsLong(PyObject_GetAttrString(p, "IdentityID"));

    return t;
};

PyObject *new_CThostFtdcLoginForbiddenUserField(CThostFtdcLoginForbiddenUserField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcLoginForbiddenUserField", "sss",
                               p->BrokerID, p->UserID, p->IPAddress);
}

CThostFtdcLoginForbiddenUserField *from_CThostFtdcLoginForbiddenUserField(PyObject * p) {
    CThostFtdcLoginForbiddenUserField *t = (CThostFtdcLoginForbiddenUserField *) calloc(1,
                                                                                        sizeof(CThostFtdcLoginForbiddenUserField));
    memset(t, 0, sizeof(CThostFtdcLoginForbiddenUserField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
    strcpy(t->IPAddress, PyString_AsString(PyObject_GetAttrString(p, "IPAddress")));

    return t;
};

PyObject *new_CThostFtdcQryLoginForbiddenUserField(CThostFtdcQryLoginForbiddenUserField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcQryLoginForbiddenUserField", "ss",
                               p->BrokerID, p->UserID);
}

CThostFtdcQryLoginForbiddenUserField *from_CThostFtdcQryLoginForbiddenUserField(PyObject * p) {
    CThostFtdcQryLoginForbiddenUserField *t = (CThostFtdcQryLoginForbiddenUserField *) calloc(1,
                                                                                              sizeof(CThostFtdcQryLoginForbiddenUserField));
    memset(t, 0, sizeof(CThostFtdcQryLoginForbiddenUserField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));

    return t;
};

PyObject *new_CThostFtdcMulticastGroupInfoField(CThostFtdcMulticastGroupInfoField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcMulticastGroupInfoField", "sis",
                               p->GroupIP, p->GroupPort, p->SourceIP);
}

CThostFtdcMulticastGroupInfoField *from_CThostFtdcMulticastGroupInfoField(PyObject * p) {
    CThostFtdcMulticastGroupInfoField *t = (CThostFtdcMulticastGroupInfoField *) calloc(1,
                                                                                        sizeof(CThostFtdcMulticastGroupInfoField));
    memset(t, 0, sizeof(CThostFtdcMulticastGroupInfoField));
    strcpy(t->GroupIP, PyString_AsString(PyObject_GetAttrString(p, "GroupIP")));
    t->GroupPort = PyInt_AsLong(PyObject_GetAttrString(p, "GroupPort"));
    strcpy(t->SourceIP, PyString_AsString(PyObject_GetAttrString(p, "SourceIP")));

    return t;
};

PyObject *new_CThostFtdcTradingAccountReserveField(CThostFtdcTradingAccountReserveField * p) {
    if (p == NULL) {
        Py_INCREF(Py_None);
        return Py_None;

    }
    return PyObject_CallMethod(mod, "CThostFtdcTradingAccountReserveField", "ssds",
                               p->BrokerID, p->AccountID, p->Reserve, p->CurrencyID);
}

CThostFtdcTradingAccountReserveField *from_CThostFtdcTradingAccountReserveField(PyObject * p) {
    CThostFtdcTradingAccountReserveField *t = (CThostFtdcTradingAccountReserveField *) calloc(1,
                                                                                              sizeof(CThostFtdcTradingAccountReserveField));
    memset(t, 0, sizeof(CThostFtdcTradingAccountReserveField));
    strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
    strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
    t->Reserve = PyFloat_AsDouble(PyObject_GetAttrString(p, "Reserve"));
    strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));

    return t;
};
