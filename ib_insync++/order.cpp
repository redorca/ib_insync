// ******************************************************************************************
//
//   Copyright (2023) Bill Rees, All Rights Reserved.
//
// ******************************************************************************************

#include <stdlib.h>

#define EPOCH = dt.datetime(1970, 1, 1, tzinfo=dt.timezone.utc)
#define UNSET_INTEGER   (2 ** 31 - 1)
#define UNSET_DOUBLE   sys.float_info.max

class Order {
Public:
Private:
    int     orderId = 0;
    int     clientId = 0;
    int     permId = 0;
    string *action = '';
    float   totalQuantity = 0.0;
    string *orderType = '';
    float   lmtPrice = UNSET_DOUBLE;
    float   auxPrice = UNSET_DOUBLE;
    string *tif = '';
    string *activeStartTime = '';
    string *activeStopTime = '';
    string *ocaGroup = '';
    int     ocaType = 0;
    string *orderRef = '';
    bool    transmit = True;
    int     parentId = 0;
    bool    blockOrder = False;
    bool    sweepToFill = False;
    int     displaySize = 0;
    int     triggerMethod = 0;
    bool    outsideRth = False;
    bool    hidden = False;
    string *goodAfterTime = '';
    string *goodTillDate = '';
    string *rule80A = '';
    bool    allOrNone = False;
    int     minQty = UNSET_INTEGER;
    float   percentOffset = UNSET_DOUBLE;
    bool    overridePercentageConstraints = False;
    float   trailStopPrice = UNSET_DOUBLE;
    float   trailingPercent = UNSET_DOUBLE;
    string *faGroup = '';
    string *faProfile = ''  # obsolete;
    string *faMethod = '';
    string *faPercentage = '';
    string *designatedLocation = '';
    string *openClose = "O";
    int     origin = 0;
    int     shortSaleSlot = 0;
    int     exemptCode = -1;
    float   discretionaryAmt = 0.0;
    bool    eTradeOnly = False;
    bool    firmQuoteOnly = False;
    float   nbboPriceCap = UNSET_DOUBLE;
    bool    optOutSmartRouting = False;
    int     auctionStrategy = 0;
    float   startingPrice = UNSET_DOUBLE;
    float   stockRefPrice = UNSET_DOUBLE;
    float   delta = UNSET_DOUBLE;
    float   stockRangeLower = UNSET_DOUBLE;
    float   stockRangeUpper = UNSET_DOUBLE;
    bool    randomizePrice = False;
    bool    randomizeSize = False;
    float   volatility = UNSET_DOUBLE;
    int     volatilityType = UNSET_INTEGER;
    string *deltaNeutralOrderType = '';
    float   deltaNeutralAuxPrice = UNSET_DOUBLE;
    int     deltaNeutralConId = 0;
    string *deltaNeutralSettlingFirm = '';
    string *deltaNeutralClearingAccount = '';
    string *deltaNeutralClearingIntent = '';
    string *deltaNeutralOpenClose = '';
    bool    deltaNeutralShortSale = False;
    int     deltaNeutralShortSaleSlot = 0;
    string *deltaNeutralDesignatedLocation = '';
    bool    continuousUpdate = False;
    int     referencePriceType = UNSET_INTEGER;
    float   basisPoints = UNSET_DOUBLE;
    int     basisPointsType = UNSET_INTEGER;
    int     scaleInitLevelSize = UNSET_INTEGER;
    int     scaleSubsLevelSize = UNSET_INTEGER;
    float   scalePriceIncrement = UNSET_DOUBLE;
    float   scalePriceAdjustValue = UNSET_DOUBLE;
    int     scalePriceAdjustInterval = UNSET_INTEGER;
    float   scaleProfitOffset = UNSET_DOUBLE;
    bool    scaleAutoReset = False;
    int     scaleInitPosition = UNSET_INTEGER;
    int     scaleInitFillQty = UNSET_INTEGER;
    bool    scaleRandomPercent = False;
    string *scaleTable = '';
    string *hedgeType = '';
    string *hedgeParam = '';
    string *account = '';
    string *settlingFirm = '';
    string *clearingAccount = '';
    string *clearingIntent = '';
    string *algoStrategy = '';
    // algoParams: List[TagValue] = field(default_factory=list);
    // smartComboRoutingParams: List[TagValue] = field(default_factory=list);
    string *algoId = '';
    bool    whatIf = False;
    bool    notHeld = False;
    bool    solicited = False;
    string *modelCode = '';
    // orderComboLegs: List['OrderComboLeg'] = field(default_factory=list);
    // orderMiscOptions: List[TagValue] = field(default_factory=list);
    int     referenceContractId = 0;
    float   peggedChangeAmount = 0.0;
    bool    isPeggedChangeAmountDecrease = False;
    float   referenceChangeAmount = 0.0;
    string *referenceExchangeId = '';
    string *adjustedOrderType = '';
    float   triggerPrice = UNSET_DOUBLE;
    float   adjustedStopPrice = UNSET_DOUBLE;
    float   adjustedStopLimitPrice = UNSET_DOUBLE;
    float   adjustedTrailingAmount = UNSET_DOUBLE;
    int     adjustableTrailingUnit = 0;
    float   lmtPriceOffset = UNSET_DOUBLE;
    // conditions: List['OrderCondition'] = field(default_factory=list);
    bool    conditionsCancelOrder = False;
    bool    conditionsIgnoreRth = False;
    string *extOperator = '';
    // softDollarTier: SoftDollarTier = field(default_factory=SoftDollarTier);
    float   cashQty = UNSET_DOUBLE;
    string *mifid2DecisionMaker = '';
    string *mifid2DecisionAlgo = '';
    string *mifid2ExecutionTrader = '';
    string *mifid2ExecutionAlgo = '';
    bool    dontUseAutoPriceForHedge = False;
    bool    isOmsContainer = False;
    bool    discretionaryUpToLimitPrice = False;
    string *autoCancelDate = '';
    float   filledQuantity = UNSET_DOUBLE;
    int     refFuturesConId = 0;
    bool    autoCancelParent = False;
    string *shareholder = '';
    bool    imbalanceOnly = False;
    bool    routeMarketableToBbo = False;
    int     parentPermId = 0;
    bool    usePriceMgmtAlgo = False;
    int     duration = UNSET_INTEGER;
    int     postToAts = UNSET_INTEGER;
    string *advancedErrorOverride = '';
    string *manualOrderTime = '';
    int     minTradeQty = UNSET_INTEGER;
    int     minCompeteSize = UNSET_INTEGER;
    float   competeAgainstBestOffset = UNSET_DOUBLE;
    float   midOffsetAtWhole = UNSET_DOUBLE;
    float   midOffsetAtHalf = UNSET_DOUBLE;
};

class LimitOrder(Order) {
};
class MarketOrder(Order) {
};
class StopOrder(Order) {
};
class StopLimitOrder(Order) {
};
class OrderStatus {
};
class OrderState {
};
class OrderComboLeg {
};
class Trade {
};
class BracketOrder(NamedTuple) {
};
class OrderCondition {
};
class PriceCondition(OrderCondition) {
};
class TimeCondition(OrderCondition) {
};
class MarginCondition(OrderCondition) {
};
class ExecutionCondition(OrderCondition) {
};
class VolumeCondition(OrderCondition) {
};
class PercentChangeCondition(OrderCondition) {
};
