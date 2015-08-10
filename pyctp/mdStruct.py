# encoding:utf-8


class Base(object):
    """
    """

    def to_dict(self):
        """

        :return:
        """

        return {key: value for key, value in self.__dict__.iteritems() if value}

    def __repr__(self):
        """
        :return:
        """
        return "<%s>" % ",".join(["%s:%s" % (item, value) for item, value in self.__dict__.iteritems()])


class CThostFtdcRspUserLoginField(Base):
    def __init__(self, TradingDay, LoginTime, BrokerID, UserID, SystemName, FrontID, SessionID, MaxOrderRef, SHFETime,
                 DCETime, CZCETime, FFEXTime, INETime):
        """

        :param TradingDay:
        :param LoginTime:
        :param BrokerID:
        :param UserID:
        :param SystemName:
        :param FrontID:
        :param SessionID:
        :param MaxOrderRef:
        :param SHFETime:
        :param DCETime:
        :param CZCETime:
        :param FFEXTime:
        :param INETime:
        :return:
        """
        self.TradingDay = TradingDay
        self.LoginTime = LoginTime
        self.BrokerID = BrokerID
        self.UserID = UserID
        self.SystemName = SystemName
        self.FrontID = int(FrontID)
        self.SessionID = int(SessionID)
        self.MaxOrderRef = MaxOrderRef
        self.SHFETime = SHFETime
        self.DCETime = DCETime
        self.CZCETime = CZCETime
        self.FFEXTime = FFEXTime
        self.INETime = INETime


class CThostFtdcRspInfoField(Base):
    def __init__(self, ErrorID, ErrorMsg):
        self.ErrorID = int(ErrorID)
        self.ErrorMsg = ErrorMsg


class CThostFtdcSpecificInstrumentField(Base):
    def __init__(self, InstrumentID):
        self.InstrumentID = InstrumentID


class CThostFtdcForQuoteRspField(Base):
    def __init__(self, TradingDay, InstrumentID, ForQuoteSysID, ForQuoteTime, ActionDay, ExchangeID):
        self.TradingDay = TradingDay
        self.InstrumentID = InstrumentID
        self.ForQuoteSysID = ForQuoteSysID
        self.ForQuoteTime = ForQuoteTime
        self.ActionDay = ActionDay
        self.ExchangeID = ExchangeID


class CThostFtdcFensUserInfoField(Base):
    def __init__(self, BrokerID, UserID, LoginMode):
        self.BrokerID = BrokerID
        self.UserID = UserID
        self.LoginMode = LoginMode


class CThostFtdcReqUserLoginField(Base):
    def __init__(self, TradingDay, BrokerID, UserID, Password, UserProductInfo, InterfaceProductInfo, ProtocolInfo,
                 MacAddress, OneTimePassword, ClientIPAddress):
        self.TradingDay = TradingDay
        self.BrokerID = BrokerID
        self.UserID = UserID
        self.Password = Password
        self.UserProductInfo = UserProductInfo
        self.InterfaceProductInfo = InterfaceProductInfo
        self.ProtocolInfo = ProtocolInfo
        self.MacAddress = MacAddress
        self.OneTimePassword = OneTimePassword
        self.ClientIPAddress = ClientIPAddress


class CThostFtdcForceUserLogoutField(Base):
    def __init__(self, BrokerID, UserID):
        self.BrokerID = BrokerID
        self.UserID = UserID


class CThostFtdcUserLogoutField(Base):
    def __init__(self, BrokerID, UserID):
        self.BrokerID = BrokerID
        self.UserID = UserID


RspUserLogin = CThostFtdcRspUserLoginField
RspInfo = CThostFtdcRspInfoField
SpecificInstrument = CThostFtdcSpecificInstrumentField
ForQuoteRsp = CThostFtdcForQuoteRspField
FensUserInfo = CThostFtdcFensUserInfoField
ReqUserLogin = CThostFtdcReqUserLoginField
ForceUserLogout = CThostFtdcForceUserLogoutField
UserLogout = CThostFtdcUserLogoutField
