#include "MdApi.h"
#include 'trader_struct.h'

static PyObject *create_MdApi(PyObject * self, PyObject * args) {
    char *path;
    bool bIsUsingUdp;
    bool bIsMulticast;

    if (!PyArg_ParseTuple(args, "sbb", &path, &bIsUsingUdp, &bIsMulticast)) {
        return NULL;
    }
    PyObject *api = CThostFtdcMdApi::CreateFtdcMdApi(path, bIsUsingUdp, bIsMulticast);
    Py_INCREF(api);
    return api;

}

static PyObject *Md_Release(PyObject * self, PyObject * args) {
    PyObject *py_api = PyTuple_GetItem(args, 0);
    CThostFtdcMdApi *api = (CThostFtdcMdApi *) py_api;
    api->Release();
    Py_XDECREF(py_api);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *Md_Init(PyObject * self, PyObject * args) {
    PyObject *py_api = PyTuple_GetItem(args, 0);
    CThostFtdcMdApi *api = (CThostFtdcMdApi *) py_api;
    api->Init();
    Py_XDECREF(py_api);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *Md_Join(PyObject * self, PyObject * args) {
    PyObject *py_api = PyTuple_GetItem(args, 0);
    CThostFtdcMdApi *api = (CThostFtdcMdApi *) py_api;

    PyObject *response = Py_BuildValue("i", api->Join());

    Py_XDECREF(py_api);
    return response;

}

static PyObject *Md_RegisterFront(PyObject * self, PyObject * args) {
    PyObject *py_api;
    char *ipaddress;
    if (!PyArg_ParseTuple(args, "Os", &py_api, &ipaddress)) {
        return NULL;
    }
    CThostFtdcMdApi *api = (CThostFtdcMdApi *) py_api;
    api->RegisterFront(ipaddress);
    Py_XDECREF(py_api);
    Py_INCREF(Py_None);
    return Py_None;
}


static PyObject *Md_RegisterNameServer(PyObject * self, PyObject * args) {

    PyObject *py_api;
    char *nameserver;
    if (!PyArg_ParseTuple(args, "Os", &py_api, &nameserver)) {
        return NULL;
    }
    CThostFtdcMdApi *api = (CThostFtdcMdApi *) py_api;
    api->RegisterNameServer(nameserver);
    Py_XDECREF(py_api);
    Py_INCREF(Py_None);
    return Py_None;
}


static PyObject *Md_RegisterFensUserInfo(PyObject * self, PyObject * args) {
    PyObject *py_api;
    PyObject *py_user_info;

    if (!PyArg_ParseTuple(args, "OO", &py_api, &py_user_info)) {
        return NULL;
    }

    CThostFtdcFensUserInfoField *user_info = from_CThostFtdcFensUserInfoField(py_user_info);
    CThostFtdcMdApi *api = (CThostFtdcMdApi *) py_api;

    api->RegisterFensUserInfo(user_info);

    Py_XDECREF(py_api);
    Py_INCREF(Py_None);
    return (Py_None);


}

static PyObject *Md_RegisterSpi(PyObject * self, PyObject * args) {

    PyObject *py_api;
    PyObject *py_spi;
    if (!PyArg_ParseTuple(args, "OO", &py_api, &py_spi)) {
        return NULL;
    }
    CThostFtdcMdApi *api = (CThostFtdcMdApi *) py_api;

    CThostFtdcMdSpi *spi = new MySpiWrapper(py_spi);
    api->RegisterSpi(spi);

    Py_XDECREF(py_api);
    Py_XDECREF(py_spi);
    Py_INCREF(Py_None);
    return Py_None;

}


static PyObject *Md_SubscribeMarketData(PyObject * self, PyObject * args) {

    PyObject *py_api = PyTuple_GetItem(args, 0);
    CThostFtdcMdApi *api = (CThostFtdcMdApi *) py_api;

    PyObject *instruments = PyTuple_GetItem(args, 1);
    PyObject *py_count = PyTuple_GetItem(args, 2);
    int count = PyInt_AS_LONG(py_count);

    int length = PySequence_Length(instruments);
    char **inst_list = (char **) calloc(length, sizeof(char *));

    for (int i = 0; i < length; i++) {
        inst_list[i] = PyString_AsString(PySequence_GetItem(instruments, i));
    }

    api->SubscribeMarketData(inst_list, count);

    free(inst_list);

    Py_XDECREF(instruments);
    Py_XDECREF(py_count);

    Py_XDECREF(py_api);

    Py_INCREF(Py_None);
    return Py_None;

}


static PyObject *Md_UnSubscribeMarketData(PyObject * self, PyObject * args) {

    PyObject *py_api = PyTuple_GetItem(args, 0);
    CThostFtdcMdApi *api = (CThostFtdcMdApi *) py_api;


    PyObject *instruments = PyTuple_GetItem(args, 1);
    PyObject *py_count = PyTuple_GetItem(args, 2);
    int count = PyInt_AS_LONG(py_count);

    int length = PySequence_Length(instruments);
    char **inst_list = (char **) calloc(length, sizeof(char *));

    for (int i = 0; i < length; i++) {
        inst_list[i] = PyString_AsString(PySequence_GetItem(instruments, i));
    }

    api->UnSubscribeMarketData(inst_list, count);

    free(inst_list);

    Py_XDECREF(instruments);
    Py_XDECREF(py_count);

    Py_XDECREF(py_api);

    Py_INCREF(Py_None);
    return Py_None;

}

static PyObject *Md_SubscribeForQuoteRsp(PyObject * self, PyObject * args) {

    PyObject *py_api = PyTuple_GetItem(args, 0);
    CThostFtdcMdApi *api = (CThostFtdcMdApi *) py_api;


    PyObject *instruments = PyTuple_GetItem(args, 1);
    PyObject *py_count = PyTuple_GetItem(args, 2);
    int count = PyInt_AS_LONG(py_count);

    int length = PySequence_Length(instruments);
    char **inst_list = (char **) calloc(length, sizeof(char *));

    for (int i = 0; i < length; i++) {
        inst_list[i] = PyString_AsString(PySequence_GetItem(instruments, i));
    }

    api->SubscribeForQuoteRsp(inst_list, count);

    free(inst_list);

    Py_XDECREF(instruments);
    Py_XDECREF(py_count);

    Py_XDECREF(py_api);

    Py_INCREF(Py_None);
    return Py_None;
}


static PyObject *Md_UnSubscribeForQuoteRsp(PyObject * self, PyObject * args) {

    PyObject *py_api = PyTuple_GetItem(args, 0);
    CThostFtdcMdApi *api = (CThostFtdcMdApi *) py_api;


    PyObject *instruments = PyTuple_GetItem(args, 1);
    PyObject *py_count = PyTuple_GetItem(args, 2);
    int count = PyInt_AS_LONG(py_count);

    int length = PySequence_Length(instruments);
    char **inst_list = (char **) calloc(length, sizeof(char *));

    for (int i = 0; i < length; i++) {
        inst_list[i] = PyString_AsString(PySequence_GetItem(instruments, i));
    }

    api->UnSubscribeForQuoteRsp(inst_list, count);

    free(inst_list);

    Py_XDECREF(instruments);
    Py_XDECREF(py_count);

    Py_XDECREF(py_api);

    Py_INCREF(Py_None);
    return Py_None;

}

static PyObject *Md_ReqUserLogin(PyObject * self, PyObject * args) {

    PyObject *py_api;
    PyObject *py_login;

    int nRequestID;
    if (!PyArg_ParseTuple(args, "OOi", &py_api, &py_login, &nRequestID)) {
        return NULL;
    }
    CThostFtdcMdApi *api = (CThostFtdcMdApi *) py_api;
    CThostFtdcReqUserLoginField *login_field = from_CThostFtdcReqUserLoginField(py_login);
    PyObject *response = Py_BuildValue("i", api->ReqUserLogin(login_field, nRequestID));
    free(login_field);
    Py_XDECREF(py_api);
    Py_XDECREF(py_login);
    return response;

}

static PyObject *Md_ReqUserLogout(PyObject * self, PyObject * args) {

    PyObject *py_api;
    PyObject *py_logout;
    int nRequestID;

    if (!PyArg_ParseTuple(args, "OOi", &py_api, &py_logout, &nRequestID)) {
        return NULL;
    }

    CThostFtdcMdApi *api = (CThostFtdcMdApi *) py_api;
    CThostFtdcUserLogoutField *logout_field = from_CThostFtdcUserLogoutField(py_logout);
    PyObject *response = Py_BuildValue("i", api->ReqUserLogout(logout_field, nRequestID));
    free(logout_field);
    Py_XDECREF(py_api);
    Py_XDECREF(py_logout);
    return response;
}

#ifndef PyMODINIT_FUNC    /* declarations for DLL import/export */
#define PyMODINIT_FUNC void
#endif

// todo fix __declspec(dllexport)

PyMODINIT_FUNC initmd_api() {
    static PyMethodDef MdMethods[] = {
            {"create_MdApi",           create_MdApi,              METH_VARARGS},
            {"Release",                Md_Release,                METH_VARARGS},
            {"Join",                   Md_Join,                   METH_VARARGS},
            {"Init",                   Md_Init,                   METH_VARARGS},
            {"RegisterFront",          Md_RegisterFront,          METH_VARARGS},
            {"RegisterNameServer",     Md_RegisterNameServer,     METH_VARARGS},
            {"RegisterFensUserInfo",   Md_RegisterFensUserInfo,   METH_VARARGS},
            {"RegisterSpi",            Md_RegisterSpi,            METH_VARARGS},
            {"SubscribeMarketData",    Md_SubscribeMarketData,    METH_VARARGS},
            {"UnSubscribeMarketData",  Md_UnSubscribeMarketData,  METH_VARARGS},
            {"SubscribeForQuoteRsp",   Md_SubscribeForQuoteRsp,   METH_VARARGS},
            {"UnSubscribeForQuoteRsp", Md_UnSubscribeForQuoteRsp, METH_VARARGS},
            {"ReqUserLogin",           Md_ReqUserLogin,           METH_VARARGS},
            {"ReqUserLogout",          Md_ReqUserLogout,          METH_VARARGS},
            {NULL,                     NULL,                      0},

    };
    Py_InitModule("md_api", MdMethods);
    PyEval_InitThreads();

}


