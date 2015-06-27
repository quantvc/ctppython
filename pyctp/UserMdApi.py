# encoding:utf-8


import md_api


class Spi(object):
    """

    """

    def __init__(self, api):
        """

        :return:
        """
        self.api = api

    def OnFrontConnected(self):
        """
        当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用。

        """
        pass

    def OnFrontDisconnected(self, nReason):
        """
        当客户端与交易后台通信连接断开时，该方法被调用。当发生这个情况后，API会自动重新连接，客户端可不做处理。
        @param nReason 错误原因
               0x1001 网络读失败
               0x1002 网络写失败
               0x2001 接收心跳超时
               0x2002 发送心跳失败
               0x2003 收到错误报文
        :return:
        """
        pass

    def OnHeartBeatWarning(self, nTimeLapse):
        """
         心跳超时警告。当长时间未收到报文时，该方法被调用。
        :param nTimeLapse:int, 距离上次接收报文的时间
        :return:
        """
        pass

    def OnRspUserLogin(self, pRspUserLogin, pRspInfo, nRequestID, bIsLast):
        """
         登录请求响应
        :param pRspUserLogin:
        :param pRspInfo:
        :param nRequestID: int
        :param bIsLast: bool
        :return:
        """
        pass

    def OnRspUserLogout(self, pUserLogout, pRspInfo, nRequestID, bIsLast):
        """
        登出请求响应
        :param pUserLogout:
        :param pRspInfo:
        :param nRequestID:
        :param bIsLast:
        :return:
        """
        pass

    def OnRspError(self, pRspInfo, nRequestID, bIsLast):
        """
        错误应答
        :param pRspInfo:
        :param nRequestID:
        :param bIsLast:
        :return:
        """
        pass

    def OnRspSubMarketData(self, pSpecificInstrument, pRspInfo, nRequestID, bIsLast):
        """
        订阅行情应答
        :return:
        """
        pass

    def OnRspUnSubMarketData(self, pSpecificInstrument, pRspInfo, nRequestID, bIsLast):
        """
        取消订阅行情应答
        :return:
        """
        pass

    def OnRspSubForQuoteRsp(self, pSpecificInstrument, pRspInfo, nRequestID, bIsLast):
        """
        订阅询价应答
        :return:
        """
        pass

    def OnRspUnSubForQuoteRsp(self, pSpecificInstrument, pRspInfo, nRequestID, bIsLast):
        """
        取消订阅询价应答
        :return:
        """
        pass

    def OnRtnDepthMarketData(self, pDepthMarketData):
        """
        深度行情通知
        :return:
        """
        pass

    def OnRtnForQuoteRsp(self, pForQuoteRsp):
        """
        询价通知
        :return:
        """
        pass


class MdApi(object):
    """

    """

    def __init__(self, flow_path="", udp=False, multi_cast=False):
        """

        :return:
        """
        self.api = md_api.create_MdApi(flow_path, udp, multi_cast)

    def Release(self):
        """
        删除接口对象本身
        不再使用本接口对象时,调用该函数删除接口对象
        :return:
        """
        md_api.Release(self.api)

    def Init(self):
        """
        初始化运行环境,只有调用后,接口才开始工作
        :return:
        """
        md_api.Init(self.api)

    def Join(self):
        """
        等待接口线程结束运行
        :return:
        """

        md_api.Join(self.api)

    def RegisterFront(self, address):
        """
        注册前置机网络地址
        pszFrontAddress：前置机网络地址。
        网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:17001”。
        “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”17001”代表服务器端口号。
        :return:
        """
        md_api.RegisterFront(self.api, address)

    def RegisterNameServer(self, ns_address):
        """

        注册名字服务器网络地址
         pszNsAddress：名字服务器网络地址。
        网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:12001”。
        “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”12001”代表服务器端口号。
        RegisterNameServer优先于RegisterFront

        :param ns_address:
        :return:
        """
        md_api.RegisterNameServer(self.api, ns_address)

    def RegisterFensUserInfo(self, user_info):
        """
        注册名字服务器用户信息
        pFensUserInfo：用户信息。
        :param user_info:
        :return:
        """
        md_api.RegisterFensUserInfo(self.api, user_info)

    def RegisterSpi(self, md_spi):
        """
        注册回调接口
        :param md_spi:
        :return:
        """
        md_api.RegisterSpi(self.api, md_spi)

    def SubscribeMarketData(self, instrument_id, count):
        """
        订阅行情
        ppInstrumentID 合约ID
        nCount 要订阅/退订行情的合约个数
        :return:
        """
        md_api.SubscribeMarketData(self.api, instrument_id, count)

    def UnSubscribeMarketData(self, instrument_id, count):
        """
        退订行情
        :param instrument_id: 合约ID
        :param count: 要订阅/退订行情的合约个数
        :return:
        """
        md_api.UnSubscribeMarketData(self.api, instrument_id, count)

    def SubscribeForQuoteRsp(self, instrument_ID, count):
        """
        订阅询价
        :param instrument_ID:合约ID
        :param count: 要订阅/退订行情的合约个数
        :return:
        """
        md_api.SubscribeForQuoteRsp(self.api, instrument_ID, count)

    def UnSubscribeForQuoteRsp(self, instrument_ID, count):
        """
        退订询价
        :param instrument_ID: 合约ID
        :param count: 要订阅/退订行情的合约个数
        :return:
        """
        md_api.UnSubscribeForQuoteRsp(self.api, instrument_ID, count)

    def ReqUserLogin(self, user_login, request_id):
        """
        用户登录请求
        :param user_login:
        :param request_id:
        :return:
        """
        md_api.ReqUserLogin(self.api, user_login, request_id)

    def ReqUserLogout(self, logout, request_id):
        """
        登出请求
        :param logout:
        :param request_id:
        :return:
        """
        md_api.ReqUserLogout(self.api, logout, request_id)
