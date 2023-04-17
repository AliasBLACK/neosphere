/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
export const Yoga = function(e) {
    var t = {};

    function i(n) {
        if (t[n]) return t[n].exports;
        var o = t[n] = {
            i: n,
            l: !1,
            exports: {}
        };
        return e[n].call(o.exports, o, o.exports, i), o.l = !0, o.exports
    }
    return i.m = e, i.c = t, i.d = function(e, t, n) {
        i.o(e, t) || Object.defineProperty(e, t, {
            enumerable: !0,
            get: n
        })
    }, i.r = function(e) {
        "undefined" != typeof Symbol && Symbol.toStringTag && Object.defineProperty(e, Symbol.toStringTag, {
            value: "Module"
        }), Object.defineProperty(e, "__esModule", {
            value: !0
        })
    }, i.t = function(e, t) {
        if (1 & t && (e = i(e)), 8 & t) return e;
        if (4 & t && "object" == typeof e && e && e.__esModule) return e;
        var n = Object.create(null);
        if (i.r(n), Object.defineProperty(n, "default", {
                enumerable: !0,
                value: e
            }), 2 & t && "string" != typeof e)
            for (var o in e) i.d(n, o, function(t) {
                return e[t]
            }.bind(null, o));
        return n
    }, i.n = function(e) {
        var t = e && e.__esModule ? function() {
            return e.default
        } : function() {
            return e
        };
        return i.d(t, "a", t), t
    }, i.o = function(e, t) {
        return Object.prototype.hasOwnProperty.call(e, t)
    }, i.p = "", i(i.s = 8)
}([function(e, t, i) {
    "use strict";
    var n, o, r, a, s, l, u, d, g, G, c, Y, f, y, h, p;
    t.__esModule = !0, t.YGAlignCount = 8,
        function(e) {
            e[e.Auto = 0] = "Auto", e[e.FlexStart = 1] = "FlexStart", e[e.Center = 2] = "Center", e[e.FlexEnd = 3] = "FlexEnd", e[e.Stretch = 4] = "Stretch", e[e.Baseline = 5] = "Baseline", e[e.SpaceBetween = 6] = "SpaceBetween", e[e.SpaceAround = 7] = "SpaceAround"
        }(n = t.YGAlign || (t.YGAlign = {})), t.YGAlignToString = function(e) {
            switch (e) {
                case n.Auto:
                    return "auto";
                case n.FlexStart:
                    return "flex-start";
                case n.Center:
                    return "center";
                case n.FlexEnd:
                    return "flex-end";
                case n.Stretch:
                    return "stretch";
                case n.Baseline:
                    return "baseline";
                case n.SpaceBetween:
                    return "space-between";
                case n.SpaceAround:
                    return "space-around"
            }
            return "unknown"
        }, t.YGDimensionCount = 2,
        function(e) {
            e[e.Width = 0] = "Width", e[e.Height = 1] = "Height"
        }(o = t.YGDimension || (t.YGDimension = {})), t.YGDimensionToString = function(e) {
            switch (e) {
                case o.Width:
                    return "width";
                case o.Height:
                    return "height"
            }
            return "unknown"
        },
        function(e) {
            e[e.Inherit = 0] = "Inherit", e[e.LTR = 1] = "LTR", e[e.RTL = 2] = "RTL"
        }(r = t.YGDirection || (t.YGDirection = {})), t.YGDirectionToString = function(e) {
            switch (e) {
                case r.Inherit:
                    return "inherit";
                case r.LTR:
                    return "ltr";
                case r.RTL:
                    return "rtl"
            }
            return "unknown"
        }, t.YGDisplayCount = 2,
        function(e) {
            e[e.Flex = 0] = "Flex", e[e.None = 1] = "None"
        }(a = t.YGDisplay || (t.YGDisplay = {})), t.YGDisplayToString = function(e) {
            switch (e) {
                case a.Flex:
                    return "flex";
                case a.None:
                    return "none"
            }
            return "unknown"
        }, t.YGEdgeCount = 9,
        function(e) {
            e[e.Left = 0] = "Left", e[e.Top = 1] = "Top", e[e.Right = 2] = "Right", e[e.Bottom = 3] = "Bottom", e[e.Start = 4] = "Start", e[e.End = 5] = "End", e[e.Horizontal = 6] = "Horizontal", e[e.Vertical = 7] = "Vertical", e[e.All = 8] = "All"
        }(s = t.YGEdge || (t.YGEdge = {})), t.YGEdgeToString = function(e) {
            switch (e) {
                case s.Left:
                    return "left";
                case s.Top:
                    return "top";
                case s.Right:
                    return "right";
                case s.Bottom:
                    return "bottom";
                case s.Start:
                    return "start";
                case s.End:
                    return "end";
                case s.Horizontal:
                    return "horizontal";
                case s.Vertical:
                    return "vertical";
                case s.All:
                    return "all"
            }
            return "unknown"
        }, t.YGExperimentalFeatureCount = 1,
        function(e) {
            e[e.WebFlexBasis = 0] = "WebFlexBasis"
        }(l = t.YGExperimentalFeature || (t.YGExperimentalFeature = {})), t.YGExperimentalFeatureToString = function(e) {
            switch (e) {
                case l.WebFlexBasis:
                    return "web-flex-basis"
            }
            return "unknown"
        }, t.YGFlexDirectionCount = 4,
        function(e) {
            e[e.Column = 0] = "Column", e[e.ColumnReverse = 1] = "ColumnReverse", e[e.Row = 2] = "Row", e[e.RowReverse = 3] = "RowReverse"
        }(u = t.YGFlexDirection || (t.YGFlexDirection = {})), t.YGFlexDirectionToString = function(e) {
            switch (e) {
                case u.Column:
                    return "column";
                case u.ColumnReverse:
                    return "column-reverse";
                case u.Row:
                    return "row";
                case u.RowReverse:
                    return "row-reverse"
            }
            return "unknown"
        }, t.YGJustifyCount = 6,
        function(e) {
            e[e.FlexStart = 0] = "FlexStart", e[e.Center = 1] = "Center", e[e.FlexEnd = 2] = "FlexEnd", e[e.SpaceBetween = 3] = "SpaceBetween", e[e.SpaceAround = 4] = "SpaceAround", e[e.SpaceEvenly = 5] = "SpaceEvenly"
        }(d = t.YGJustify || (t.YGJustify = {})), t.YGJustifyToString = function(e) {
            switch (e) {
                case d.FlexStart:
                    return "flex-start";
                case d.Center:
                    return "center";
                case d.FlexEnd:
                    return "flex-end";
                case d.SpaceBetween:
                    return "space-between";
                case d.SpaceAround:
                    return "space-around";
                case d.SpaceEvenly:
                    return "space-evenly"
            }
            return "unknown"
        }, t.YGLogLevelCount = 6,
        function(e) {
            e[e.Error = 0] = "Error", e[e.Warn = 1] = "Warn", e[e.Info = 2] = "Info", e[e.Debug = 3] = "Debug", e[e.Verbose = 4] = "Verbose", e[e.Fatal = 5] = "Fatal"
        }(g = t.YGLogLevel || (t.YGLogLevel = {})), t.YGLogLevelToString = function(e) {
            switch (e) {
                case g.Error:
                    return "error";
                case g.Warn:
                    return "warn";
                case g.Info:
                    return "info";
                case g.Debug:
                    return "debug";
                case g.Verbose:
                    return "verbose";
                case g.Fatal:
                    return "fatal"
            }
            return "unknown"
        }, t.YGMeasureModeCount = 3,
        function(e) {
            e[e.Undefined = 0] = "Undefined", e[e.Exactly = 1] = "Exactly", e[e.AtMost = 2] = "AtMost"
        }(G = t.YGMeasureMode || (t.YGMeasureMode = {})), t.YGMeasureModeToString = function(e) {
            switch (e) {
                case G.Undefined:
                    return "undefined";
                case G.Exactly:
                    return "exactly";
                case G.AtMost:
                    return "at-most"
            }
            return "unknown"
        }, t.YGNodeTypeCount = 2,
        function(e) {
            e[e.Default = 0] = "Default", e[e.Text = 1] = "Text"
        }(c = t.YGNodeType || (t.YGNodeType = {})), t.YGNodeTypeToString = function(e) {
            switch (e) {
                case c.Default:
                    return "default";
                case c.Text:
                    return "text"
            }
            return "unknown"
        }, t.YGOverflowCount = 3,
        function(e) {
            e[e.Visible = 0] = "Visible", e[e.Hidden = 1] = "Hidden", e[e.Scroll = 2] = "Scroll"
        }(Y = t.YGOverflow || (t.YGOverflow = {})), t.YGOverflowToString = function(e) {
            switch (e) {
                case Y.Visible:
                    return "visible";
                case Y.Hidden:
                    return "hidden";
                case Y.Scroll:
                    return "scroll"
            }
            return "unknown"
        }, t.YGPositionTypeCount = 2,
        function(e) {
            e[e.Relative = 0] = "Relative", e[e.Absolute = 1] = "Absolute"
        }(f = t.YGPositionType || (t.YGPositionType = {})), t.YGPositionTypeToString = function(e) {
            switch (e) {
                case f.Relative:
                    return "relative";
                case f.Absolute:
                    return "absolute"
            }
            return "unknown"
        }, t.YGPrintOptionsCount = 3,
        function(e) {
            e[e.Layout = 1] = "Layout", e[e.Style = 2] = "Style", e[e.Children = 4] = "Children"
        }(y = t.YGPrintOptions || (t.YGPrintOptions = {})), t.YGPrintOptionsToString = function(e) {
            switch (e) {
                case y.Layout:
                    return "layout";
                case y.Style:
                    return "style";
                case y.Children:
                    return "children"
            }
            return "unknown"
        }, t.YGUnitCount = 4,
        function(e) {
            e[e.Undefined = 0] = "Undefined", e[e.Point = 1] = "Point", e[e.Percent = 2] = "Percent", e[e.Auto = 3] = "Auto"
        }(h = t.YGUnit || (t.YGUnit = {})), t.YGUnitToString = function(e) {
            switch (e) {
                case h.Undefined:
                    return "undefined";
                case h.Point:
                    return "point";
                case h.Percent:
                    return "percent";
                case h.Auto:
                    return "auto"
            }
            return "unknown"
        }, t.YGWrapCount = 3,
        function(e) {
            e[e.NoWrap = 0] = "NoWrap", e[e.Wrap = 1] = "Wrap", e[e.WrapReverse = 2] = "WrapReverse"
        }(p = t.YGWrap || (t.YGWrap = {})), t.YGWrapToString = function(e) {
            switch (e) {
                case p.NoWrap:
                    return "no-wrap";
                case p.Wrap:
                    return "wrap";
                case p.WrapReverse:
                    return "wrap-reverse"
            }
            return "unknown"
        }
}, function(e, t, i) {
    "use strict";
    t.__esModule = !0;
    var n = i(0),
        o = i(9),
        r = i(5),
        a = i(6),
        s = i(2),
        l = i(7),
        u = i(3),
        d = i(4),
        g = function() {};

    function G(e, t) {
        for (var i = e, n = 0, o = t[0][0]; n < o.length; n++) {
            var r = o[n];
            i = i.replace(/%[d|s|f]/, r)
        }
        return i
    }

    function c(e, t, i, o) {
        for (var r = [], a = 4; a < arguments.length; a++) r[a - 4] = arguments[a];
        switch (i) {
            case n.YGLogLevel.Error:
            case n.YGLogLevel.Fatal:
                return console.error(G(o, r));
            case n.YGLogLevel.Warn:
            case n.YGLogLevel.Info:
            case n.YGLogLevel.Debug:
            case n.YGLogLevel.Verbose:
            default:
                return console.log(G(o, r))
        }
    }

    function Y(e) {
        return !(void 0 !== e && !isNaN(e))
    }
    t.YGSize = g, t.YGUndefined = void 0, t.YGValueUndefined = function() {
        return new l.YGValue(t.YGUndefined, n.YGUnit.Undefined)
    }, t.YGValueAuto = function() {
        return new l.YGValue(t.YGUndefined, n.YGUnit.Auto)
    }, t.YGValueZero = function() {
        return new l.YGValue(0, n.YGUnit.Point)
    }, t.YGFloatIsUndefined = Y, t.YGComputedEdgeValue = function(e, i, o) {
        return e[i].unit != n.YGUnit.Undefined ? e[i] : i != n.YGEdge.Top && i != n.YGEdge.Bottom || e[n.YGEdge.Vertical].unit == n.YGUnit.Undefined ? i != n.YGEdge.Left && i != n.YGEdge.Right && i != n.YGEdge.Start && i != n.YGEdge.End || e[n.YGEdge.Horizontal].unit == n.YGUnit.Undefined ? e[n.YGEdge.All].unit != n.YGUnit.Undefined ? e[n.YGEdge.All] : i == n.YGEdge.Start || i == n.YGEdge.End ? t.YGValueUndefined() : o : e[n.YGEdge.Horizontal] : e[n.YGEdge.Vertical]
    }, t.YGNodeGetContext = function(e) {
        return e.getContext()
    }, t.YGNodeSetContext = function(e, t) {
        return e.setContext(t)
    }, t.YGNodeGetMeasureFunc = function(e) {
        return e.getMeasure()
    }, t.YGNodeSetMeasureFunc = function(e, t) {
        e.setMeasureFunc(t)
    }, t.YGNodeGetBaselineFunc = function(e) {
        return e.getBaseline()
    }, t.YGNodeSetBaselineFunc = function(e, t) {
        e.setBaseLineFunc(t)
    }, t.YGNodeGetDirtiedFunc = function(e) {
        return e.getDirtied()
    }, t.YGNodeSetDirtiedFunc = function(e, t) {
        e.setDirtiedFunc(t)
    }, t.YGNodeGetPrintFunc = function(e) {
        return e.getPrintFunc()
    }, t.YGNodeSetPrintFunc = function(e, t) {
        e.setPrintFunc(t)
    }, t.YGNodeGetHasNewLayout = function(e) {
        return e.getHasNewLayout()
    }, t.YGNodeSetHasNewLayout = function(e, t) {
        e.setHasNewLayout(t)
    }, t.YGNodeGetNodeType = function(e) {
        return e.getNodeType()
    }, t.YGNodeSetNodeType = function(e, t) {
        e.setNodeType(t)
    }, t.YGNodeIsDirty = function(e) {
        return e.isDirty()
    }, t.YGNodeLayoutGetDidUseLegacyFlag = function(e) {
        return e.didUseLegacyFlag()
    }, t.YGNodeMarkDirtyAndPropogateToDescendants = function(e) {
        e.markDirtyAndPropogateDownwards()
    };
    var f = 0,
        y = 0;

    function h(e) {
        var t = new o.YGNode;
        return f++, e.useWebDefaults && (t.setStyleFlexDirection(n.YGFlexDirection.Row), t.setStyleAlignContent(n.YGAlign.Stretch)), t.setConfig(e), t
    }

    function p() {
        return M()
    }

    function m(e) {
        console.log("clone?");
        var t = new o.YGNode(e);
        return f++, t.setOwner(null), t
    }

    function S(e) {
        var t = new r.YGConfig(e.logger);
        return y++, t
    }

    function F(e) {
        for (var t = m(e), i = new Array(e.getChildren().length), n = null, o = 0; o < e.getChildren().length; ++o)(n = F(e.getChild(o))).setOwner(t), i.push(n);
        return t.setChildren(i), null != e.getConfig() && t.setConfig(S(e.getConfig())), t
    }

    function v(e) {
        var t = e.getOwner();
        null != t && (t.removeChild(e), e.setOwner(null));
        for (var i = E(e), n = 0; n < i; n++) U(e, n).setOwner(null);
        e.clearChildren(), f--
    }

    function D(e) {
        null != e.getConfig() && (y--, e.setConfig(null));
        for (var t = 0; t < e.getChildrenCount(); ++t) D(e.getChild(t))
    }

    function x(e) {
        for (; E(e) > 0;) {
            var t = U(e, 0);
            if (t.getOwner() != e) break;
            L(e, t), x(t)
        }
        v(e)
    }

    function M() {
        var e = new r.YGConfig(c);
        return y++, e
    }

    function L(e, t) {
        var i = E(e);
        if (0 != i)
            if (U(e, 0).getOwner() != e) {
                for (var n = e.getConfig().cloneNodeCallback, o = 0, r = 0; r < i; r++) {
                    var s = e.getChild(r);
                    if (t != s) {
                        var l = null;
                        n && (l = n(s, e, o)), null == l && (l = m(s)), e.replaceChildIndex(l, o), l.setOwner(e), o++
                    } else e.markDirtyAndPropogate()
                }
                for (; o < i;) e.removeChildIndex(o), o++
            } else e.removeChild(t) && (t.setLayout(new a.YGLayout), t.setOwner(null), e.markDirtyAndPropogate())
    }

    function w(e, t) {
        if (e) {
            var i = e.getChildren();
            if (0 == t.length) {
                if (i.length > 0) {
                    for (var n = 0; n < i.length; n++) {
                        var o = i[n];
                        o.setLayout(new a.YGLayout), o.setOwner(null)
                    }
                    e.setChildren(new Array), e.markDirtyAndPropogate()
                }
            } else {
                if (i.length > 0)
                    for (n = 0; n < i.length; n++) {
                        var r = i[n];
                        t.indexOf(r) < 0 && (r.setLayout(new a.YGLayout), r.setOwner(null))
                    }
                for (e.setChildren(t), n = 0; n < t.length; n++) t[n].setOwner(e);
                e.markDirtyAndPropogate()
            }
        }
    }

    function U(e, t) {
        var i = e.getChildren();
        return t < i.length ? i[t] : null
    }

    function E(e) {
        return e.getChildrenCount()
    }
    t.YGNodeNewWithConfig = h, t.YGConfigGetDefault = p, t.YGNodeNew = function() {
        return h(p())
    }, t.YGNodeClone = m, t.YGConfigClone = S, t.YGNodeDeepClone = F, t.YGNodeFree = v, t.YGConfigFreeRecursive = D, t.YGNodeFreeRecursive = x, t.YGNodeReset = function(e) {
        me(e, 0 == E(e), "Cannot reset a node which still has children attached"), me(e, null == e.getOwner(), "Cannot reset a node still attached to a owner"), e.clearChildren();
        var t = e.getConfig();
        e.fromNode(new o.YGNode), t.useWebDefaults && (e.setStyleFlexDirection(n.YGFlexDirection.Row), e.setStyleAlignContent(n.YGAlign.Stretch)), e.setConfig(t)
    }, t.YGNodeGetInstanceCount = function() {
        return f
    }, t.YGConfigGetInstanceCount = function() {
        return y
    }, t.YGConfigNew = M, t.YGConfigFree = function(e) {
        y--
    }, t.YGConfigCopy = function(e, t) {
        Object.assign(e, t)
    }, t.YGNodeInsertChild = function(e, t, i) {
        me(e, null == t.getOwner(), "Child already has a owner, it must be removed first."), me(e, null == e.getMeasure(), "Cannot add child: Nodes with measure functions cannot have children."), e.cloneChildrenIfNeeded(), e.insertChildIndex(t, i);
        var n = t.getOwner() ? null : e;
        t.setOwner(n), e.markDirtyAndPropogate()
    }, t.YGNodeInsertSharedChild = function(e, t, i) {
        me(e, null == e.getMeasure(), "Cannot add child: Nodes with measure functions cannot have children."), e.insertChildIndex(t, i), t.setOwner(null), e.markDirtyAndPropogate()
    }, t.YGNodeRemoveChild = L, t.YGNodeRemoveAllChildren = function(e) {
        var t = E(e);
        if (0 != t) {
            if (U(e, 0).getOwner() == e) {
                for (var i = 0; i < t; i++) {
                    var n = U(e, i);
                    n.setLayout(new a.YGLayout), n.setOwner(null)
                }
                return e.clearChildren(), void e.markDirtyAndPropogate()
            }
            e.setChildren(new Array), e.markDirtyAndPropogate()
        }
    }, t.YGNodeSetChildrenInternal = w, t.YGNodeSetChildren = function(e, t) {
        w(e, t)
    }, t.YGNodeGetChild = U, t.YGNodeGetChildCount = E, t.YGNodeGetOwner = function(e) {
        return e.getOwner()
    }, t.YGNodeGetParent = function(e) {
        return e.getOwner()
    }, t.YGNodeMarkDirty = function(e) {
        me(e, null != e.getMeasure(), "Only leaf nodes with custom measure functions should manually mark themselves as dirty"), e.markDirtyAndPropogate()
    }, t.YGNodeCopyStyle = function(e, t) {
        e.getStyle().isEqual(t.getStyle()) || (e.setStyle(t.getStyle()), e.markDirtyAndPropogate())
    }, t.YGNodeStyleGetFlexGrow = function(e) {
        return e.getStyle().flexGrow.isUndefined() ? d.kDefaultFlexGrow : e.getStyle().flexGrow.getValue()
    }, t.YGNodeStyleGetFlexShrink = function(e) {
        return e.getStyle().flexShrink.isUndefined() ? e.getConfig().useWebDefaults ? d.kWebDefaultFlexShrink : d.kDefaultFlexShrink : e.getStyle().flexShrink.getValue()
    }, t.YGNodeStyleSetDirection = function(e, t) {
        if (e.getStyle().direction != t) {
            var i = e.getStyle();
            i.direction = t, e.setStyle(i), e.markDirtyAndPropogate()
        }
    }, t.YGNodeStyleGetDirection = function(e) {
        return e.getStyle().direction
    }, t.YGNodeStyleSetFlexDirection = function(e, t) {
        if (e.getStyle().flexDirection != t) {
            var i = e.getStyle();
            i.flexDirection = t, e.setStyle(i), e.markDirtyAndPropogate()
        }
    }, t.YGNodeStyleGetFlexDirection = function(e) {
        return e.getStyle().flexDirection
    }, t.YGNodeStyleSetJustifyContent = function(e, t) {
        if (e.getStyle().justifyContent != t) {
            var i = e.getStyle();
            i.justifyContent = t, e.setStyle(i), e.markDirtyAndPropogate()
        }
    }, t.YGNodeStyleGetJustifyContent = function(e) {
        return e.getStyle().justifyContent
    }, t.YGNodeStyleSetAlignContent = function(e, t) {
        if (e.getStyle().alignContent != t) {
            var i = e.getStyle();
            i.alignContent = t, e.setStyle(i), e.markDirtyAndPropogate()
        }
    }, t.YGNodeStyleGetAlignContent = function(e) {
        return e.getStyle().alignContent
    }, t.YGNodeStyleSetAlignItems = function(e, t) {
        if (e.getStyle().alignItems != t) {
            var i = e.getStyle();
            i.alignItems = t, e.setStyle(i), e.markDirtyAndPropogate()
        }
    }, t.YGNodeStyleGetAlignItems = function(e) {
        return e.getStyle().alignItems
    }, t.YGNodeStyleSetAlignSelf = function(e, t) {
        if (e.getStyle().alignSelf != t) {
            var i = e.getStyle();
            i.alignSelf = t, e.setStyle(i), e.markDirtyAndPropogate()
        }
    }, t.YGNodeStyleGetAlignSelf = function(e) {
        return e.getStyle().alignSelf
    }, t.YGNodeStyleSetPositionType = function(e, t) {
        if (e.getStyle().positionType != t) {
            var i = e.getStyle();
            i.positionType = t, e.setStyle(i), e.markDirtyAndPropogate()
        }
    }, t.YGNodeStyleGetPositionType = function(e) {
        return e.getStyle().positionType
    }, t.YGNodeStyleSetFlexWrap = function(e, t) {
        if (e.getStyle().flexWrap != t) {
            var i = e.getStyle();
            i.flexWrap = t, e.setStyle(i), e.markDirtyAndPropogate()
        }
    }, t.YGNodeStyleGetFlexWrap = function(e) {
        return e.getStyle().flexWrap
    }, t.YGNodeStyleSetOverflow = function(e, t) {
        if (e.getStyle().overflow != t) {
            var i = e.getStyle();
            i.overflow = t, e.setStyle(i), e.markDirtyAndPropogate()
        }
    }, t.YGNodeStyleGetOverflow = function(e) {
        return e.getStyle().overflow
    }, t.YGNodeStyleSetDisplay = function(e, t) {
        if (e.getStyle().display != t) {
            var i = e.getStyle();
            i.display = t, e.setStyle(i), e.markDirtyAndPropogate()
        }
    }, t.YGNodeStyleGetDisplay = function(e) {
        return e.getStyle().display
    }, t.YGNodeStyleSetPosition = function(e, t, i) {
        var o = new l.YGValue(u.YGFloatSanitize(i), Y(i) ? n.YGUnit.Undefined : n.YGUnit.Point);
        if (e.getStyle().position[t].value != o.value && o.unit != n.YGUnit.Undefined || e.getStyle().position[t].unit != o.unit) {
            var r = e.getStyle();
            r.position[t] = o, e.setStyle(r), e.markDirtyAndPropogate()
        }
    }, t.YGNodeStyleSetPositionPercent = function(e, t, i) {
        var o = new l.YGValue(u.YGFloatSanitize(i), Y(i) ? n.YGUnit.Undefined : n.YGUnit.Percent);
        if (e.getStyle().position[t].value != o.value && o.unit != n.YGUnit.Undefined || e.getStyle().position[t].unit != o.unit) {
            var r = e.getStyle();
            r.position[t] = o, e.setStyle(r), e.markDirtyAndPropogate()
        }
    }, t.YGNodeStyleGetPosition = function(e, i) {
        var o = e.getStyle().position[i];
        return o.unit != n.YGUnit.Undefined && o.unit != n.YGUnit.Auto || (o.value = t.YGUndefined), o
    }, t.YGNodeStyleSetMargin = function(e, t, i) {
        var o = new l.YGValue(u.YGFloatSanitize(i), Y(i) ? n.YGUnit.Undefined : n.YGUnit.Point);
        if (e.getStyle().margin[t].value != o.value && o.unit != n.YGUnit.Undefined || e.getStyle().margin[t].unit != o.unit) {
            var r = e.getStyle();
            r.margin[t] = o, e.setStyle(r), e.markDirtyAndPropogate()
        }
    }, t.YGNodeStyleSetMarginPercent = function(e, t, i) {
        var o = new l.YGValue(u.YGFloatSanitize(i), Y(i) ? n.YGUnit.Undefined : n.YGUnit.Percent);
        if (e.getStyle().margin[t].value != o.value && o.unit != n.YGUnit.Undefined || e.getStyle().margin[t].unit != o.unit) {
            var r = e.getStyle();
            r.margin[t] = o, e.setStyle(r), e.markDirtyAndPropogate()
        }
    }, t.YGNodeStyleGetMargin = function(e, i) {
        var o = e.getStyle().margin[i];
        return o.unit != n.YGUnit.Undefined && o.unit != n.YGUnit.Auto || (o.value = t.YGUndefined), o
    }, t.YGNodeStyleSetPadding = function(e, t, i) {
        var o = new l.YGValue(u.YGFloatSanitize(i), Y(i) ? n.YGUnit.Undefined : n.YGUnit.Point);
        if (e.getStyle().padding[t].value != o.value && o.unit != n.YGUnit.Undefined || e.getStyle().padding[t].unit != o.unit) {
            var r = e.getStyle();
            r.padding[t] = o, e.setStyle(r), e.markDirtyAndPropogate()
        }
    }, t.YGNodeStyleSetPaddingPercent = function(e, t, i) {
        var o = new l.YGValue(u.YGFloatSanitize(i), Y(i) ? n.YGUnit.Undefined : n.YGUnit.Percent);
        if (e.getStyle().padding[t].value != o.value && o.unit != n.YGUnit.Undefined || e.getStyle().padding[t].unit != o.unit) {
            var r = e.getStyle();
            r.padding[t] = o, e.setStyle(r), e.markDirtyAndPropogate()
        }
    }, t.YGNodeStyleGetPadding = function(e, i) {
        var o = e.getStyle().padding[i];
        return o.unit != n.YGUnit.Undefined && o.unit != n.YGUnit.Auto || (o.value = t.YGUndefined), o
    }, t.YGNodeStyleSetMarginAuto = function(e, t) {
        if (e.getStyle().margin[t].unit != n.YGUnit.Auto) {
            var i = e.getStyle();
            i.margin[t].value = 0, i.margin[t].unit = n.YGUnit.Auto, e.setStyle(i), e.markDirtyAndPropogate()
        }
    }, t.YGNodeStyleSetWidth = function(e, t) {
        var i = new l.YGValue(u.YGFloatSanitize(t), Y(t) ? n.YGUnit.Undefined : n.YGUnit.Point);
        if (e.getStyle().dimensions[n.YGDimension.Width].value != i.value && i.unit != n.YGUnit.Undefined || e.getStyle().dimensions[n.YGDimension.Width].unit != i.unit) {
            var o = e.getStyle();
            o.dimensions[n.YGDimension.Width] = i, e.setStyle(o), e.markDirtyAndPropogate()
        }
    }, t.YGNodeStyleSetWidthPercent = function(e, t) {
        if (e.getStyle().dimensions[n.YGDimension.Width].value != u.YGFloatSanitize(t) || e.getStyle().dimensions[n.YGDimension.Width].unit != n.YGUnit.Percent) {
            var i = e.getStyle();
            i.dimensions[n.YGDimension.Width].value = u.YGFloatSanitize(t), i.dimensions[n.YGDimension.Width].unit = Y(t) ? n.YGUnit.Auto : n.YGUnit.Percent, e.setStyle(i), e.markDirtyAndPropogate()
        }
    }, t.YGNodeStyleSetWidthAuto = function(e) {
        if (e.getStyle().dimensions[n.YGDimension.Width].unit != n.YGUnit.Auto) {
            var t = e.getStyle();
            t.dimensions[n.YGDimension.Width].value = 0, t.dimensions[n.YGDimension.Width].unit = n.YGUnit.Auto, e.setStyle(t), e.markDirtyAndPropogate()
        }
    }, t.YGNodeStyleGetWidth = function(e) {
        var i = e.getStyle().dimensions[n.YGDimension.Width];
        return i.unit != n.YGUnit.Undefined && i.unit != n.YGUnit.Auto || (i.value = t.YGUndefined), i
    }, t.YGNodeStyleSetHeight = function(e, t) {
        var i = new l.YGValue(u.YGFloatSanitize(t), Y(t) ? n.YGUnit.Undefined : n.YGUnit.Point);
        if (e.getStyle().dimensions[n.YGDimension.Height].value != i.value && i.unit != n.YGUnit.Undefined || e.getStyle().dimensions[n.YGDimension.Height].unit != i.unit) {
            var o = e.getStyle();
            o.dimensions[n.YGDimension.Height] = i, e.setStyle(o), e.markDirtyAndPropogate()
        }
    }, t.YGNodeStyleSetHeightPercent = function(e, t) {
        if (e.getStyle().dimensions[n.YGDimension.Height].value != u.YGFloatSanitize(t) || e.getStyle().dimensions[n.YGDimension.Height].unit != n.YGUnit.Percent) {
            var i = e.getStyle();
            i.dimensions[n.YGDimension.Height].value = u.YGFloatSanitize(t), i.dimensions[n.YGDimension.Height].unit = Y(t) ? n.YGUnit.Auto : n.YGUnit.Percent, e.setStyle(i), e.markDirtyAndPropogate()
        }
    }, t.YGNodeStyleSetHeightAuto = function(e) {
        if (e.getStyle().dimensions[n.YGDimension.Height].unit != n.YGUnit.Auto) {
            var t = e.getStyle();
            t.dimensions[n.YGDimension.Height].value = 0, t.dimensions[n.YGDimension.Height].unit = n.YGUnit.Auto, e.setStyle(t), e.markDirtyAndPropogate()
        }
    }, t.YGNodeStyleGetHeight = function(e) {
        var i = e.getStyle().dimensions[n.YGDimension.Height];
        return i.unit != n.YGUnit.Undefined && i.unit != n.YGUnit.Auto || (i.value = t.YGUndefined), i
    }, t.YGNodeStyleSetMinWidth = function(e, t) {
        var i = new l.YGValue(u.YGFloatSanitize(t), Y(t) ? n.YGUnit.Undefined : n.YGUnit.Point);
        if (e.getStyle().minDimensions[n.YGDimension.Width].value != i.value && i.unit != n.YGUnit.Undefined || e.getStyle().minDimensions[n.YGDimension.Width].unit != i.unit) {
            var o = e.getStyle();
            o.minDimensions[n.YGDimension.Width] = i, e.setStyle(o), e.markDirtyAndPropogate()
        }
    }, t.YGNodeStyleSetMinWidthPercent = function(e, t) {
        var i = new l.YGValue(u.YGFloatSanitize(t), Y(t) ? n.YGUnit.Undefined : n.YGUnit.Percent);
        if (e.getStyle().minDimensions[n.YGDimension.Width].value != i.value && i.unit != n.YGUnit.Undefined || e.getStyle().minDimensions[n.YGDimension.Width].unit != i.unit) {
            var o = e.getStyle();
            o.minDimensions[n.YGDimension.Width] = i, e.setStyle(o), e.markDirtyAndPropogate()
        }
    }, t.YGNodeStyleGetMinWidth = function(e) {
        var i = e.getStyle().minDimensions[n.YGDimension.Width];
        return i.unit != n.YGUnit.Undefined && i.unit != n.YGUnit.Auto || (i.value = t.YGUndefined), i
    }, t.YGNodeStyleSetMinHeight = function(e, t) {
        var i = new l.YGValue(u.YGFloatSanitize(t), Y(t) ? n.YGUnit.Undefined : n.YGUnit.Point);
        if (e.getStyle().minDimensions[n.YGDimension.Height].value != i.value && i.unit != n.YGUnit.Undefined || e.getStyle().minDimensions[n.YGDimension.Height].unit != i.unit) {
            var o = e.getStyle();
            o.minDimensions[n.YGDimension.Height] = i, e.setStyle(o), e.markDirtyAndPropogate()
        }
    }, t.YGNodeStyleSetMinHeightPercent = function(e, t) {
        var i = new l.YGValue(u.YGFloatSanitize(t), Y(t) ? n.YGUnit.Undefined : n.YGUnit.Percent);
        if (e.getStyle().minDimensions[n.YGDimension.Height].value != i.value && i.unit != n.YGUnit.Undefined || e.getStyle().minDimensions[n.YGDimension.Height].unit != i.unit) {
            var o = e.getStyle();
            o.minDimensions[n.YGDimension.Height] = i, e.setStyle(o), e.markDirtyAndPropogate()
        }
    }, t.YGNodeStyleGetMinHeight = function(e) {
        var i = e.getStyle().minDimensions[n.YGDimension.Height];
        return i.unit != n.YGUnit.Undefined && i.unit != n.YGUnit.Auto || (i.value = t.YGUndefined), i
    }, t.YGNodeStyleSetMaxWidth = function(e, t) {
        var i = new l.YGValue(u.YGFloatSanitize(t), Y(t) ? n.YGUnit.Undefined : n.YGUnit.Point);
        if (e.getStyle().maxDimensions[n.YGDimension.Width].value != i.value && i.unit != n.YGUnit.Undefined || e.getStyle().maxDimensions[n.YGDimension.Width].unit != i.unit) {
            var o = e.getStyle();
            o.maxDimensions[n.YGDimension.Width] = i, e.setStyle(o), e.markDirtyAndPropogate()
        }
    }, t.YGNodeStyleSetMaxWidthPercent = function(e, t) {
        var i = new l.YGValue(u.YGFloatSanitize(t), Y(t) ? n.YGUnit.Undefined : n.YGUnit.Percent);
        if (e.getStyle().maxDimensions[n.YGDimension.Width].value != i.value && i.unit != n.YGUnit.Undefined || e.getStyle().maxDimensions[n.YGDimension.Width].unit != i.unit) {
            var o = e.getStyle();
            o.maxDimensions[n.YGDimension.Width] = i, e.setStyle(o), e.markDirtyAndPropogate()
        }
    }, t.YGNodeStyleGetMaxWidth = function(e) {
        var i = e.getStyle().maxDimensions[n.YGDimension.Width];
        return i.unit != n.YGUnit.Undefined && i.unit != n.YGUnit.Auto || (i.value = t.YGUndefined), i
    }, t.YGNodeStyleSetMaxHeight = function(e, t) {
        var i = new l.YGValue(u.YGFloatSanitize(t), Y(t) ? n.YGUnit.Undefined : n.YGUnit.Point);
        if (e.getStyle().maxDimensions[n.YGDimension.Height].value != i.value && i.unit != n.YGUnit.Undefined || e.getStyle().maxDimensions[n.YGDimension.Height].unit != i.unit) {
            var o = e.getStyle();
            o.maxDimensions[n.YGDimension.Height] = i, e.setStyle(o), e.markDirtyAndPropogate()
        }
    }, t.YGNodeStyleSetMaxHeightPercent = function(e, t) {
        var i = new l.YGValue(u.YGFloatSanitize(t), Y(t) ? n.YGUnit.Undefined : n.YGUnit.Percent);
        if (e.getStyle().maxDimensions[n.YGDimension.Height].value != i.value && i.unit != n.YGUnit.Undefined || e.getStyle().maxDimensions[n.YGDimension.Height].unit != i.unit) {
            var o = e.getStyle();
            o.maxDimensions[n.YGDimension.Height] = i, e.setStyle(o), e.markDirtyAndPropogate()
        }
    }, t.YGNodeStyleGetMaxHeight = function(e) {
        var i = e.getStyle().maxDimensions[n.YGDimension.Height];
        return i.unit != n.YGUnit.Undefined && i.unit != n.YGUnit.Auto || (i.value = t.YGUndefined), i
    }, t.YGNodeLayoutGetLeft = function(e) {
        return e.getLayout().position[n.YGEdge.Left]
    }, t.YGNodeLayoutGetTop = function(e) {
        return e.getLayout().position[n.YGEdge.Top]
    }, t.YGNodeLayoutGetRight = function(e) {
        return e.getLayout().position[n.YGEdge.Right]
    }, t.YGNodeLayoutGetBottom = function(e) {
        return e.getLayout().position[n.YGEdge.Bottom]
    }, t.YGNodeLayoutGetWidth = function(e) {
        return e.getLayout().dimensions[n.YGDimension.Width]
    }, t.YGNodeLayoutGetHeight = function(e) {
        return e.getLayout().dimensions[n.YGDimension.Height]
    }, t.YGNodeLayoutGetDirection = function(e) {
        return e.getLayout().direction
    }, t.YGNodeLayoutGetHadOverflow = function(e) {
        return e.getLayout().hadOverflow
    }, t.YGNodeLayoutGetMargin = function(e, t) {
        return me(e, t <= n.YGEdge.End, "Cannot get layout properties of multi-edge shorthands"), t == n.YGEdge.Left ? e.getLayout().direction == n.YGDirection.RTL ? e.getLayout().margin[n.YGEdge.End] : e.getLayout().margin[n.YGEdge.Start] : t == n.YGEdge.Right ? e.getLayout().direction == n.YGDirection.RTL ? e.getLayout().margin[n.YGEdge.Start] : e.getLayout().margin[n.YGEdge.End] : e.getLayout().margin[t]
    }, t.YGNodeLayoutGetBorder = function(e, t) {
        return me(e, t <= n.YGEdge.End, "Cannot get layout properties of multi-edge shorthands"), t == n.YGEdge.Left ? e.getLayout().direction == n.YGDirection.RTL ? e.getLayout().border[n.YGEdge.End] : e.getLayout().border[n.YGEdge.Start] : t == n.YGEdge.Right ? e.getLayout().direction == n.YGDirection.RTL ? e.getLayout().border[n.YGEdge.Start] : e.getLayout().border[n.YGEdge.End] : e.getLayout().border[t]
    }, t.YGNodeLayoutGetPadding = function(e, t) {
        return me(e, t <= n.YGEdge.End, "Cannot get layout properties of multi-edge shorthands"), t == n.YGEdge.Left ? e.getLayout().direction == n.YGDirection.RTL ? e.getLayout().padding[n.YGEdge.End] : e.getLayout().padding[n.YGEdge.Start] : t == n.YGEdge.Right ? e.getLayout().direction == n.YGDirection.RTL ? e.getLayout().padding[n.YGEdge.Start] : e.getLayout().padding[n.YGEdge.End] : e.getLayout().padding[t]
    }, t.YGNodeStyleSetFlex = function(e, t) {
        if (e.getStyle().flex.isDiffValue(t)) {
            var i = e.getStyle();
            Y(t) ? i.flex = new s.YGFloatOptional : i.flex = new s.YGFloatOptional(t), e.setStyle(i), e.markDirtyAndPropogate()
        }
    }, t.YGNodeStyleGetFlex = function(e) {
        return e.getStyle().flex.isUndefined() ? t.YGUndefined : e.getStyle().flex.getValue()
    }, t.YGNodeStyleSetFlexGrow = function(e, t) {
        if (e.getStyle().flexGrow.isDiffValue(t)) {
            var i = e.getStyle();
            Y(t) ? i.flexGrow = new s.YGFloatOptional : i.flexGrow = new s.YGFloatOptional(t), e.setStyle(i), e.markDirtyAndPropogate()
        }
    }, t.YGNodeStyleSetFlexShrink = function(e, t) {
        if (e.getStyle().flexShrink.isDiffValue(t)) {
            var i = e.getStyle();
            Y(t) ? i.flexShrink = new s.YGFloatOptional : i.flexShrink = new s.YGFloatOptional(t), e.setStyle(i), e.markDirtyAndPropogate()
        }
    }, t.YGNodeStyleGetFlexBasis = function(e) {
        var i = e.getStyle().flexBasis;
        return i.unit != n.YGUnit.Undefined && i.unit != n.YGUnit.Auto || (i.value = t.YGUndefined), i
    }, t.YGNodeStyleSetFlexBasis = function(e, t) {
        var i = new l.YGValue(u.YGFloatSanitize(t), Y(t) ? n.YGUnit.Undefined : n.YGUnit.Point);
        if (e.getStyle().flexBasis.value != i.value && i.unit != n.YGUnit.Undefined || e.getStyle().flexBasis.unit != i.unit) {
            var o = e.getStyle();
            o.flexBasis = i, e.setStyle(o), e.markDirtyAndPropogate()
        }
    }, t.YGNodeStyleSetFlexBasisPercent = function(e, t) {
        if (e.getStyle().flexBasis.value != t || e.getStyle().flexBasis.unit != n.YGUnit.Percent) {
            var i = e.getStyle();
            i.flexBasis.value = u.YGFloatSanitize(t), i.flexBasis.unit = Y(t) ? n.YGUnit.Auto : n.YGUnit.Percent, e.setStyle(i), e.markDirtyAndPropogate()
        }
    }, t.YGNodeStyleSetFlexBasisAuto = function(e) {
        if (e.getStyle().flexBasis.unit != n.YGUnit.Auto) {
            var t = e.getStyle();
            t.flexBasis.value = 0, t.flexBasis.unit = n.YGUnit.Auto, e.setStyle(t), e.markDirtyAndPropogate()
        }
    }, t.YGNodeStyleSetBorder = function(e, t, i) {
        var o = new l.YGValue(u.YGFloatSanitize(i), Y(i) ? n.YGUnit.Undefined : n.YGUnit.Point);
        if (e.getStyle().border[t].value != o.value && o.unit != n.YGUnit.Undefined || e.getStyle().border[t].unit != o.unit) {
            var r = e.getStyle();
            r.border[t] = o, e.setStyle(r), e.markDirtyAndPropogate()
        }
    }, t.YGNodeStyleGetBorder = function(e, i) {
        return e.getStyle().border[i].unit == n.YGUnit.Undefined || e.getStyle().border[i].unit == n.YGUnit.Auto ? t.YGUndefined : e.getStyle().border[i].value
    }, t.YGNodeStyleGetAspectRatio = function(e) {
        var i = e.getStyle().aspectRatio;
        return i.isUndefined() ? t.YGUndefined : i.getValue()
    }, t.YGNodeStyleSetAspectRatio = function(e, t) {
        if (e.getStyle().aspectRatio.isDiffValue(t)) {
            var i = e.getStyle();
            i.aspectRatio = new s.YGFloatOptional(t), e.setStyle(i), e.markDirtyAndPropogate()
        }
    }, t.YGNodeLayoutGetDidLegacyStretchFlagAffectLayout = function(e) {
        return e.getLayout().doesLegacyStretchFlagAffectsLayout
    };
    var C = 0;

    function A(e, t, i) {
        return u.YGUnwrapFloatOptional(e.getLeadingPaddingAndBorder(t, i).add(e.getTrailingPaddingAndBorder(t, i)))
    }

    function N(e, t) {
        var i = t.getStyle().alignSelf == n.YGAlign.Auto ? e.getStyle().alignItems : t.getStyle().alignSelf;
        return i == n.YGAlign.Baseline && u.YGFlexDirectionIsColumn(e.getStyle().flexDirection) ? n.YGAlign.FlexStart : i
    }

    function _(e) {
        if (null != e.getBaseline()) {
            var t = e.getBaseline()(e, e.getLayout().measuredDimensions[n.YGDimension.Width], e.getLayout().measuredDimensions[n.YGDimension.Height]);
            return me(e, !Y(t), "Expect custom baseline function to not return NaN"), t
        }
        for (var i = null, o = E(e), r = 0; r < o; r++) {
            var a = U(e, r);
            if (a.getLineIndex() > 0) break;
            if (a.getStyle().positionType != n.YGPositionType.Absolute) {
                if (N(e, a) == n.YGAlign.Baseline) {
                    i = a;
                    break
                }
                null == i && (i = a)
            }
        }
        return null == i ? e.getLayout().measuredDimensions[n.YGDimension.Height] : _(i) + i.getLayout().position[n.YGEdge.Top]
    }

    function P(e) {
        if (u.YGFlexDirectionIsColumn(e.getStyle().flexDirection)) return !1;
        if (e.getStyle().alignItems == n.YGAlign.Baseline) return !0;
        for (var t = E(e), i = 0; i < t; i++) {
            var o = U(e, i);
            if (o.getStyle().positionType == n.YGPositionType.Relative && o.getStyle().alignSelf == n.YGAlign.Baseline) return !0
        }
        return !1
    }

    function R(e, t, i) {
        return e.getLayout().measuredDimensions[d.dim[t]] + u.YGUnwrapFloatOptional(e.getLeadingMargin(t, i).add(e.getTrailingMargin(t, i)))
    }

    function O(e, t, i) {
        var o = Y(e.getResolvedDimension(d.dim[t]).value);
        return !(e.getResolvedDimension(d.dim[t]).unit == n.YGUnit.Auto || e.getResolvedDimension(d.dim[t]).unit == n.YGUnit.Undefined || e.getResolvedDimension(d.dim[t]).unit == n.YGUnit.Point && !o && e.getResolvedDimension(d.dim[t]).value < 0 || e.getResolvedDimension(d.dim[t]).unit == n.YGUnit.Percent && !o && (e.getResolvedDimension(d.dim[t]).value < 0 || Y(i)))
    }

    function T(e, t) {
        var i = e.getLayout().measuredDimensions[d.dim[t]];
        return !Y(i) && i >= 0
    }

    function V(e, t, i, o) {
        var r, a;
        return u.YGFlexDirectionIsColumn(t) ? (r = u.YGResolveValue(e.getStyle().minDimensions[n.YGDimension.Height], o), a = u.YGResolveValue(e.getStyle().maxDimensions[n.YGDimension.Height], o)) : u.YGFlexDirectionIsRow(t) && (r = u.YGResolveValue(e.getStyle().minDimensions[n.YGDimension.Width], o), a = u.YGResolveValue(e.getStyle().maxDimensions[n.YGDimension.Width], o)), !a.isUndefined() && a.getValue() >= 0 && i > a.getValue() ? a : !r.isUndefined() && r.getValue() >= 0 && i < r.getValue() ? r : new s.YGFloatOptional(i)
    }

    function W(e, t, i, n, o) {
        return u.YGFloatMax(u.YGUnwrapFloatOptional(V(e, t, i, n)), A(e, t, o))
    }

    function I(e, t, i) {
        var n = t.getLayout().measuredDimensions[d.dim[i]];
        t.setLayoutPosition(e.getLayout().measuredDimensions[d.dim[i]] - n - t.getLayout().position[d.pos[i]], d.trailing[i])
    }

    function b(e, t, i, o, r, a) {
        var s = u.YGResolveValue(e.getStyle().maxDimensions[d.dim[t]], i).add(e.getMarginForAxis(t, o));
        switch (r.value) {
            case n.YGMeasureMode.Exactly:
            case n.YGMeasureMode.AtMost:
                a.value = s.isUndefined() || a.value < s.getValue() ? a.value : s.getValue();
                break;
            case n.YGMeasureMode.Undefined:
                s.isUndefined() || (r.value = n.YGMeasureMode.AtMost, a.value = s.getValue())
        }
    }

    function B(e, i, o, r, a, l, g, G, c, f) {
        var y, h, p, m, S = u.YGResolveFlexDirection(e.getStyle().flexDirection, c),
            F = u.YGFlexDirectionIsRow(S),
            v = F ? o : a,
            D = F ? l : g,
            x = u.YGResolveValue(i.resolveFlexBasisPtr(), D),
            M = O(i, n.YGFlexDirection.Row, l),
            L = O(i, n.YGFlexDirection.Column, g);
        if (x.isUndefined() || Y(v))
            if (F && M) B = new s.YGFloatOptional(A(i, n.YGFlexDirection.Row, l)), i.setLayoutComputedFlexBasis(u.YGFloatOptionalMax(u.YGResolveValue(i.getResolvedDimension(n.YGDimension.Width), l), B));
            else if (!F && L) B = new s.YGFloatOptional(A(i, n.YGFlexDirection.Column, l)), i.setLayoutComputedFlexBasis(u.YGFloatOptionalMax(u.YGResolveValue(i.getResolvedDimension(n.YGDimension.Height), g), B));
        else {
            y = t.YGUndefined, h = t.YGUndefined, p = n.YGMeasureMode.Undefined, m = n.YGMeasureMode.Undefined;
            var w = u.YGUnwrapFloatOptional(i.getMarginForAxis(n.YGFlexDirection.Row, l)),
                U = u.YGUnwrapFloatOptional(i.getMarginForAxis(n.YGFlexDirection.Column, l));
            M && (y = u.YGUnwrapFloatOptional(u.YGResolveValue(i.getResolvedDimension(n.YGDimension.Width), l)) + w, p = n.YGMeasureMode.Exactly), L && (h = u.YGUnwrapFloatOptional(u.YGResolveValue(i.getResolvedDimension(n.YGDimension.Height), g)) + U, m = n.YGMeasureMode.Exactly), (!F && e.getStyle().overflow == n.YGOverflow.Scroll || e.getStyle().overflow != n.YGOverflow.Scroll) && Y(y) && !Y(o) && (y = o, p = n.YGMeasureMode.AtMost), (F && e.getStyle().overflow == n.YGOverflow.Scroll || e.getStyle().overflow != n.YGOverflow.Scroll) && Y(h) && !Y(a) && (h = a, m = n.YGMeasureMode.AtMost), i.getStyle().aspectRatio.isUndefined() || (F || p != n.YGMeasureMode.Exactly ? F && m == n.YGMeasureMode.Exactly && (y = w + (h - U) * i.getStyle().aspectRatio.getValue(), p = n.YGMeasureMode.Exactly) : (h = U + (y - w) / i.getStyle().aspectRatio.getValue(), m = n.YGMeasureMode.Exactly));
            var E = !Y(o) && r == n.YGMeasureMode.Exactly,
                _ = N(e, i) == n.YGAlign.Stretch && p != n.YGMeasureMode.Exactly;
            !F && !M && E && _ && (y = o, p = n.YGMeasureMode.Exactly, i.getStyle().aspectRatio.isUndefined() || (h = (y - w) / i.getStyle().aspectRatio.getValue(), m = n.YGMeasureMode.Exactly));
            var P = !Y(a) && G == n.YGMeasureMode.Exactly,
                R = N(e, i) == n.YGAlign.Stretch && m != n.YGMeasureMode.Exactly;
            F && !L && P && R && (h = a, m = n.YGMeasureMode.Exactly, i.getStyle().aspectRatio.isUndefined() || (y = (h - U) * i.getStyle().aspectRatio.getValue(), p = n.YGMeasureMode.Exactly));
            var T = {
                    value: p
                },
                V = {
                    value: y
                },
                W = {
                    value: m
                },
                I = {
                    value: h
                };
            b(i, n.YGFlexDirection.Row, l, l, T, V), b(i, n.YGFlexDirection.Column, g, l, W, I), ce(i, V.value, I.value, c, T.value, W.value, l, g, !1, "measure", f), i.setLayoutComputedFlexBasis(new s.YGFloatOptional(u.YGFloatMax(i.getLayout().measuredDimensions[d.dim[S]], A(i, S, l))))
        } else if (i.getLayout().computedFlexBasis.isUndefined() || Fe(i.getConfig(), n.YGExperimentalFeature.WebFlexBasis) && i.getLayout().computedFlexBasisGeneration != C) {
            var B = new s.YGFloatOptional(A(i, S, l));
            i.setLayoutComputedFlexBasis(u.YGFloatOptionalMax(x, B))
        }
        i.setLayoutComputedFlexBasisGeneration(C)
    }

    function H(e, i, o, r, a, s, l) {
        var g = u.YGResolveFlexDirection(e.getStyle().flexDirection, s),
            G = u.YGFlexDirectionCross(g, s),
            c = u.YGFlexDirectionIsRow(g),
            f = t.YGUndefined,
            y = t.YGUndefined,
            h = n.YGMeasureMode.Undefined,
            p = n.YGMeasureMode.Undefined,
            m = u.YGUnwrapFloatOptional(i.getMarginForAxis(n.YGFlexDirection.Row, o)),
            S = u.YGUnwrapFloatOptional(i.getMarginForAxis(n.YGFlexDirection.Column, o));
        O(i, n.YGFlexDirection.Row, o) ? f = u.YGUnwrapFloatOptional(u.YGResolveValue(i.getResolvedDimension(n.YGDimension.Width), o)) + m : i.isLeadingPositionDefined(n.YGFlexDirection.Row) && i.isTrailingPosDefined(n.YGFlexDirection.Row) && (f = e.getLayout().measuredDimensions[n.YGDimension.Width] - (e.getLeadingBorder(n.YGFlexDirection.Row) + e.getTrailingBorder(n.YGFlexDirection.Row)) - u.YGUnwrapFloatOptional(i.getLeadingPosition(n.YGFlexDirection.Row, o).add(i.getTrailingPosition(n.YGFlexDirection.Row, o))), f = W(i, n.YGFlexDirection.Row, f, o, o)), O(i, n.YGFlexDirection.Column, a) ? y = u.YGUnwrapFloatOptional(u.YGResolveValue(i.getResolvedDimension(n.YGDimension.Height), a)) + S : i.isLeadingPositionDefined(n.YGFlexDirection.Column) && i.isTrailingPosDefined(n.YGFlexDirection.Column) && (y = e.getLayout().measuredDimensions[n.YGDimension.Height] - (e.getLeadingBorder(n.YGFlexDirection.Column) + e.getTrailingBorder(n.YGFlexDirection.Column)) - u.YGUnwrapFloatOptional(i.getLeadingPosition(n.YGFlexDirection.Column, a).add(i.getTrailingPosition(n.YGFlexDirection.Column, a))), y = W(i, n.YGFlexDirection.Column, y, a, o)), (Y(f) ? !Y(y) : Y(y)) && (i.getStyle().aspectRatio.isUndefined() || (Y(f) ? f = m + (y - S) * i.getStyle().aspectRatio.getValue() : Y(y) && (y = S + (f - m) / i.getStyle().aspectRatio.getValue()))), (Y(f) || Y(y)) && (h = Y(f) ? n.YGMeasureMode.Undefined : n.YGMeasureMode.Exactly, p = Y(y) ? n.YGMeasureMode.Undefined : n.YGMeasureMode.Exactly, !c && Y(f) && r != n.YGMeasureMode.Undefined && !Y(o) && o > 0 && (f = o, h = n.YGMeasureMode.AtMost), ce(i, f, y, s, h, p, f, y, !1, "abs-measure", l), f = i.getLayout().measuredDimensions[n.YGDimension.Width] + u.YGUnwrapFloatOptional(i.getMarginForAxis(n.YGFlexDirection.Row, o)), y = i.getLayout().measuredDimensions[n.YGDimension.Height] + u.YGUnwrapFloatOptional(i.getMarginForAxis(n.YGFlexDirection.Column, o))), ce(i, f, y, s, n.YGMeasureMode.Exactly, n.YGMeasureMode.Exactly, f, y, !0, "abs-layout", l), i.isTrailingPosDefined(g) && !i.isLeadingPositionDefined(g) ? i.setLayoutPosition(e.getLayout().measuredDimensions[d.dim[g]] - i.getLayout().measuredDimensions[d.dim[g]] - e.getTrailingBorder(g) - u.YGUnwrapFloatOptional(i.getTrailingMargin(g, o)) - u.YGUnwrapFloatOptional(i.getTrailingPosition(g, c ? o : a)), d.leading[g]) : i.isLeadingPositionDefined(g) || e.getStyle().justifyContent != n.YGJustify.Center ? i.isLeadingPositionDefined(g) || e.getStyle().justifyContent != n.YGJustify.FlexEnd || i.setLayoutPosition(e.getLayout().measuredDimensions[d.dim[g]] - i.getLayout().measuredDimensions[d.dim[g]], d.leading[g]) : i.setLayoutPosition((e.getLayout().measuredDimensions[d.dim[g]] - i.getLayout().measuredDimensions[d.dim[g]]) / 2, d.leading[g]), i.isTrailingPosDefined(G) && !i.isLeadingPositionDefined(G) ? i.setLayoutPosition(e.getLayout().measuredDimensions[d.dim[G]] - i.getLayout().measuredDimensions[d.dim[G]] - e.getTrailingBorder(G) - u.YGUnwrapFloatOptional(i.getTrailingMargin(G, o)) - u.YGUnwrapFloatOptional(i.getTrailingPosition(G, c ? a : o)), d.leading[G]) : i.isLeadingPositionDefined(G) || N(e, i) != n.YGAlign.Center ? i.isLeadingPositionDefined(G) || (N(e, i) == n.YGAlign.FlexEnd ? e.getStyle().flexWrap == n.YGWrap.WrapReverse : e.getStyle().flexWrap != n.YGWrap.WrapReverse) || i.setLayoutPosition(e.getLayout().measuredDimensions[d.dim[G]] - i.getLayout().measuredDimensions[d.dim[G]], d.leading[G]) : i.setLayoutPosition((e.getLayout().measuredDimensions[d.dim[G]] - i.getLayout().measuredDimensions[d.dim[G]]) / 2, d.leading[G])
    }

    function k(e, t, i, o, r, a, s) {
        me(e, null != e.getMeasure(), "Expected node to have custom measure function");
        var l = A(e, n.YGFlexDirection.Row, t),
            d = A(e, n.YGFlexDirection.Column, t),
            g = u.YGUnwrapFloatOptional(e.getMarginForAxis(n.YGFlexDirection.Row, t)),
            G = u.YGUnwrapFloatOptional(e.getMarginForAxis(n.YGFlexDirection.Column, t)),
            c = Y(t) ? t : u.YGFloatMax(0, t - g - l),
            f = Y(i) ? i : u.YGFloatMax(0, i - G - d);
        if (o == n.YGMeasureMode.Exactly && r == n.YGMeasureMode.Exactly) e.setLayoutMeasuredDimension(W(e, n.YGFlexDirection.Row, t - g, a, a), n.YGDimension.Width), e.setLayoutMeasuredDimension(W(e, n.YGFlexDirection.Column, i - G, s, a), n.YGDimension.Height);
        else {
            var y = e.getMeasure()(e, c, o, f, r);
            e.setLayoutMeasuredDimension(W(e, n.YGFlexDirection.Row, o == n.YGMeasureMode.Undefined || o == n.YGMeasureMode.AtMost ? y.width + l : t - g, a, a), n.YGDimension.Width), e.setLayoutMeasuredDimension(W(e, n.YGFlexDirection.Column, r == n.YGMeasureMode.Undefined || r == n.YGMeasureMode.AtMost ? y.height + d : i - G, s, a), n.YGDimension.Height)
        }
    }

    function q(e, t, i, o, r, a, s) {
        var l = A(e, n.YGFlexDirection.Row, a),
            d = A(e, n.YGFlexDirection.Column, a),
            g = u.YGUnwrapFloatOptional(e.getMarginForAxis(n.YGFlexDirection.Row, a)),
            G = u.YGUnwrapFloatOptional(e.getMarginForAxis(n.YGFlexDirection.Column, a));
        e.setLayoutMeasuredDimension(W(e, n.YGFlexDirection.Row, o == n.YGMeasureMode.Undefined || o == n.YGMeasureMode.AtMost ? l : t - g, a, a), n.YGDimension.Width), e.setLayoutMeasuredDimension(W(e, n.YGFlexDirection.Column, r == n.YGMeasureMode.Undefined || r == n.YGMeasureMode.AtMost ? d : i - G, s, a), n.YGDimension.Height)
    }

    function z(e, t, i, o, r, a, s) {
        if (!Y(t) && o == n.YGMeasureMode.AtMost && t <= 0 || !Y(i) && r == n.YGMeasureMode.AtMost && i <= 0 || o == n.YGMeasureMode.Exactly && r == n.YGMeasureMode.Exactly) {
            var l = u.YGUnwrapFloatOptional(e.getMarginForAxis(n.YGFlexDirection.Column, a)),
                d = u.YGUnwrapFloatOptional(e.getMarginForAxis(n.YGFlexDirection.Row, a));
            return e.setLayoutMeasuredDimension(W(e, n.YGFlexDirection.Row, Y(t) || o == n.YGMeasureMode.AtMost && t < 0 ? 0 : t - d, a, a), n.YGDimension.Width), e.setLayoutMeasuredDimension(W(e, n.YGFlexDirection.Column, Y(i) || r == n.YGMeasureMode.AtMost && i < 0 ? 0 : i - l, s, a), n.YGDimension.Height), !0
        }
        return !1
    }

    function J(e) {
        e.getLayout().clean(), e.setHasNewLayout(!0), e.cloneChildrenIfNeeded();
        for (var t = E(e), i = 0; i < t; i++) J(e.getChild(i))
    }

    function j(e, t, i, o) {
        var r = u.YGFlexDirectionIsRow(t) ? n.YGFlexDirection.Row : n.YGFlexDirection.Column,
            a = u.YGFlexDirectionIsRow(t) ? n.YGDimension.Width : n.YGDimension.Height,
            s = u.YGUnwrapFloatOptional(e.getMarginForAxis(r, o)),
            l = A(e, r, o),
            d = i - s - l;
        if (!Y(d)) {
            var g = u.YGResolveValue(e.getStyle().minDimensions[a], o),
                G = g.isUndefined() ? 0 : g.getValue() - l,
                c = u.YGResolveValue(e.getStyle().maxDimensions[a], o),
                f = c.isUndefined() ? Number.MAX_VALUE : c.getValue() - l;
            d = u.YGFloatMax(u.YGFloatMin(d, f), G)
        }
        return d
    }

    function X(e, t, i, o, r, a, l, d, g, G) {
        var c = null,
            Y = e.getChildren();
        if ((u.YGFlexDirectionIsRow(l) ? o : r) == n.YGMeasureMode.Exactly)
            for (var f = 0; f < Y.length; ++f)
                if ((y = Y[f]).isNodeFlexible()) {
                    if (null != c || u.YGFloatsEqual(y.resolveFlexGrow(), 0) || u.YGFloatsEqual(y.resolveFlexShrink(), 0)) {
                        c = null;
                        break
                    }
                    c = y
                } for (f = 0; f < Y.length; ++f) {
            var y;
            if ((y = Y[f]).resolveDimension(), y.getStyle().display != n.YGDisplay.None) {
                if (g) {
                    var h = y.resolveDirection(a),
                        p = u.YGFlexDirectionIsRow(l) ? t : i,
                        m = u.YGFlexDirectionIsRow(l) ? i : t;
                    y.setPosition(h, p, m, t)
                }
                y.getStyle().positionType != n.YGPositionType.Absolute && (y == c ? (y.setLayoutComputedFlexBasisGeneration(C), y.setLayoutComputedFlexBasis(new s.YGFloatOptional(0))) : B(e, y, t, o, i, t, i, r, a, d), G.value += u.YGUnwrapFloatOptional(y.getLayout().computedFlexBasis.add(y.getMarginForAxis(l, t))))
            } else J(y), y.setHasNewLayout(!0), y.setDirty(!1)
        }
    }

    function Z(e, t, i, o, r, a, s) {
        for (var l = new u.YGCollectFlexItemsRowValues, d = 0, g = u.YGResolveFlexDirection(e.getStyle().flexDirection, e.resolveDirection(t)), G = e.getStyle().flexWrap != n.YGWrap.NoWrap, c = a; c < e.getChildrenCount(); c++) {
            var Y = e.getChild(c);
            if (Y.getStyle().display != n.YGDisplay.None && Y.getStyle().positionType != n.YGPositionType.Absolute) {
                Y.setLineIndex(s);
                var f = u.YGUnwrapFloatOptional(Y.getMarginForAxis(g, o)),
                    y = u.YGUnwrapFloatOptional(V(Y, g, u.YGUnwrapFloatOptional(Y.getLayout().computedFlexBasis), i));
                if (d + y + f > r && G && l.itemsOnLine > 0) break;
                d += y + f, l.sizeConsumedOnCurrentLine += y + f, l.itemsOnLine++, Y.isNodeFlexible() && (l.totalFlexGrowFactors += Y.resolveFlexGrow(), l.totalFlexShrinkScaledFactors += -Y.resolveFlexShrink() * u.YGUnwrapFloatOptional(Y.getLayout().computedFlexBasis)), l.relativeChildren.push(Y)
            }
        }
        return l.totalFlexGrowFactors > 0 && l.totalFlexGrowFactors < 1 && (l.totalFlexGrowFactors = 1), l.totalFlexShrinkScaledFactors > 0 && l.totalFlexShrinkScaledFactors < 1 && (l.totalFlexShrinkScaledFactors = 1), l.endOfLineIndex = c, l
    }

    function K(e, t, i, o, r, a, s, l, g, G, c, f, y) {
        for (var h = 0, p = 0, m = 0, S = 0, F = u.YGFlexDirectionIsRow(i), v = t.getStyle().flexWrap != n.YGWrap.NoWrap, D = 0; D < e.relativeChildren.length; ++D) {
            var x = e.relativeChildren[D],
                M = h = u.YGUnwrapFloatOptional(V(x, i, u.YGUnwrapFloatOptional(x.getLayout().computedFlexBasis), r));
            !Y(e.remainingFreeSpace) && e.remainingFreeSpace < 0 ? 0 != (p = -x.resolveFlexShrink() * h) && (M = W(x, i, Y(e.totalFlexShrinkScaledFactors) || 0 != e.totalFlexShrinkScaledFactors ? h + e.remainingFreeSpace / e.totalFlexShrinkScaledFactors * p : h + p, a, l)) : !Y(e.remainingFreeSpace) && e.remainingFreeSpace > 0 && (Y(m = x.resolveFlexGrow()) || 0 == m || (M = W(x, i, h + e.remainingFreeSpace / e.totalFlexGrowFactors * m, a, l))), S += M - h;
            var L = u.YGUnwrapFloatOptional(x.getMarginForAxis(i, l)),
                w = u.YGUnwrapFloatOptional(x.getMarginForAxis(o, l)),
                U = void 0,
                E = M + L,
                C = void 0,
                A = n.YGMeasureMode.Exactly;
            if (x.getStyle().aspectRatio.isUndefined())
                if (Y(s) || O(x, o, s) || c != n.YGMeasureMode.Exactly || v && G || N(t, x) != n.YGAlign.Stretch || x.marginLeadingValue(o).unit == n.YGUnit.Auto || x.marginTrailingValue(o).unit == n.YGUnit.Auto)
                    if (O(x, o, s)) {
                        U = u.YGUnwrapFloatOptional(u.YGResolveValue(x.getResolvedDimension(d.dim[o]), s)) + w;
                        var _ = x.getResolvedDimension(d.dim[o]).unit == n.YGUnit.Percent && c != n.YGMeasureMode.Exactly;
                        C = Y(U) || _ ? n.YGMeasureMode.Undefined : n.YGMeasureMode.Exactly
                    } else C = Y(U = s) ? n.YGMeasureMode.Undefined : n.YGMeasureMode.AtMost;
            else U = s, C = n.YGMeasureMode.Exactly;
            else U = F ? (E - L) / x.getStyle().aspectRatio.getValue() : (E - L) * x.getStyle().aspectRatio.getValue(), C = n.YGMeasureMode.Exactly, U += w;
            var P = {
                    value: A
                },
                R = {
                    value: E
                },
                T = {
                    value: C
                },
                I = {
                    value: U
                };
            b(x, i, a, l, P, R), b(x, o, s, l, T, I), A = P.value, E = R.value, C = T.value, U = I.value;
            var B = !O(x, o, s) && N(t, x) == n.YGAlign.Stretch && x.marginLeadingValue(o).unit != n.YGUnit.Auto && x.marginTrailingValue(o).unit != n.YGUnit.Auto,
                H = F ? A : C,
                k = F ? C : A;
            ce(x, F ? E : U, F ? U : E, t.getLayout().direction, H, k, l, g, f && !B, "flex", y), t.setLayoutHadOverflow(t.getLayout().hadOverflow || x.getLayout().hadOverflow)
        }
        return S
    }

    function Q(e, t, i, n, o) {
        for (var r = 0, a = 0, s = 0, l = 0, d = 0, g = 0; g < e.relativeChildren.length; ++g) {
            var G = e.relativeChildren[g],
                c = u.YGUnwrapFloatOptional(V(G, t, u.YGUnwrapFloatOptional(G.getLayout().computedFlexBasis), i));
            e.remainingFreeSpace < 0 ? Y(r = -G.resolveFlexShrink() * c) || 0 == r || (l = W(G, t, s = c + e.remainingFreeSpace / e.totalFlexShrinkScaledFactors * r, n, o), Y(s) || Y(l) || s == l || (d += l - c, e.totalFlexShrinkScaledFactors -= r)) : !Y(e.remainingFreeSpace) && e.remainingFreeSpace > 0 && (Y(a = G.resolveFlexGrow()) || 0 == a || (l = W(G, t, s = c + e.remainingFreeSpace / e.totalFlexGrowFactors * a, n, o), Y(s) || Y(l) || s == l || (d += l - c, e.totalFlexGrowFactors -= a)))
        }
        e.remainingFreeSpace -= d
    }

    function $(e, t, i, n, o, r, a, s, l, u, d, g, G) {
        var c = t.remainingFreeSpace;
        Q(t, i, o, r, s);
        var Y = K(t, e, i, n, o, r, a, s, l, u, d, g, G);
        t.remainingFreeSpace = c - Y
    }

    function ee(e, t, i, o, r, a, s, l, g, G, c, Y, f) {
        var y = e.getStyle();
        a == n.YGMeasureMode.AtMost && t.remainingFreeSpace > 0 && (y.minDimensions[d.dim[o]].unit == n.YGUnit.Undefined || u.YGResolveValue(y.minDimensions[d.dim[o]], l).isUndefined() ? t.remainingFreeSpace = 0 : t.remainingFreeSpace = u.YGFloatMax(0, u.YGUnwrapFloatOptional(u.YGResolveValue(y.minDimensions[d.dim[o]], l)) - (G - t.remainingFreeSpace)));
        for (var h = 0, p = i; p < t.endOfLineIndex; p++)(D = e.getChild(p)).getStyle().positionType == n.YGPositionType.Relative && (D.marginLeadingValue(o).unit == n.YGUnit.Auto && h++, D.marginTrailingValue(o).unit == n.YGUnit.Auto && h++);
        var m = 0,
            S = 0,
            F = e.getStyle().justifyContent;
        if (0 == h) switch (F) {
            case n.YGJustify.Center:
                m = t.remainingFreeSpace / 2;
                break;
            case n.YGJustify.FlexEnd:
                m = t.remainingFreeSpace;
                break;
            case n.YGJustify.SpaceBetween:
                S = t.itemsOnLine > 1 ? u.YGFloatMax(t.remainingFreeSpace, 0) / (t.itemsOnLine - 1) : 0;
                break;
            case n.YGJustify.SpaceEvenly:
                m = S = t.remainingFreeSpace / (t.itemsOnLine + 1);
                break;
            case n.YGJustify.SpaceAround:
                m = (S = t.remainingFreeSpace / t.itemsOnLine) / 2;
                break;
            case n.YGJustify.FlexStart:
        }
        var v = u.YGUnwrapFloatOptional(e.getLeadingPaddingAndBorder(o, g));
        for (t.mainDim = v + m, t.crossDim = 0, p = i; p < t.endOfLineIndex; p++) {
            var D, x = (D = e.getChild(p)).getStyle(),
                M = D.getLayout();
            x.display != n.YGDisplay.None && (x.positionType == n.YGPositionType.Absolute && D.isLeadingPositionDefined(o) ? f && D.setLayoutPosition(u.YGUnwrapFloatOptional(D.getLeadingPosition(o, G)) + e.getLeadingBorder(o) + u.YGUnwrapFloatOptional(D.getLeadingMargin(o, Y)), d.pos[o]) : x.positionType == n.YGPositionType.Relative ? (D.marginLeadingValue(o).unit == n.YGUnit.Auto && (t.mainDim += t.remainingFreeSpace / h), f && D.setLayoutPosition(M.position[d.pos[o]] + t.mainDim, d.pos[o]), D.marginTrailingValue(o).unit == n.YGUnit.Auto && (t.mainDim += t.remainingFreeSpace / h), f || s != n.YGMeasureMode.Exactly ? (t.mainDim += S + R(D, o, Y), t.crossDim = u.YGFloatMax(t.crossDim, R(D, r, Y))) : (t.mainDim += S + u.YGUnwrapFloatOptional(D.getMarginForAxis(o, Y)) + u.YGUnwrapFloatOptional(M.computedFlexBasis), t.crossDim = c)) : f && D.setLayoutPosition(M.position[d.pos[o]] + e.getLeadingBorder(o) + m, d.pos[o]))
        }
        t.mainDim += u.YGUnwrapFloatOptional(e.getTrailingPaddingAndBorder(o, g))
    }

    function te(e, t, i, o, r, a, s, l, g, G) {
        me(e, !Y(t) || r == n.YGMeasureMode.Undefined, "availableWidth is indefinite so widthMeasureMode must be YGMeasureMode.Undefined"), me(e, !Y(i) || a == n.YGMeasureMode.Undefined, "availableHeight is indefinite so heightMeasureMode must be YGMeasureMode.Undefined");
        var c = e.resolveDirection(o);
        e.setLayoutDirection(c);
        var f = u.YGResolveFlexDirection(n.YGFlexDirection.Row, c),
            y = u.YGResolveFlexDirection(n.YGFlexDirection.Column, c);
        if (e.setLayoutMargin(u.YGUnwrapFloatOptional(e.getLeadingMargin(f, s)), n.YGEdge.Start), e.setLayoutMargin(u.YGUnwrapFloatOptional(e.getTrailingMargin(f, s)), n.YGEdge.End), e.setLayoutMargin(u.YGUnwrapFloatOptional(e.getLeadingMargin(y, s)), n.YGEdge.Top), e.setLayoutMargin(u.YGUnwrapFloatOptional(e.getTrailingMargin(y, s)), n.YGEdge.Bottom), e.setLayoutBorder(e.getLeadingBorder(f), n.YGEdge.Start), e.setLayoutBorder(e.getTrailingBorder(f), n.YGEdge.End), e.setLayoutBorder(e.getLeadingBorder(y), n.YGEdge.Top), e.setLayoutBorder(e.getTrailingBorder(y), n.YGEdge.Bottom), e.setLayoutPadding(u.YGUnwrapFloatOptional(e.getLeadingPadding(f, s)), n.YGEdge.Start), e.setLayoutPadding(u.YGUnwrapFloatOptional(e.getTrailingPadding(f, s)), n.YGEdge.End), e.setLayoutPadding(u.YGUnwrapFloatOptional(e.getLeadingPadding(y, s)), n.YGEdge.Top), e.setLayoutPadding(u.YGUnwrapFloatOptional(e.getTrailingPadding(y, s)), n.YGEdge.Bottom), null == e.getMeasure()) {
            var h = E(e);
            if (0 != h) {
                if (g || !z(e, t, i, r, a, s, l)) {
                    e.cloneChildrenIfNeeded(), e.setLayoutHadOverflow(!1);
                    var p = u.YGResolveFlexDirection(e.getStyle().flexDirection, c),
                        m = u.YGFlexDirectionCross(p, c),
                        S = u.YGFlexDirectionIsRow(p),
                        F = e.getStyle().flexWrap != n.YGWrap.NoWrap,
                        v = S ? s : l,
                        D = S ? l : s,
                        x = u.YGUnwrapFloatOptional(e.getLeadingPaddingAndBorder(m, s)),
                        M = A(e, p, s),
                        L = A(e, m, s),
                        w = S ? r : a,
                        C = S ? a : r,
                        B = S ? M : L,
                        J = S ? L : M,
                        K = u.YGUnwrapFloatOptional(e.getMarginForAxis(n.YGFlexDirection.Row, s)),
                        Q = u.YGUnwrapFloatOptional(e.getMarginForAxis(n.YGFlexDirection.Column, s)),
                        te = u.YGUnwrapFloatOptional(u.YGResolveValue(e.getStyle().minDimensions[n.YGDimension.Width], s)) - B,
                        ie = u.YGUnwrapFloatOptional(u.YGResolveValue(e.getStyle().maxDimensions[n.YGDimension.Width], s)) - B,
                        ne = u.YGUnwrapFloatOptional(u.YGResolveValue(e.getStyle().minDimensions[n.YGDimension.Height], l)) - J,
                        oe = u.YGUnwrapFloatOptional(u.YGResolveValue(e.getStyle().maxDimensions[n.YGDimension.Height], l)) - J,
                        re = S ? te : ne,
                        ae = S ? ie : oe,
                        se = j(e, n.YGFlexDirection.Row, t, s),
                        le = j(e, n.YGFlexDirection.Column, i, l),
                        ue = S ? se : le,
                        de = S ? le : se,
                        ge = {
                            value: 0
                        };
                    X(e, se, le, r, a, c, p, G, g, ge);
                    var Ge = w != n.YGMeasureMode.Undefined && ge.value > ue;
                    F && Ge && w == n.YGMeasureMode.AtMost && (w = n.YGMeasureMode.Exactly);
                    for (var Ye, fe = 0, ye = 0, he = 0, pe = 0, Se = 0; ye < h; he++, fe = ye) {
                        ye = (Ye = Z(e, o, v, se, ue, fe, he)).endOfLineIndex;
                        var Fe = !g && C == n.YGMeasureMode.Exactly,
                            ve = !1;
                        w != n.YGMeasureMode.Exactly && (!Y(re) && Ye.sizeConsumedOnCurrentLine < re ? ue = re : !Y(ae) && Ye.sizeConsumedOnCurrentLine > ae ? ue = ae : (!e.getConfig().useLegacyStretchBehaviour && (Y(Ye.totalFlexGrowFactors) && 0 == Ye.totalFlexGrowFactors || Y(e.resolveFlexGrow()) && 0 == e.resolveFlexGrow()) && (ue = Ye.sizeConsumedOnCurrentLine), e.getConfig().useLegacyStretchBehaviour && e.setLayoutDidUseLegacyFlag(!0), ve = !e.getConfig().useLegacyStretchBehaviour)), ve || Y(ue) ? Ye.sizeConsumedOnCurrentLine < 0 && (Ye.remainingFreeSpace = -Ye.sizeConsumedOnCurrentLine) : Ye.remainingFreeSpace = ue - Ye.sizeConsumedOnCurrentLine, Fe || $(e, Ye, p, m, v, ue, de, se, le, Ge, C, g, G), e.setLayoutHadOverflow(e.getLayout().hadOverflow || Ye.remainingFreeSpace < 0), ee(e, Ye, fe, p, m, w, C, v, s, ue, de, se, g);
                        var De = de;
                        if (C != n.YGMeasureMode.Undefined && C != n.YGMeasureMode.AtMost || (De = W(e, m, Ye.crossDim + L, D, s) - L), F || C != n.YGMeasureMode.Exactly || (Ye.crossDim = de), Ye.crossDim = W(e, m, Ye.crossDim + L, D, s) - L, g)
                            for (var xe = fe; xe < ye; xe++)
                                if (($e = e.getChild(xe)).getStyle().display != n.YGDisplay.None)
                                    if ($e.getStyle().positionType == n.YGPositionType.Absolute) {
                                        var Me = $e.isLeadingPositionDefined(m);
                                        Me && $e.setLayoutPosition(u.YGUnwrapFloatOptional($e.getLeadingPosition(m, de)) + e.getLeadingBorder(m) + u.YGUnwrapFloatOptional($e.getLeadingMargin(m, se)), d.pos[m]), Me && !Y($e.getLayout().position[d.pos[m]]) || $e.setLayoutPosition(e.getLeadingBorder(m) + u.YGUnwrapFloatOptional($e.getLeadingMargin(m, se)), d.pos[m])
                                    } else {
                                        var Le = x,
                                            we = N(e, $e);
                                        if (we == n.YGAlign.Stretch && $e.marginLeadingValue(m).unit != n.YGUnit.Auto && $e.marginTrailingValue(m).unit != n.YGUnit.Auto) {
                                            if (!O($e, m, de)) {
                                                var Ue = $e.getLayout().measuredDimensions[d.dim[p]],
                                                    Ee = $e.getStyle().aspectRatio.isUndefined() ? Ye.crossDim : u.YGUnwrapFloatOptional($e.getMarginForAxis(m, se)) + (S ? Ue / $e.getStyle().aspectRatio.getValue() : Ue * $e.getStyle().aspectRatio.getValue());
                                                Ue += u.YGUnwrapFloatOptional($e.getMarginForAxis(p, se));
                                                var Ce = n.YGMeasureMode.Exactly,
                                                    Ae = n.YGMeasureMode.Exactly,
                                                    Ne = {
                                                        value: Ce
                                                    },
                                                    _e = {
                                                        value: Ue
                                                    },
                                                    Pe = {
                                                        value: Ae
                                                    },
                                                    Re = {
                                                        value: Ee
                                                    };
                                                b($e, p, ue, se, Ne, _e), b($e, m, de, se, Pe, Re), Ce = Ne.value, Ue = _e.value, Ae = Pe.value, Ee = Re.value, ce($e, Xe = S ? Ue : Ee, je = S ? Ee : Ue, c, Y(Xe) ? n.YGMeasureMode.Undefined : n.YGMeasureMode.Exactly, Y(je) ? n.YGMeasureMode.Undefined : n.YGMeasureMode.Exactly, se, le, !0, "stretch", G)
                                            }
                                        } else {
                                            var Oe = De - R($e, m, se);
                                            $e.marginLeadingValue(m).unit == n.YGUnit.Auto && $e.marginTrailingValue(m).unit == n.YGUnit.Auto ? Le += u.YGFloatMax(0, Oe / 2) : $e.marginTrailingValue(m).unit == n.YGUnit.Auto || ($e.marginLeadingValue(m).unit == n.YGUnit.Auto ? Le += u.YGFloatMax(0, Oe) : we == n.YGAlign.FlexStart || (we == n.YGAlign.Center ? Le += Oe / 2 : Le += Oe))
                                        }
                                        $e.setLayoutPosition($e.getLayout().position[d.pos[m]] + pe + Le, d.pos[m])
                                    } pe += Ye.crossDim, Se = u.YGFloatMax(Se, Ye.mainDim)
                    }
                    if (g && (he > 1 || P(e)) && !Y(de)) {
                        var Te = de - pe,
                            Ve = 0,
                            We = x;
                        switch (e.getStyle().alignContent) {
                            case n.YGAlign.FlexEnd:
                                We += Te;
                                break;
                            case n.YGAlign.Center:
                                We += Te / 2;
                                break;
                            case n.YGAlign.Stretch:
                                de > pe && (Ve = Te / he);
                                break;
                            case n.YGAlign.SpaceAround:
                                de > pe ? (We += Te / (2 * he), he > 1 && (Ve = Te / he)) : We += Te / 2;
                                break;
                            case n.YGAlign.SpaceBetween:
                                de > pe && he > 1 && (Ve = Te / (he - 1));
                                break;
                            case n.YGAlign.Auto:
                            case n.YGAlign.FlexStart:
                            case n.YGAlign.Baseline:
                        }
                        var Ie = 0;
                        for (xe = 0; xe < he; xe++) {
                            var be = Ie,
                                Be = void 0,
                                He = 0,
                                ke = 0,
                                qe = 0;
                            for (Be = be; Be < h; Be++)
                                if (($e = e.getChild(Be)).getStyle().display != n.YGDisplay.None && $e.getStyle().positionType == n.YGPositionType.Relative) {
                                    if ($e.getLineIndex() != xe) break;
                                    if (T($e, m) && (He = u.YGFloatMax(He, $e.getLayout().measuredDimensions[d.dim[m]] + u.YGUnwrapFloatOptional($e.getMarginForAxis(m, se)))), N(e, $e) == n.YGAlign.Baseline) {
                                        var ze = _($e) + u.YGUnwrapFloatOptional($e.getLeadingMargin(n.YGFlexDirection.Column, se)),
                                            Je = $e.getLayout().measuredDimensions[n.YGDimension.Height] + u.YGUnwrapFloatOptional($e.getMarginForAxis(n.YGFlexDirection.Column, se)) - ze;
                                        ke = u.YGFloatMax(ke, ze), qe = u.YGFloatMax(qe, Je), He = u.YGFloatMax(He, ke + qe)
                                    }
                                } if (Ie = Be, He += Ve, g)
                                for (Be = be; Be < Ie; Be++)
                                    if (($e = e.getChild(Be)).getStyle().display != n.YGDisplay.None && $e.getStyle().positionType == n.YGPositionType.Relative) switch (N(e, $e)) {
                                        case n.YGAlign.FlexStart:
                                            $e.setLayoutPosition(We + u.YGUnwrapFloatOptional($e.getLeadingMargin(m, se)), d.pos[m]);
                                            break;
                                        case n.YGAlign.FlexEnd:
                                            $e.setLayoutPosition(We + He - u.YGUnwrapFloatOptional($e.getTrailingMargin(m, se)) - $e.getLayout().measuredDimensions[d.dim[m]], d.pos[m]);
                                            break;
                                        case n.YGAlign.Center:
                                            var je = $e.getLayout().measuredDimensions[d.dim[m]];
                                            $e.setLayoutPosition(We + (He - je) / 2, d.pos[m]);
                                            break;
                                        case n.YGAlign.Stretch:
                                            if ($e.setLayoutPosition(We + u.YGUnwrapFloatOptional($e.getLeadingMargin(m, se)), d.pos[m]), !O($e, m, de)) {
                                                var Xe = S ? $e.getLayout().measuredDimensions[n.YGDimension.Width] + u.YGUnwrapFloatOptional($e.getMarginForAxis(p, se)) : He;
                                                je = S ? He : $e.getLayout().measuredDimensions[n.YGDimension.Height] + u.YGUnwrapFloatOptional($e.getMarginForAxis(m, se)), u.YGFloatsEqual(Xe, $e.getLayout().measuredDimensions[n.YGDimension.Width]) && u.YGFloatsEqual(je, $e.getLayout().measuredDimensions[n.YGDimension.Height]) || ce($e, Xe, je, c, n.YGMeasureMode.Exactly, n.YGMeasureMode.Exactly, se, le, !0, "multiline-stretch", G)
                                            }
                                            break;
                                        case n.YGAlign.Baseline:
                                            $e.setLayoutPosition(We + ke - _($e) + u.YGUnwrapFloatOptional($e.getLeadingPosition(n.YGFlexDirection.Column, de)), n.YGEdge.Top);
                                            break;
                                        case n.YGAlign.Auto:
                                        case n.YGAlign.SpaceBetween:
                                        case n.YGAlign.SpaceAround:
                                    }
                            We += He
                        }
                    }
                    if (e.setLayoutMeasuredDimension(W(e, n.YGFlexDirection.Row, t - K, s, s), n.YGDimension.Width), e.setLayoutMeasuredDimension(W(e, n.YGFlexDirection.Column, i - Q, l, s), n.YGDimension.Height), w == n.YGMeasureMode.Undefined || e.getStyle().overflow != n.YGOverflow.Scroll && w == n.YGMeasureMode.AtMost ? e.setLayoutMeasuredDimension(W(e, p, Se, v, s), d.dim[p]) : w == n.YGMeasureMode.AtMost && e.getStyle().overflow == n.YGOverflow.Scroll && e.setLayoutMeasuredDimension(u.YGFloatMax(u.YGFloatMin(ue + M, u.YGUnwrapFloatOptional(V(e, p, Se, v))), M), d.dim[p]), C == n.YGMeasureMode.Undefined || e.getStyle().overflow != n.YGOverflow.Scroll && C == n.YGMeasureMode.AtMost ? e.setLayoutMeasuredDimension(W(e, m, pe + L, D, s), d.dim[m]) : C == n.YGMeasureMode.AtMost && e.getStyle().overflow == n.YGOverflow.Scroll && e.setLayoutMeasuredDimension(u.YGFloatMax(u.YGFloatMin(de + L, u.YGUnwrapFloatOptional(V(e, m, pe + L, D))), L), d.dim[m]), g && e.getStyle().flexWrap == n.YGWrap.WrapReverse)
                        for (xe = 0; xe < h; xe++)($e = U(e, xe)).getStyle().positionType == n.YGPositionType.Relative && $e.setLayoutPosition(e.getLayout().measuredDimensions[d.dim[m]] - $e.getLayout().position[d.pos[m]] - $e.getLayout().measuredDimensions[d.dim[m]], d.pos[m]);
                    if (g) {
                        var Ze = e.getChildren();
                        for (xe = 0; xe < Ze.length; ++xe)($e = Ze[xe]).getStyle().positionType == n.YGPositionType.Absolute && H(e, $e, se, S ? w : C, le, c, G);
                        var Ke = p == n.YGFlexDirection.RowReverse || p == n.YGFlexDirection.ColumnReverse,
                            Qe = m == n.YGFlexDirection.RowReverse || m == n.YGFlexDirection.ColumnReverse;
                        if (Ke || Qe)
                            for (xe = 0; xe < h; xe++) {
                                var $e;
                                ($e = e.getChild(xe)).getStyle().display != n.YGDisplay.None && (Ke && I(e, $e, p), Qe && I(e, $e, m))
                            }
                    }
                }
            } else q(e, t, i, r, a, s, l)
        } else k(e, t, i, r, a, s, l)
    }
    t.YGNodePrintInternal = function(e, t) {}, t.YGNodePrint = function(e, t) {}, t.YGNodePaddingAndBorderForAxis = A, t.YGNodeAlignItem = N, t.YGBaseline = _, t.YGIsBaselineLayout = P, t.YGNodeDimWithMargin = R, t.YGNodeIsStyleDimDefined = O, t.YGNodeIsLayoutDimDefined = T, t.YGNodeBoundAxisWithinMinAndMax = V, t.YGNodeBoundAxis = W, t.YGNodeSetChildTrailingPosition = I, t.YGConstrainMaxSizeForMode = b, t.YGNodeComputeFlexBasisForChild = B, t.YGNodeAbsoluteLayoutChild = H, t.YGNodeWithMeasureFuncSetMeasuredDimensions = k, t.YGNodeEmptyContainerSetMeasuredDimensions = q, t.YGNodeFixedSizeSetMeasuredDimensions = z, t.YGZeroOutLayoutRecursivly = J, t.YGNodeCalculateAvailableInnerDim = j, t.YGNodeComputeFlexBasisForChildren = X, t.YGCalculateCollectFlexItemsRowValues = Z, t.YGDistributeFreeSpaceSecondPass = K, t.YGDistributeFreeSpaceFirstPass = Q, t.YGResolveFlexibleLength = $, t.YGJustifyMainAxis = ee, t.YGNodelayoutImpl = te;
    var ie = 0,
        ne = !1,
        oe = !1,
        re = "                                                            ";

    function ae(e) {
        var t = re.length;
        return e > t ? re : re.substr(t - e)
    }

    function se(e, t) {
        return e >= n.YGMeasureModeCount ? "" : t ? ["LAY_UNDEFINED", "LAY_EXACTLY", "LAY_AT_", "MOST"][e] : ["UNDEFINED", "EXACTLY", "AT_MOST"][e]
    }

    function le(e, t, i) {
        return e == n.YGMeasureMode.Exactly && u.YGFloatsEqual(t, i)
    }

    function ue(e, t, i, o) {
        return e == n.YGMeasureMode.AtMost && i == n.YGMeasureMode.Undefined && (t >= o || u.YGFloatsEqual(t, o))
    }

    function de(e, t, i, o, r) {
        return i == n.YGMeasureMode.AtMost && e == n.YGMeasureMode.AtMost && !Y(o) && !Y(t) && !Y(r) && o > t && (r <= t || u.YGFloatsEqual(t, r))
    }

    function ge(e, i, n, o) {
        var r = e * i,
            a = r % 1;
        return u.YGFloatsEqual(a, 0) ? r -= a : u.YGFloatsEqual(a, 1) ? r = r - a + 1 : n ? r = r - a + 1 : o ? r -= a : r = r - a + (!Y(a) && (a > .5 || u.YGFloatsEqual(a, .5)) ? 1 : 0), Y(r) || Y(i) ? t.YGUndefined : r / i
    }

    function Ge(e, t, i, n, o, r, a, s, l, d, g, G, c) {
        if (!Y(d) && d < 0 || !Y(l) && l < 0) return !1;
        var f = null != c && 0 != c.pointScaleFactor,
            y = f ? ge(t, c.pointScaleFactor, !1, !1) : t,
            h = f ? ge(n, c.pointScaleFactor, !1, !1) : n,
            p = f ? ge(r, c.pointScaleFactor, !1, !1) : r,
            m = f ? ge(s, c.pointScaleFactor, !1, !1) : s,
            S = o == e && u.YGFloatsEqual(p, y),
            F = a == i && u.YGFloatsEqual(m, h),
            v = S || le(e, t - g, l) || ue(e, t - g, o, l) || de(e, t - g, o, r, l),
            D = F || le(i, n - G, d) || ue(i, n - G, a, d) || de(i, n - G, a, s, d);
        return v && D
    }

    function ce(e, t, i, o, r, a, s, l, g, G, c) {
        var Y = e.getLayout();
        ie++;
        var f = e.isDirty() && Y.generationCount != C || Y.lastOwnerDirection != o;
        f && (Y.nextCachedMeasurementsIndex = 0, Y.cachedLayout.widthMeasureMode = n.YGMeasureModeCount - 1, Y.cachedLayout.heightMeasureMode = n.YGMeasureModeCount - 1, Y.cachedLayout.computedWidth = -1, Y.cachedLayout.computedHeight = -1);
        var y = null;
        if (null != e.getMeasure()) {
            var h = u.YGUnwrapFloatOptional(e.getMarginForAxis(n.YGFlexDirection.Row, s)),
                p = u.YGUnwrapFloatOptional(e.getMarginForAxis(n.YGFlexDirection.Column, s));
            if (Ge(r, t, a, i, Y.cachedLayout.widthMeasureMode, Y.cachedLayout.availableWidth, Y.cachedLayout.heightMeasureMode, Y.cachedLayout.availableHeight, Y.cachedLayout.computedWidth, Y.cachedLayout.computedHeight, h, p, c)) y = Y.cachedLayout;
            else
                for (var m = 0; m < Y.nextCachedMeasurementsIndex; m++)
                    if (Ge(r, t, a, i, Y.cachedMeasurements[m].widthMeasureMode, Y.cachedMeasurements[m].availableWidth, Y.cachedMeasurements[m].heightMeasureMode, Y.cachedMeasurements[m].availableHeight, Y.cachedMeasurements[m].computedWidth, Y.cachedMeasurements[m].computedHeight, h, p, c)) {
                        y = Y.cachedMeasurements[m];
                        break
                    }
        } else if (g) u.YGFloatsEqual(Y.cachedLayout.availableWidth, t) && u.YGFloatsEqual(Y.cachedLayout.availableHeight, i) && Y.cachedLayout.widthMeasureMode == r && Y.cachedLayout.heightMeasureMode == a && (y = Y.cachedLayout);
        else
            for (m = 0; m < Y.nextCachedMeasurementsIndex; m++)
                if (u.YGFloatsEqual(Y.cachedMeasurements[m].availableWidth, t) && u.YGFloatsEqual(Y.cachedMeasurements[m].availableHeight, i) && Y.cachedMeasurements[m].widthMeasureMode == r && Y.cachedMeasurements[m].heightMeasureMode == a) {
                    y = Y.cachedMeasurements[m];
                    break
                } if (f || null == y) {
            if (ne && (pe(e, n.YGLogLevel.Verbose, "%s%d.{%s", ae(ie), ie, f ? "*" : ""), null != e.getPrintFunc() && e.getPrintFunc()(e), pe(e, n.YGLogLevel.Verbose, "wm: %s, hm: %s, aw: %f ah: %f %s\n", se(r, g), se(a, g), t, i, G)), te(e, t, i, o, r, a, s, l, g, c), ne && (pe(e, n.YGLogLevel.Verbose, "%s%d.}%s", ae(ie), ie, f ? "*" : ""), null != e.getPrintFunc() && e.getPrintFunc()(e), pe(e, n.YGLogLevel.Verbose, "wm: %s, hm: %s, d: (%f, %f) %s\n", se(r, g), se(a, g), Y.measuredDimensions[n.YGDimension.Width], Y.measuredDimensions[n.YGDimension.Height], G)), Y.lastOwnerDirection = o, null == y) {
                Y.nextCachedMeasurementsIndex == d.YG_MAX_CACHED_RESULT_COUNT && (ne && pe(e, n.YGLogLevel.Verbose, "Out of cache entries!\n"), Y.nextCachedMeasurementsIndex = 0);
                var S = void 0;
                g ? S = Y.cachedLayout : (S = Y.cachedMeasurements[Y.nextCachedMeasurementsIndex], Y.nextCachedMeasurementsIndex++), S.availableWidth = t, S.availableHeight = i, S.widthMeasureMode = r, S.heightMeasureMode = a, S.computedWidth = Y.measuredDimensions[n.YGDimension.Width], S.computedHeight = Y.measuredDimensions[n.YGDimension.Height]
            }
        } else Y.measuredDimensions[n.YGDimension.Width] = y.computedWidth, Y.measuredDimensions[n.YGDimension.Height] = y.computedHeight, ne && oe && (pe(e, n.YGLogLevel.Verbose, "%s%d.{[skipped] ", ae(ie), ie), null != e.getPrintFunc() && e.getPrintFunc()(e), pe(e, n.YGLogLevel.Verbose, "wm: %s, hm: %s, aw: %f ah: %f => d: (%f, %f) %s\n", se(r, g), se(a, g), t, i, y.computedWidth, y.computedHeight, G));
        return g && (e.setLayoutDimension(e.getLayout().measuredDimensions[n.YGDimension.Width], n.YGDimension.Width), e.setLayoutDimension(e.getLayout().measuredDimensions[n.YGDimension.Height], n.YGDimension.Height), e.setHasNewLayout(!0), e.setDirty(!1)), ie--, Y.generationCount = C, f || null == y
    }

    function Ye(e, t) {
        return e % t
    }

    function fe(e, t, i, o) {
        if (0 != t) {
            var r = e.getLayout().position[n.YGEdge.Left],
                a = e.getLayout().position[n.YGEdge.Top],
                s = e.getLayout().dimensions[n.YGDimension.Width],
                l = e.getLayout().dimensions[n.YGDimension.Height],
                d = i + r,
                g = o + a,
                G = d + s,
                c = g + l,
                Y = e.getNodeType() == n.YGNodeType.Text;
            e.setLayoutPosition(ge(r, t, !1, Y), n.YGEdge.Left), e.setLayoutPosition(ge(a, t, !1, Y), n.YGEdge.Top);
            var f = !u.YGFloatsEqual(Ye(s * t, 1), 0) && !u.YGFloatsEqual(Ye(s * t, 1), 1),
                y = !u.YGFloatsEqual(Ye(l * t, 1), 0) && !u.YGFloatsEqual(Ye(l * t, 1), 1);
            e.setLayoutDimension(ge(G, t, Y && f, Y && !f) - ge(d, t, !1, Y), n.YGDimension.Width), e.setLayoutDimension(ge(c, t, Y && y, Y && !y) - ge(g, t, !1, Y), n.YGDimension.Height);
            for (var h = E(e), p = 0; p < h; p++) fe(U(e, p), t, d, g)
        }
    }

    function ye(e, t, i, o) {
        for (var r = [], a = 4; a < arguments.length; a++) r[a - 4] = arguments[a];
        var s = null != e ? e : p();
        if (s.logger(s, t, i, o, r), i == n.YGLogLevel.Fatal) throw new Error("Abort Yoga")
    }

    function he(e, t, i) {
        for (var n = [], o = 3; o < arguments.length; o++) n[o - 3] = arguments[o];
        ye(e, null, t, i, n)
    }

    function pe(e, t, i) {
        for (var n = [], o = 3; o < arguments.length; o++) n[o - 3] = arguments[o];
        ye(null == e ? null : e.getConfig(), e, t, i, n)
    }

    function me(e, t, i) {
        t || pe(e, n.YGLogLevel.Fatal, "%s\n", i)
    }

    function Se(e, t, i) {
        t || he(e, n.YGLogLevel.Fatal, "%s\n", i)
    }

    function Fe(e, t) {
        return e.experimentalFeatures[t]
    }

    function ve(e, t) {
        for (var i = 0; i < e.length; ++i) {
            var n = e[i];
            t(n), ve(n.getChildren(), t)
        }
    }
    t.YGSpacer = ae, t.YGMeasureModeName = se, t.YGMeasureModeSizeIsExactAndMatchesOldMeasuredSize = le, t.YGMeasureModeOldSizeIsUnspecifiedAndStillFits = ue, t.YGMeasureModeNewMeasureSizeIsStricterAndStillValid = de, t.YGRoundValueToPixelGrid = ge, t.YGNodeCanUseCachedMeasurement = Ge, t.YGLayoutNodeInternal = ce, t.YGConfigSetPointScaleFactor = function(e, t) {
        Se(e, t >= 0, "Scale factor should not be less than zero"), e.pointScaleFactor = 0 == t ? 0 : t
    }, t.YGRoundToPixelGrid = fe, t.YGNodeCalculateLayout = function(e, i, o, r) {
        C++, e.resolveDimension();
        var a = t.YGUndefined,
            s = n.YGMeasureMode.Undefined;
        O(e, n.YGFlexDirection.Row, i) ? (a = u.YGUnwrapFloatOptional(u.YGResolveValue(e.getResolvedDimension(d.dim[n.YGFlexDirection.Row]), i).add(e.getMarginForAxis(n.YGFlexDirection.Row, i))), s = n.YGMeasureMode.Exactly) : u.YGResolveValue(e.getStyle().maxDimensions[n.YGDimension.Width], i).isUndefined() ? s = Y(a = i) ? n.YGMeasureMode.Undefined : n.YGMeasureMode.Exactly : (a = u.YGUnwrapFloatOptional(u.YGResolveValue(e.getStyle().maxDimensions[n.YGDimension.Width], i)), s = n.YGMeasureMode.AtMost);
        var l = t.YGUndefined,
            g = n.YGMeasureMode.Undefined;
        if (O(e, n.YGFlexDirection.Column, o) ? (l = u.YGUnwrapFloatOptional(u.YGResolveValue(e.getResolvedDimension(d.dim[n.YGFlexDirection.Column]), o).add(e.getMarginForAxis(n.YGFlexDirection.Column, i))), g = n.YGMeasureMode.Exactly) : u.YGResolveValue(e.getStyle().maxDimensions[n.YGDimension.Height], o).isUndefined() ? g = Y(l = o) ? n.YGMeasureMode.Undefined : n.YGMeasureMode.Exactly : (l = u.YGUnwrapFloatOptional(u.YGResolveValue(e.getStyle().maxDimensions[n.YGDimension.Height], o)), g = n.YGMeasureMode.AtMost), ce(e, a, l, r, s, g, i, o, !0, "initial", e.getConfig()) && (e.setPosition(e.getLayout().direction, i, o, i), fe(e, e.getConfig().pointScaleFactor, 0, 0)), e.getConfig().shouldDiffLayoutWithoutLegacyStretchBehaviour && e.didUseLegacyFlag()) {
            console.log("legacy config");
            var G = F(e);
            G.resolveDimension(), G.markDirtyAndPropogateDownwards(), C++, G.setAndPropogateUseLegacyFlag(!1), ce(G, a, l, r, s, g, i, o, !0, "initial", G.getConfig()) && (G.setPosition(G.getLayout().direction, i, o, i), fe(G, G.getConfig().pointScaleFactor, 0, 0), e.setLayoutDoesLegacyFlagAffectsLayout(!G.isLayoutTreeEqualToNode(e))), D(G), x(G)
        }
    }, t.YGConfigSetLogger = function(e, t) {
        e.logger = null != t ? t : c
    }, t.YGConfigSetShouldDiffLayoutWithoutLegacyStretchBehaviour = function(e, t) {
        e.shouldDiffLayoutWithoutLegacyStretchBehaviour = t
    }, t.YGVLog = ye, t.YGLogWithConfig = he, t.YGLog = pe, t.YGAssert = function(e, t) {
        e || pe(null, n.YGLogLevel.Fatal, "%s\n", t)
    }, t.YGAssertWithNode = me, t.YGAssertWithConfig = Se, t.YGConfigSetExperimentalFeatureEnabled = function(e, t, i) {
        e.experimentalFeatures[t] = i
    }, t.YGConfigIsExperimentalFeatureEnabled = Fe, t.YGConfigSetUseWebDefaults = function(e, t) {
        e.useWebDefaults = t
    }, t.YGConfigSetUseLegacyStretchBehaviour = function(e, t) {
        e.useLegacyStretchBehaviour = t
    }, t.YGConfigGetUseWebDefaults = function(e) {
        return e.useWebDefaults
    }, t.YGConfigSetContext = function(e, t) {
        e.context = t
    }, t.YGConfigGetContext = function(e) {
        return e.context
    }, t.YGConfigSetCloneNodeFunc = function(e, t) {
        e.cloneNodeCallback = t
    }, t.YGTraverseChildrenPreOrder = ve, t.YGTraversePreOrder = function(e, t) {
        e && (t(e), ve(e.getChildren(), t))
    }
}, function(e, t, i) {
    "use strict";
    t.__esModule = !0;
    var n = i(1),
        o = function() {
            function e(t) {
                if (void 0 === t && (t = void 0), t instanceof e) return this.value_ = t.getValue(), void(this.isUndefined_ = t.isUndefined());
                n.YGFloatIsUndefined(t) ? (this.value_ = 0, this.isUndefined_ = !0) : (this.value_ = t, this.isUndefined_ = !1)
            }
            return e.prototype.clone = function() {
                return new e(this.isUndefined_ ? void 0 : this.value_)
            }, e.prototype.getValue = function() {
                if (this.isUndefined_) throw "Tried to get value of an undefined YGFloatOptional";
                return this.value_
            }, e.prototype.setValue = function(e) {
                this.value_ = e, this.isUndefined_ = !1
            }, e.prototype.isUndefined = function() {
                return this.isUndefined_
            }, e.prototype.add = function(t) {
                return this.isUndefined_ || t.isUndefined() ? new e : new e(this.value_ + t.getValue())
            }, e.prototype.isBigger = function(e) {
                return !this.isUndefined_ && !e.isUndefined() && this.value_ > e.getValue()
            }, e.prototype.isSmaller = function(e) {
                return !this.isUndefined_ && !e.isUndefined() && this.value_ < e.getValue()
            }, e.prototype.isBiggerEqual = function(e) {
                return !!this.isEqual(e) || this.isBigger(e)
            }, e.prototype.isSmallerEqual = function(e) {
                return !!this.isEqual(e) || this.isSmaller(e)
            }, e.prototype.isEqual = function(e) {
                return this.isUndefined_ == e.isUndefined() && (!!this.isUndefined_ || this.value_ == e.getValue())
            }, e.prototype.isDiff = function(e) {
                return !this.isEqual(e)
            }, e.prototype.isEqualValue = function(e) {
                return n.YGFloatIsUndefined(e) == this.isUndefined_ && (this.isUndefined_ || e == this.value_)
            }, e.prototype.isDiffValue = function(e) {
                return !this.isEqualValue(e)
            }, e
        }();
    t.YGFloatOptional = o
}, function(e, t, i) {
    "use strict";
    t.__esModule = !0;
    var n = i(0),
        o = i(2),
        r = i(1),
        a = function() {
            this.itemsOnLine = 0, this.sizeConsumedOnCurrentLine = 0, this.totalFlexGrowFactors = 0, this.totalFlexShrinkScaledFactors = 0, this.endOfLineIndex = 0, this.relativeChildren = [], this.remainingFreeSpace = 0, this.mainDim = 0, this.crossDim = 0
        };

    function s(e, t) {
        return e.unit == t.unit && (!!(e.unit == n.YGUnit.Undefined || r.YGFloatIsUndefined(e.value) && r.YGFloatIsUndefined(t.value)) || Math.abs(e.value - t.value) < 1e-4)
    }

    function l(e, t) {
        return r.YGFloatIsUndefined(e) || r.YGFloatIsUndefined(t) ? r.YGFloatIsUndefined(e) && r.YGFloatIsUndefined(t) : Math.abs(e - t) < 1e-4
    }

    function u(e, t) {
        switch (e.unit) {
            case n.YGUnit.Undefined:
            case n.YGUnit.Auto:
                return new o.YGFloatOptional;
            case n.YGUnit.Point:
                return new o.YGFloatOptional(e.value);
            case n.YGUnit.Percent:
                return new o.YGFloatOptional(e.value * t * .01)
        }
        return new o.YGFloatOptional
    }

    function d(e) {
        return e == n.YGFlexDirection.Column || e == n.YGFlexDirection.ColumnReverse
    }

    function g(e, t) {
        if (t == n.YGDirection.RTL) {
            if (e == n.YGFlexDirection.Row) return n.YGFlexDirection.RowReverse;
            if (e == n.YGFlexDirection.RowReverse) return n.YGFlexDirection.Row
        }
        return e
    }
    t.YGCollectFlexItemsRowValues = a, t.YGValueEqual = s, t.YGFloatsEqual = l, t.YGFloatMax = function(e, t) {
        return r.YGFloatIsUndefined(e) || r.YGFloatIsUndefined(t) ? r.YGFloatIsUndefined(e) ? t : e : Math.max(e, t)
    }, t.YGFloatOptionalMax = function(e, t) {
        return e.isUndefined() || t.isUndefined() ? e.isUndefined() ? t : e : e.getValue() > t.getValue() ? e : t
    }, t.YGFloatMin = function(e, t) {
        return r.YGFloatIsUndefined(e) || r.YGFloatIsUndefined(t) ? r.YGFloatIsUndefined(e) ? t : e : Math.min(e, t)
    }, t.YGFloatArrayEqual = function(e, t) {
        for (var i = !0, n = 0; n < e.length && i; ++n) i = l(e[n], t[n]);
        return i
    }, t.YGValueArrayEqual = function(e, t) {
        for (var i = !0, n = 0; n < e.length && i; ++n) i = s(e[n], t[n]);
        return i
    }, t.YGFloatSanitize = function(e) {
        return r.YGFloatIsUndefined(e) ? 0 : e
    }, t.YGUnwrapFloatOptional = function(e) {
        return e.isUndefined() ? r.YGUndefined : e.getValue()
    }, t.YGFlexDirectionCross = function(e, t) {
        return d(e) ? g(n.YGFlexDirection.Row, t) : n.YGFlexDirection.Column
    }, t.YGFlexDirectionIsRow = function(e) {
        return e == n.YGFlexDirection.Row || e == n.YGFlexDirection.RowReverse
    }, t.YGResolveValue = u, t.YGFlexDirectionIsColumn = d, t.YGResolveFlexDirection = g, t.YGResolveValueMargin = function(e, t) {
        return e.unit == n.YGUnit.Auto ? new o.YGFloatOptional(0) : u(e, t)
    }, t.cloneYGValueArray = function(e) {
        for (var t = new Array(e.length), i = 0; i < e.length; i++) t[i] = e[i].clone();
        return t
    }
}, function(e, t, i) {
    "use strict";
    t.__esModule = !0;
    var n = i(0),
        o = i(1),
        r = function() {
            function e() {
                this.availableWidth = 0, this.availableHeight = 0, this.widthMeasureMode = n.YGMeasureMode.AtMost, this.heightMeasureMode = n.YGMeasureMode.AtMost, this.computedWidth = -1, this.computedHeight = -1
            }
            return e.prototype.isEqual = function(e) {
                var t = this.widthMeasureMode == e.widthMeasureMode && this.heightMeasureMode == e.heightMeasureMode;
                return o.YGFloatIsUndefined(this.availableWidth) && o.YGFloatIsUndefined(e.availableWidth) || (t = t && this.availableWidth == e.availableWidth), o.YGFloatIsUndefined(this.availableHeight) && o.YGFloatIsUndefined(e.availableHeight) || (t = t && this.availableHeight == e.availableHeight), o.YGFloatIsUndefined(this.computedWidth) && o.YGFloatIsUndefined(e.computedWidth) || (t = t && this.computedWidth == e.computedWidth), o.YGFloatIsUndefined(this.computedHeight) && o.YGFloatIsUndefined(e.computedHeight) || (t = t && this.computedHeight == e.computedHeight), t
            }, e.prototype.clone = function() {
                var t = new e;
                return t.availableWidth = this.availableWidth, t.availableHeight = this.availableHeight, t.widthMeasureMode = this.widthMeasureMode, t.heightMeasureMode = this.heightMeasureMode, t.computedWidth = this.computedWidth, t.computedHeight = this.computedHeight, t
            }, e
        }();
    t.YGCachedMeasurement = r, t.leading = [n.YGEdge.Top, n.YGEdge.Bottom, n.YGEdge.Left, n.YGEdge.Right], t.trailing = [n.YGEdge.Bottom, n.YGEdge.Top, n.YGEdge.Right, n.YGEdge.Left], t.pos = [n.YGEdge.Top, n.YGEdge.Bottom, n.YGEdge.Left, n.YGEdge.Right], t.dim = [n.YGDimension.Height, n.YGDimension.Height, n.YGDimension.Width, n.YGDimension.Width], t.YG_MAX_CACHED_RESULT_COUNT = 16, t.kDefaultFlexGrow = 0, t.kDefaultFlexShrink = 0, t.kWebDefaultFlexShrink = 1
}, function(e, t, i) {
    "use strict";
    t.__esModule = !0;
    var n = function(e) {
        this.cloneNodeCallback = null, this.experimentalFeatures = [!1, !1, !1], this.useWebDefaults = !1, this.useLegacyStretchBehaviour = !1, this.shouldDiffLayoutWithoutLegacyStretchBehaviour = !1, this.pointScaleFactor = 1, this.logger = e, this.context = null
    };
    t.YGConfig = n
}, function(e, t, i) {
    "use strict";
    t.__esModule = !0;
    var n = i(0),
        o = i(2),
        r = i(4),
        a = i(3),
        s = i(1),
        l = function() {
            return [void 0, void 0]
        },
        u = 16;

    function d(e) {
        for (var t = [], i = 0; i < e; i++) t.push(new r.YGCachedMeasurement);
        return t
    }
    var g = function() {
        function e() {
            this.dimensions = l(), this.direction = n.YGDirection.Inherit, this.computedFlexBasisGeneration = 0, this.computedFlexBasis = new o.YGFloatOptional, this.hadOverflow = !1, this.generationCount = 0, this.lastOwnerDirection = n.YGDirection.RTL, this.nextCachedMeasurementsIndex = 0, this.measuredDimensions = l(), this.cachedLayout = new r.YGCachedMeasurement, this.didUseLegacyFlag = !1, this.doesLegacyStretchFlagAffectsLayout = !1, this.position = [void 0, void 0, void 0, void 0], this.margin = [void 0, void 0, void 0, void 0, void 0, void 0], this.border = [void 0, void 0, void 0, void 0, void 0, void 0], this.padding = [void 0, void 0, void 0, void 0, void 0, void 0], this.cachedMeasurements = d(u)
        }
        return e.prototype.equal = function(e) {
            for (var t = a.YGFloatArrayEqual(this.position, e.position) && a.YGFloatArrayEqual(this.dimensions, e.dimensions) && a.YGFloatArrayEqual(this.margin, e.margin) && a.YGFloatArrayEqual(this.border, e.border) && a.YGFloatArrayEqual(this.padding, e.padding) && this.direction == e.direction && this.hadOverflow == e.hadOverflow && this.lastOwnerDirection == e.lastOwnerDirection && this.nextCachedMeasurementsIndex == e.nextCachedMeasurementsIndex && this.cachedLayout == e.cachedLayout && this.computedFlexBasis == e.computedFlexBasis, i = 0; i < u && t; ++i) t = t && this.cachedMeasurements[i] == e.cachedMeasurements[i];
            return s.YGFloatIsUndefined(this.measuredDimensions[0]) && s.YGFloatIsUndefined(e.measuredDimensions[0]) || (t = t && this.measuredDimensions[0] == e.measuredDimensions[0]), s.YGFloatIsUndefined(this.measuredDimensions[1]) && s.YGFloatIsUndefined(e.measuredDimensions[1]) || (t = t && this.measuredDimensions[1] == e.measuredDimensions[1]), t
        }, e.prototype.diff = function(e) {
            return !this.equal(e)
        }, e.prototype.clean = function() {
            this.dimensions = l(), this.direction = n.YGDirection.Inherit, this.computedFlexBasisGeneration = 0, this.computedFlexBasis = new o.YGFloatOptional, this.hadOverflow = !1, this.generationCount = 0, this.lastOwnerDirection = n.YGDirection.RTL, this.nextCachedMeasurementsIndex = 0, this.measuredDimensions = l(), this.cachedLayout = new r.YGCachedMeasurement, this.didUseLegacyFlag = !1, this.doesLegacyStretchFlagAffectsLayout = !1, this.position = [void 0, void 0, void 0, void 0], this.margin = [void 0, void 0, void 0, void 0, void 0, void 0], this.border = [void 0, void 0, void 0, void 0, void 0, void 0], this.padding = [void 0, void 0, void 0, void 0, void 0, void 0], this.cachedMeasurements = d(u)
        }, e.prototype.clone = function() {
            var t = new e;
            return t.dimensions = [this.dimensions[0], this.dimensions[1]], t.direction = this.direction, t.computedFlexBasisGeneration = this.computedFlexBasisGeneration, t.computedFlexBasis = this.computedFlexBasis.clone(), t.hadOverflow = this.hadOverflow, t.generationCount = this.generationCount, t.lastOwnerDirection = this.lastOwnerDirection, t.nextCachedMeasurementsIndex = this.nextCachedMeasurementsIndex, t.measuredDimensions = [this.measuredDimensions[0], this.measuredDimensions[1]], t.cachedLayout = this.cachedLayout.clone(), t.didUseLegacyFlag = this.didUseLegacyFlag, t.doesLegacyStretchFlagAffectsLayout = this.doesLegacyStretchFlagAffectsLayout, t.position = [this.position[0], this.position[1], this.position[2], this.position[3]], t.margin = [this.margin[0], this.margin[1], this.margin[2], this.margin[3], this.margin[4], this.margin[5]], t.border = [this.border[0], this.border[1], this.border[2], this.border[3], this.border[4], this.border[5]], t.padding = [this.padding[0], this.padding[1], this.padding[2], this.padding[3], this.padding[4], this.padding[5]], t.cachedMeasurements = d(u), t
        }, e
    }();
    t.YGLayout = g
}, function(e, t, i) {
    "use strict";
    t.__esModule = !0;
    var n = function() {
        function e(e, t) {
            this.value = e, this.unit = t
        }
        return e.prototype.clone = function() {
            return new e(this.value, this.unit)
        }, e
    }();
    t.YGValue = n
}, function(e, t, i) {
    "use strict";
    t.__esModule = !0;
    var n = i(0),
        o = i(1),
        r = i(3);
    t.ALIGN_AUTO = n.YGAlign.Auto, t.ALIGN_FLEX_START = n.YGAlign.FlexStart, t.ALIGN_CENTER = n.YGAlign.Center, t.ALIGN_FLEX_END = n.YGAlign.FlexEnd, t.ALIGN_STRETCH = n.YGAlign.Stretch, t.ALIGN_BASELINE = n.YGAlign.Baseline, t.ALIGN_SPACE_BETWEEN = n.YGAlign.SpaceBetween, t.ALIGN_SPACE_AROUND = n.YGAlign.SpaceAround, t.DIMENSION_WIDTH = n.YGDimension.Width, t.DIMENSION_HEIGHT = n.YGDimension.Height, t.DIRECTION_INHERIT = n.YGDirection.Inherit, t.DIRECTION_LTR = n.YGDirection.LTR, t.DIRECTION_RTL = n.YGDirection.RTL, t.DISPLAY_FLEX = n.YGDisplay.Flex, t.DISPLAY_NONE = n.YGDisplay.None, t.EDGE_LEFT = n.YGEdge.Left, t.EDGE_TOP = n.YGEdge.Top, t.EDGE_RIGHT = n.YGEdge.Right, t.EDGE_BOTTOM = n.YGEdge.Bottom, t.EDGE_START = n.YGEdge.Start, t.EDGE_END = n.YGEdge.End, t.EDGE_HORIZONTAL = n.YGEdge.Horizontal, t.EDGE_VERTICAL = n.YGEdge.Vertical, t.EDGE_ALL = n.YGEdge.All, t.EXPERIMENTALFEATURE_WEBFLEXBASIS = n.YGExperimentalFeature.WebFlexBasis, t.FLEX_DIRECTION_COLUMN = n.YGFlexDirection.Column, t.FLEX_DIRECTION_COLUMN_REVERSE = n.YGFlexDirection.ColumnReverse, t.FLEX_DIRECTION_ROW = n.YGFlexDirection.Row, t.FLEX_DIRECTION_ROW_REVERSE = n.YGFlexDirection.RowReverse, t.JUSTIFY_FLEX_START = n.YGJustify.FlexStart, t.JUSTIFY_CENTER = n.YGJustify.Center, t.JUSTIFY_FLEX_END = n.YGJustify.FlexEnd, t.JUSTIFY_SPACE_BETWEEN = n.YGJustify.SpaceBetween, t.JUSTIFY_SPACE_AROUND = n.YGJustify.SpaceAround, t.JUSTIFY_SPACE_EVENLY = n.YGJustify.SpaceEvenly, t.LOGLEVEL_ERROR = n.YGLogLevel.Error, t.LOGLEVEL_WARN = n.YGLogLevel.Warn, t.LOGLEVEL_INFO = n.YGLogLevel.Info, t.LOGLEVEL_DEBUG = n.YGLogLevel.Debug, t.LOGLEVEL_VERBOSE = n.YGLogLevel.Verbose, t.LOGLEVEL_FATAL = n.YGLogLevel.Fatal, t.MEASURE_MODE_UNDEFINED = n.YGMeasureMode.Undefined, t.MEASURE_MODE_EXACTLY = n.YGMeasureMode.Exactly, t.MEASURE_MODE_AT_MOST = n.YGMeasureMode.AtMost, t.NODE_TYPE_DEFAULT = n.YGNodeType.Default, t.NODE_TYPE_TEXT = n.YGNodeType.Text, t.OVERFLOW_VISIBLE = n.YGOverflow.Visible, t.OVERFLOW_HIDDEN = n.YGOverflow.Hidden, t.OVERFLOW_SCROLL = n.YGOverflow.Scroll, t.POSITION_TYPE_RELATIVE = n.YGPositionType.Relative, t.POSITION_TYPE_ABSOLUTE = n.YGPositionType.Absolute, t.UNIT_UNDEFINED = n.YGUnit.Undefined, t.UNIT_POINT = n.YGUnit.Point, t.UNIT_PERCENT = n.YGUnit.Percent, t.UNIT_AUTO = n.YGUnit.Auto, t.WRAP_NO_WRAP = n.YGWrap.NoWrap, t.WRAP_WRAP = n.YGWrap.Wrap, t.WRAP_WRAP_REVERSE = n.YGWrap.WrapReverse, t.UNDEFINED = void 0;
    var a = function() {};
    t.Layout = a;
    var s = function() {
        function e(e, t) {
            e ? (this.width = e, this.height = t) : (this.width = 0, this.height = 0)
        }
        return e.fromJS = function(t) {
            return new e(t.width, t.height)
        }, e
    }();
    t.Size = s;
    var l = function(e, t) {
        e ? (this.unit = e, this.value = t) : (this.unit = n.YGUnit.Undefined, this.value = 0)
    };
    t.Value = l;
    var u = function() {
        function e() {
            this.config = o.YGConfigNew()
        }
        return e.create = function() {
            return new e
        }, e.prototype.free = function() {
            o.YGConfigFree(this.config)
        }, e.prototype.setExperimentalFeatureEnabled = function(e, t) {
            o.YGConfigSetExperimentalFeatureEnabled(this.config, e, t)
        }, e.prototype.setPointScaleFactor = function(e) {
            o.YGConfigSetPointScaleFactor(this.config, e)
        }, e.prototype.isExperimentalFeatureEnabled = function(e) {
            o.YGConfigIsExperimentalFeatureEnabled(this.config, e)
        }, e
    }();

    function d(e) {
        return o.YGNodeGetContext(e)
    }

    function g(e) {
        return new l(e.unit, e.value)
    }
    t.Config = u;
    var G = function() {
        function e(e) {
            this.node = e ? o.YGNodeNewWithConfig(e.config) : o.YGNodeNew(), o.YGNodeSetContext(this.node, this)
        }
        return e.create = function(t) {
            return t ? new e(t) : new e
        }, e.createDefault = function() {
            return new e(void 0)
        }, e.createWithConfig = function(t) {
            return new e(t)
        }, e.prototype.calculateLayout = function(e, t, i) {
            o.YGNodeCalculateLayout(this.node, e, t, i)
        }, e.prototype.copyStyle = function(e) {
            o.YGNodeCopyStyle(this.node, e)
        }, e.prototype.free = function() {
            o.YGNodeFree(this.node)
        }, e.prototype.freeRecursive = function() {
            o.YGNodeFreeRecursive(this.node)
        }, e.prototype.getAlignContent = function() {
            return o.YGNodeStyleGetAlignContent(this.node)
        }, e.prototype.getAlignItems = function() {
            return o.YGNodeStyleGetAlignItems(this.node)
        }, e.prototype.getAlignSelf = function() {
            return o.YGNodeStyleGetAlignSelf(this.node)
        }, e.prototype.getAspectRatio = function() {
            return o.YGNodeStyleGetAspectRatio(this.node)
        }, e.prototype.getBorder = function(e) {
            return o.YGNodeStyleGetBorder(this.node, e)
        }, e.prototype.getChild = function(e) {
            return d(o.YGNodeGetChild(this.node, e))
        }, e.prototype.getChildCount = function() {
            return o.YGNodeGetChildCount(this.node)
        }, e.prototype.getComputedBorder = function(e) {
            return o.YGNodeLayoutGetBorder(this.node, e)
        }, e.prototype.getComputedBottom = function() {
            return o.YGNodeLayoutGetBottom(this.node)
        }, e.prototype.getComputedHeight = function() {
            return r.YGFloatSanitize(o.YGNodeLayoutGetHeight(this.node))
        }, e.prototype.getComputedLayout = function() {
            var e = new a;
            return e.left = o.YGNodeLayoutGetLeft(this.node), e.right = o.YGNodeLayoutGetRight(this.node), e.top = o.YGNodeLayoutGetTop(this.node), e.bottom = o.YGNodeLayoutGetBottom(this.node), e.width = o.YGNodeLayoutGetWidth(this.node), e.height = o.YGNodeLayoutGetHeight(this.node), e
        }, e.prototype.getComputedLeft = function() {
            return r.YGFloatSanitize(o.YGNodeLayoutGetLeft(this.node))
        }, e.prototype.getComputedMargin = function(e) {
            return r.YGFloatSanitize(o.YGNodeLayoutGetMargin(this.node, e))
        }, e.prototype.getComputedPadding = function(e) {
            return r.YGFloatSanitize(o.YGNodeLayoutGetPadding(this.node, e))
        }, e.prototype.getComputedRight = function() {
            return r.YGFloatSanitize(o.YGNodeLayoutGetRight(this.node))
        }, e.prototype.getComputedTop = function() {
            return r.YGFloatSanitize(o.YGNodeLayoutGetTop(this.node))
        }, e.prototype.getComputedWidth = function() {
            return r.YGFloatSanitize(o.YGNodeLayoutGetWidth(this.node))
        }, e.prototype.getDisplay = function() {
            return o.YGNodeStyleGetDisplay(this.node)
        }, e.prototype.getFlexBasis = function() {
            return g(o.YGNodeStyleGetFlexBasis(this.node))
        }, e.prototype.getFlexDirection = function() {
            return o.YGNodeStyleGetFlexDirection(this.node)
        }, e.prototype.getFlexGrow = function() {
            return o.YGNodeStyleGetFlexGrow(this.node)
        }, e.prototype.getFlexShrink = function() {
            return o.YGNodeStyleGetFlexShrink(this.node)
        }, e.prototype.getFlexWrap = function() {
            return o.YGNodeStyleGetFlexWrap(this.node)
        }, e.prototype.getHeight = function() {
            return g(o.YGNodeStyleGetHeight(this.node))
        }, e.prototype.getJustifyContent = function() {
            return o.YGNodeStyleGetJustifyContent(this.node)
        }, e.prototype.getMargin = function(e) {
            return g(o.YGNodeStyleGetMargin(this.node, e))
        }, e.prototype.getMaxHeight = function() {
            return g(o.YGNodeStyleGetMaxHeight(this.node))
        }, e.prototype.getMaxWidth = function() {
            return g(o.YGNodeStyleGetMaxWidth(this.node))
        }, e.prototype.getMinHeight = function() {
            return g(o.YGNodeStyleGetMinHeight(this.node))
        }, e.prototype.getMinWidth = function() {
            return g(o.YGNodeStyleGetMinWidth(this.node))
        }, e.prototype.getOverflow = function() {
            return o.YGNodeStyleGetOverflow(this.node)
        }, e.prototype.getPadding = function(e) {
            return g(o.YGNodeStyleGetPadding(this.node, e))
        }, e.prototype.getParent = function() {
            var e = o.YGNodeGetParent(this.node);
            if (e) return d(e)
        }, e.prototype.getPosition = function(e) {
            return g(o.YGNodeStyleGetPosition(this.node, e))
        }, e.prototype.getPositionType = function() {
            return o.YGNodeStyleGetPositionType(this.node)
        }, e.prototype.getWidth = function() {
            return g(o.YGNodeStyleGetWidth(this.node))
        }, e.prototype.insertChild = function(e, t) {
            o.YGNodeInsertChild(this.node, e.node, t)
        }, e.prototype.isDirty = function() {
            return o.YGNodeIsDirty(this.node)
        }, e.prototype.markDirty = function() {
            o.YGNodeMarkDirty(this.node)
        }, e.prototype.removeChild = function(e) {
            o.YGNodeRemoveChild(this.node, e.node)
        }, e.prototype.reset = function() {
            o.YGNodeReset(this.node)
        }, e.prototype.setAlignContent = function(e) {
            o.YGNodeStyleSetAlignContent(this.node, e)
        }, e.prototype.setAlignItems = function(e) {
            o.YGNodeStyleSetAlignItems(this.node, e)
        }, e.prototype.setAlignSelf = function(e) {
            o.YGNodeStyleSetAlignSelf(this.node, e)
        }, e.prototype.setAspectRatio = function(e) {
            o.YGNodeStyleSetAspectRatio(this.node, e)
        }, e.prototype.setBorder = function(e, t) {
            o.YGNodeStyleSetBorder(this.node, e, t)
        }, e.prototype.setDisplay = function(e) {
            o.YGNodeStyleSetDisplay(this.node, e)
        }, e.prototype.setFlex = function(e) {
            o.YGNodeStyleSetFlex(this.node, e)
        }, e.prototype.setFlexBasis = function(e) {
            if ("string" == typeof e) {
                if ("%" !== e[e.length - 1]) throw new Error("Invalid input type");
                this.setFlexBasisPercent(parseFloat(e))
            } else o.YGNodeStyleSetFlexBasis(this.node, e)
        }, e.prototype.setFlexBasisPercent = function(e) {
            o.YGNodeStyleSetFlexBasisPercent(this.node, e)
        }, e.prototype.setFlexDirection = function(e) {
            o.YGNodeStyleSetFlexDirection(this.node, e)
        }, e.prototype.setFlexGrow = function(e) {
            o.YGNodeStyleSetFlexGrow(this.node, e)
        }, e.prototype.setFlexShrink = function(e) {
            o.YGNodeStyleSetFlexShrink(this.node, e)
        }, e.prototype.setFlexWrap = function(e) {
            o.YGNodeStyleSetFlexWrap(this.node, e)
        }, e.prototype.setHeight = function(e) {
            if ("string" == typeof e)
                if ("auto" === e) this.setHeightAuto();
                else {
                    if ("%" !== e[e.length - 1]) throw new Error("Invalid input type.");
                    this.setHeightPercent(parseFloat(e))
                }
            else o.YGNodeStyleSetHeight(this.node, e)
        }, e.prototype.setHeightAuto = function() {
            o.YGNodeStyleSetHeightAuto(this.node)
        }, e.prototype.setHeightPercent = function(e) {
            o.YGNodeStyleSetHeightPercent(this.node, e)
        }, e.prototype.setJustifyContent = function(e) {
            o.YGNodeStyleSetJustifyContent(this.node, e)
        }, e.prototype.setMargin = function(e, t) {
            if ("string" == typeof t)
                if ("auto" === t) this.setMarginAuto(e);
                else {
                    if ("%" !== t[t.length - 1]) throw new Error("Invalid input type.");
                    this.setMarginPercent(e, parseFloat(t))
                }
            else o.YGNodeStyleSetMargin(this.node, e, t)
        }, e.prototype.setMarginAuto = function(e) {
            o.YGNodeStyleSetMarginAuto(this.node, e)
        }, e.prototype.setMarginPercent = function(e, t) {
            o.YGNodeStyleSetMarginPercent(this.node, e, t)
        }, e.prototype.setMaxHeight = function(e) {
            if ("string" == typeof e) {
                if ("%" !== e[e.length - 1]) throw new Error("Invalid input type.");
                this.setMaxHeightPercent(parseFloat(e))
            } else o.YGNodeStyleSetMaxHeight(this.node, e)
        }, e.prototype.setMaxHeightPercent = function(e) {
            o.YGNodeStyleSetMaxHeightPercent(this.node, e)
        }, e.prototype.setMaxWidth = function(e) {
            if ("string" == typeof e) {
                if ("%" !== e[e.length - 1]) throw new Error("Invalid input type.");
                this.setMaxWidthPercent(parseFloat(e))
            } else o.YGNodeStyleSetMaxWidth(this.node, e)
        }, e.prototype.setMaxWidthPercent = function(e) {
            o.YGNodeStyleSetMaxWidthPercent(this.node, e)
        }, e.prototype.setMeasureFunc = function(e) {
            null == e ? this.unsetMeasureFunc() : o.YGNodeSetMeasureFunc(this.node, e)
        }, e.prototype.unsetMeasureFunc = function() {
            o.YGNodeSetMeasureFunc(this.node, null)
        }, e.prototype.setMinHeight = function(e) {
            if ("string" == typeof e) {
                if ("%" !== e[e.length - 1]) throw new Error("Invalid input type.");
                this.setMinHeightPercent(parseFloat(e))
            } else o.YGNodeStyleSetMinHeight(this.node, e)
        }, e.prototype.setMinHeightPercent = function(e) {
            o.YGNodeStyleSetMinHeightPercent(this.node, e)
        }, e.prototype.setMinWidth = function(e) {
            if ("string" == typeof e) {
                if ("%" !== e[e.length - 1]) throw new Error("Invalid input type.");
                this.setMinWidthPercent(parseFloat(e))
            } else o.YGNodeStyleSetMinWidth(this.node, e)
        }, e.prototype.setMinWidthPercent = function(e) {
            o.YGNodeStyleSetMinWidthPercent(this.node, e)
        }, e.prototype.setOverflow = function(e) {
            o.YGNodeStyleSetOverflow(this.node, e)
        }, e.prototype.setPadding = function(e, t) {
            if ("string" == typeof t) {
                if ("%" !== t[t.length - 1]) throw new Error("Invalid input type.");
                this.setPaddingPercent(e, parseFloat(t))
            } else o.YGNodeStyleSetPadding(this.node, e, t)
        }, e.prototype.setPaddingPercent = function(e, t) {
            o.YGNodeStyleSetPaddingPercent(this.node, e, t)
        }, e.prototype.setPosition = function(e, t) {
            if ("string" == typeof t) {
                if ("%" !== t[t.length - 1]) throw new Error("Invalid input type.");
                this.setPositionPercent(e, parseFloat(t))
            } else o.YGNodeStyleSetPosition(this.node, e, t)
        }, e.prototype.setPositionPercent = function(e, t) {
            o.YGNodeStyleSetPositionPercent(this.node, e, t)
        }, e.prototype.setPositionType = function(e) {
            o.YGNodeStyleSetPositionType(this.node, e)
        }, e.prototype.setWidth = function(e) {
            if ("string" == typeof e)
                if ("%" === e[e.length - 1]) this.setWidthPercent(parseFloat(e));
                else {
                    if ("auto" !== e) throw new Error("Invalid input type.");
                    this.setWidthAuto()
                }
            else o.YGNodeStyleSetWidth(this.node, e)
        }, e.prototype.setWidthAuto = function() {
            o.YGNodeStyleSetWidthAuto(this.node)
        }, e.prototype.setWidthPercent = function(e) {
            o.YGNodeStyleSetWidthPercent(this.node, e)
        }, e.prototype.unsetMeasureFun = function() {
            o.YGNodeSetMeasureFunc(this.node, void 0)
        }, e
    }();
    t.Node = G, t.getInstanceCount = function() {
        return o.YGNodeGetInstanceCount()
    }
}, function(e, t, i) {
    "use strict";
    t.__esModule = !0;
    var n = i(0),
        o = i(2),
        r = i(5),
        a = i(3),
        s = i(6),
        l = i(10),
        u = i(4),
        d = i(1),
        g = function() {
            function e(t, i, o, a, u, g, G, c, Y, f, y, h, p, m, S) {
                if (void 0 === t && (t = null), void 0 === i && (i = null), void 0 === o && (o = !0), void 0 === a && (a = n.YGNodeType.Default), void 0 === u && (u = null), void 0 === g && (g = null), void 0 === G && (G = null), void 0 === c && (c = new l.YGStyle), void 0 === Y && (Y = new s.YGLayout), void 0 === f && (f = 0), void 0 === y && (y = null), void 0 === h && (h = []), void 0 === p && (p = null), void 0 === m && (m = !1), void 0 === S && (S = [d.YGValueUndefined(), d.YGValueUndefined()]), t instanceof e) return console.log("from node"), void this.fromNode(t);
                this.print_ = i, this.hasNewLayout_ = o, this.nodeType_ = a, this.measure_ = u, this.baseline_ = g, this.dirtied_ = G, this.style_ = c, this.layout_ = Y, this.lineIndex_ = f, this.owner_ = y, this.children_ = h, this.config_ = p, this.isDirty_ = m, this.resolvedDimensions_ = S, t instanceof r.YGConfig ? (this.config_ = t, this.context_ = null) : this.context_ = t
            }
            return e.prototype.relativePosition = function(e, t) {
                if (this.isLeadingPositionDefined(e)) return this.getLeadingPosition(e, t);
                var i = this.getTrailingPosition(e, t);
                return i.isUndefined() || i.setValue(-1 * i.getValue()), i
            }, e.prototype.operatorAtrib = function(e) {
                return e == this ? this : (this.clearChildren(), this.fromNode(e), this)
            }, e.prototype.fromNode = function(e) {
                console.log(e), this.context_ = e.context_, this.print_ = e.print_, this.hasNewLayout_ = e.hasNewLayout_, this.nodeType_ = e.nodeType_, this.measure_ = e.measure_, this.baseline_ = e.baseline_, this.dirtied_ = e.dirtied_, this.style_ = e.style_, this.layout_ = e.layout_, this.lineIndex_ = e.lineIndex_, this.owner_ = e.owner_, this.children_ = e.children_, this.config_ = e.config_, this.isDirty_ = e.isDirty_, this.resolvedDimensions_ = e.resolvedDimensions_
            }, e.prototype.getContext = function() {
                return this.context_
            }, e.prototype.getPrintFunc = function() {
                return this.print_
            }, e.prototype.getHasNewLayout = function() {
                return this.hasNewLayout_
            }, e.prototype.getNodeType = function() {
                return this.nodeType_
            }, e.prototype.getMeasure = function() {
                return this.measure_
            }, e.prototype.getBaseline = function() {
                return this.baseline_
            }, e.prototype.getDirtied = function() {
                return this.dirtied_
            }, e.prototype.getStyle = function() {
                return this.style_
            }, e.prototype.getLayout = function() {
                return this.layout_
            }, e.prototype.getLineIndex = function() {
                return this.lineIndex_
            }, e.prototype.getOwner = function() {
                return this.owner_
            }, e.prototype.getParent = function() {
                return this.getOwner()
            }, e.prototype.getChildren = function() {
                return this.children_
            }, e.prototype.getChildrenCount = function() {
                return this.children_.length
            }, e.prototype.getChild = function(e) {
                return this.children_[e]
            }, e.prototype.getConfig = function() {
                return this.config_
            }, e.prototype.isDirty = function() {
                return this.isDirty_
            }, e.prototype.getResolvedDimensions = function() {
                return this.resolvedDimensions_
            }, e.prototype.getResolvedDimension = function(e) {
                return this.resolvedDimensions_[e]
            }, e.prototype.getLeadingPosition = function(e, t) {
                if (a.YGFlexDirectionIsRow(e)) {
                    var i = d.YGComputedEdgeValue(this.style_.position, n.YGEdge.Start, d.YGValueUndefined());
                    if (i.unit != n.YGUnit.Undefined) return a.YGResolveValue(i, t)
                }
                var r = d.YGComputedEdgeValue(this.style_.position, u.leading[e], d.YGValueUndefined());
                return r.unit == n.YGUnit.Undefined ? new o.YGFloatOptional(0) : a.YGResolveValue(r, t)
            }, e.prototype.isLeadingPositionDefined = function(e) {
                return a.YGFlexDirectionIsRow(e) && d.YGComputedEdgeValue(this.style_.position, n.YGEdge.Start, d.YGValueUndefined()).unit != n.YGUnit.Undefined || d.YGComputedEdgeValue(this.style_.position, u.leading[e], d.YGValueUndefined()).unit != n.YGUnit.Undefined
            }, e.prototype.isTrailingPosDefined = function(e) {
                return a.YGFlexDirectionIsRow(e) && d.YGComputedEdgeValue(this.style_.position, n.YGEdge.End, d.YGValueUndefined()).unit != n.YGUnit.Undefined || d.YGComputedEdgeValue(this.style_.position, u.trailing[e], d.YGValueUndefined()).unit != n.YGUnit.Undefined
            }, e.prototype.getTrailingPosition = function(e, t) {
                if (a.YGFlexDirectionIsRow(e)) {
                    var i = d.YGComputedEdgeValue(this.style_.position, n.YGEdge.End, d.YGValueUndefined());
                    if (i.unit != n.YGUnit.Undefined) return a.YGResolveValue(i, t)
                }
                var r = d.YGComputedEdgeValue(this.style_.position, u.trailing[e], d.YGValueUndefined());
                return r.unit == n.YGUnit.Undefined ? new o.YGFloatOptional(0) : a.YGResolveValue(r, t)
            }, e.prototype.getLeadingMargin = function(e, t) {
                return a.YGFlexDirectionIsRow(e) && this.style_.margin[n.YGEdge.Start].unit != n.YGUnit.Undefined ? a.YGResolveValueMargin(this.style_.margin[n.YGEdge.Start], t) : a.YGResolveValueMargin(d.YGComputedEdgeValue(this.style_.margin, u.leading[e], d.YGValueZero()), t)
            }, e.prototype.getTrailingMargin = function(e, t) {
                return a.YGFlexDirectionIsRow(e) && this.style_.margin[n.YGEdge.End].unit != n.YGUnit.Undefined ? a.YGResolveValueMargin(this.style_.margin[n.YGEdge.End], t) : a.YGResolveValueMargin(d.YGComputedEdgeValue(this.style_.margin, u.trailing[e], d.YGValueZero()), t)
            }, e.prototype.getLeadingBorder = function(e) {
                if (a.YGFlexDirectionIsRow(e) && this.style_.border[n.YGEdge.Start].unit != n.YGUnit.Undefined && !d.YGFloatIsUndefined(this.style_.border[n.YGEdge.Start].value) && this.style_.border[n.YGEdge.Start].value >= 0) return this.style_.border[n.YGEdge.Start].value;
                var t = d.YGComputedEdgeValue(this.style_.border, u.leading[e], d.YGValueZero()).value;
                return a.YGFloatMax(t, 0)
            }, e.prototype.getTrailingBorder = function(e) {
                if (a.YGFlexDirectionIsRow(e) && this.style_.border[n.YGEdge.End].unit != n.YGUnit.Undefined && !d.YGFloatIsUndefined(this.style_.border[n.YGEdge.End].value) && this.style_.border[n.YGEdge.End].value >= 0) return this.style_.border[n.YGEdge.End].value;
                var t = d.YGComputedEdgeValue(this.style_.border, u.trailing[e], d.YGValueZero()).value;
                return a.YGFloatMax(t, 0)
            }, e.prototype.getLeadingPadding = function(e, t) {
                var i = a.YGResolveValue(this.style_.padding[n.YGEdge.Start], t);
                if (a.YGFlexDirectionIsRow(e) && this.style_.padding[n.YGEdge.Start].unit != n.YGUnit.Undefined && !i.isUndefined() && i.getValue() > 0) return i;
                var r = a.YGResolveValue(d.YGComputedEdgeValue(this.style_.padding, u.leading[e], d.YGValueZero()), t);
                return a.YGFloatOptionalMax(r, new o.YGFloatOptional(0))
            }, e.prototype.getTrailingPadding = function(e, t) {
                var i = a.YGResolveValue(this.style_.padding[n.YGEdge.End], t);
                if (a.YGFlexDirectionIsRow(e) && this.style_.padding[n.YGEdge.End].unit != n.YGUnit.Undefined && !i.isUndefined() && i.getValue() >= 0) return i;
                var r = a.YGResolveValue(d.YGComputedEdgeValue(this.style_.padding, u.trailing[e], d.YGValueZero()), t);
                return a.YGFloatOptionalMax(r, new o.YGFloatOptional(0))
            }, e.prototype.getLeadingPaddingAndBorder = function(e, t) {
                return this.getLeadingPadding(e, t).add(new o.YGFloatOptional(this.getLeadingBorder(e)))
            }, e.prototype.getTrailingPaddingAndBorder = function(e, t) {
                return this.getTrailingPadding(e, t).add(new o.YGFloatOptional(this.getTrailingBorder(e)))
            }, e.prototype.getMarginForAxis = function(e, t) {
                return this.getLeadingMargin(e, t).add(this.getTrailingMargin(e, t))
            }, e.prototype.setContext = function(e) {
                this.context_ = e
            }, e.prototype.setPrintFunc = function(e) {
                this.print_ = e
            }, e.prototype.setHasNewLayout = function(e) {
                this.hasNewLayout_ = e
            }, e.prototype.setNodeType = function(e) {
                this.nodeType_ = e
            }, e.prototype.setMeasureFunc = function(e) {
                null == e ? (this.measure_ = null, this.nodeType_ = n.YGNodeType.Default) : (0 != this.children_.length && console.error("Cannot set measure function: Nodes with measure functions cannot have children."), this.measure_ = e, this.setNodeType(n.YGNodeType.Text)), this.measure_ = e
            }, e.prototype.setBaseLineFunc = function(e) {
                this.baseline_ = e
            }, e.prototype.setDirtiedFunc = function(e) {
                this.dirtied_ = e
            }, e.prototype.setStyle = function(e) {
                this.style_ = e
            }, e.prototype.setStyleFlexDirection = function(e) {
                this.style_.flexDirection = e
            }, e.prototype.setStyleAlignContent = function(e) {
                this.style_.alignContent = e
            }, e.prototype.setLayout = function(e) {
                this.layout_ = e
            }, e.prototype.setLineIndex = function(e) {
                this.lineIndex_ = e
            }, e.prototype.setOwner = function(e) {
                this.owner_ = e
            }, e.prototype.setChildren = function(e) {
                this.children_ = e
            }, e.prototype.setConfig = function(e) {
                this.config_ = e
            }, e.prototype.setDirty = function(e) {
                this.isDirty_ = e
            }, e.prototype.setLayoutLastOwnerDirection = function(e) {
                this.layout_.lastOwnerDirection = e
            }, e.prototype.setLayoutComputedFlexBasis = function(e) {
                this.layout_.computedFlexBasis = e
            }, e.prototype.setLayoutComputedFlexBasisGeneration = function(e) {
                this.layout_.computedFlexBasisGeneration = e
            }, e.prototype.setLayoutMeasuredDimension = function(e, t) {
                this.layout_.measuredDimensions[t] = e
            }, e.prototype.setLayoutHadOverflow = function(e) {
                this.layout_.hadOverflow = e
            }, e.prototype.setLayoutDimension = function(e, t) {
                this.layout_.dimensions[t] = e
            }, e.prototype.setLayoutDirection = function(e) {
                this.layout_.direction = e
            }, e.prototype.setLayoutMargin = function(e, t) {
                this.layout_.margin[t] = e
            }, e.prototype.setLayoutBorder = function(e, t) {
                this.layout_.border[t] = e
            }, e.prototype.setLayoutPadding = function(e, t) {
                this.layout_.padding[t] = e
            }, e.prototype.setLayoutPosition = function(e, t) {
                this.layout_.position[t] = e
            }, e.prototype.setPosition = function(e, t, i, o) {
                var r = null != this.owner_ ? e : n.YGDirection.LTR,
                    s = a.YGResolveFlexDirection(this.style_.flexDirection, r),
                    l = a.YGFlexDirectionCross(s, r),
                    d = this.relativePosition(s, t),
                    g = this.relativePosition(l, i);
                this.setLayoutPosition(a.YGUnwrapFloatOptional(this.getLeadingMargin(s, o).add(d)), u.leading[s]), this.setLayoutPosition(a.YGUnwrapFloatOptional(this.getTrailingMargin(s, o).add(d)), u.trailing[s]), this.setLayoutPosition(a.YGUnwrapFloatOptional(this.getLeadingMargin(l, o).add(g)), u.leading[l]), this.setLayoutPosition(a.YGUnwrapFloatOptional(this.getTrailingMargin(l, o).add(g)), u.trailing[l])
            }, e.prototype.setAndPropogateUseLegacyFlag = function(e) {
                this.config_.useLegacyStretchBehaviour = e;
                for (var t = 0; t < this.children_.length; t++) this.children_[t].getConfig().useLegacyStretchBehaviour = e
            }, e.prototype.setLayoutDoesLegacyFlagAffectsLayout = function(e) {
                this.layout_.doesLegacyStretchFlagAffectsLayout = e
            }, e.prototype.setLayoutDidUseLegacyFlag = function(e) {
                this.layout_.didUseLegacyFlag = e
            }, e.prototype.markDirtyAndPropogateDownwards = function() {
                this.isDirty_ = !0;
                for (var e = 0; e < this.children_.length; e++) this.children_[e].markDirtyAndPropogateDownwards()
            }, e.prototype.marginLeadingValue = function(e) {
                return a.YGFlexDirectionIsRow(e) && this.style_.margin[n.YGEdge.Start].unit != n.YGUnit.Undefined ? this.style_.margin[n.YGEdge.Start] : this.style_.margin[u.leading[e]]
            }, e.prototype.marginTrailingValue = function(e) {
                return a.YGFlexDirectionIsRow(e) && this.style_.margin[n.YGEdge.End].unit != n.YGUnit.Undefined ? this.style_.margin[n.YGEdge.End] : this.style_.margin[u.trailing[e]]
            }, e.prototype.resolveFlexBasisPtr = function() {
                var e = this.style_.flexBasis;
                return e.unit != n.YGUnit.Auto && e.unit != n.YGUnit.Undefined ? e : !this.style_.flex.isUndefined() && this.style_.flex.getValue() > 0 ? this.config_.useWebDefaults ? d.YGValueAuto() : d.YGValueZero() : d.YGValueAuto()
            }, e.prototype.resolveDimension = function() {
                for (var e = n.YGDimension.Width; e < n.YGDimensionCount; ++e) this.style_.maxDimensions[e].unit != n.YGUnit.Undefined && a.YGValueEqual(this.style_.maxDimensions[e], this.style_.minDimensions[e]) ? this.resolvedDimensions_[e] = this.style_.maxDimensions[e] : this.resolvedDimensions_[e] = this.style_.dimensions[e]
            }, e.prototype.resolveDirection = function(e) {
                return this.style_.direction == n.YGDirection.Inherit ? e > n.YGDirection.Inherit ? e : n.YGDirection.LTR : this.style_.direction
            }, e.prototype.clearChildren = function() {
                for (; this.children_.length > 0;) this.children_.pop()
            }, e.prototype.replaceChild = function(e, t) {
                var i = this.children_.indexOf(e);
                i >= 0 && (this.children_[i] = t)
            }, e.prototype.replaceChildIndex = function(e, t) {
                this.children_[t] = e
            }, e.prototype.insertChildIndex = function(e, t) {
                this.children_.splice(t, 0, e)
            }, e.prototype.removeChild = function(e) {
                var t = this.children_.indexOf(e);
                return t >= 0 && (this.children_.splice(t, 1), !0)
            }, e.prototype.removeChildIndex = function(e) {
                this.children_.splice(e, 1)
            }, e.prototype.cloneChildrenIfNeeded = function() {
                var e = this.children_.length;
                if (0 != e && this.children_[0].getOwner() != this)
                    for (var t = this.config_.cloneNodeCallback, i = 0; i < e; ++i) {
                        var n = this.children_[i],
                            o = null;
                        t && (o = t(n, this, i)), null == o && (o = d.YGNodeClone(n)), this.replaceChildIndex(o, i), o.setOwner(this)
                    }
            }, e.prototype.markDirtyAndPropogate = function() {
                this.isDirty_ || (this.setDirty(!0), this.setLayoutComputedFlexBasis(new o.YGFloatOptional), this.owner_ && this.owner_.markDirtyAndPropogate())
            }, e.prototype.resolveFlexGrow = function() {
                return null == this.owner_ ? 0 : this.style_.flexGrow.isUndefined() ? !this.style_.flex.isUndefined() && this.style_.flex.getValue() > 0 ? this.style_.flex.getValue() : u.kDefaultFlexGrow : this.style_.flexGrow.getValue()
            }, e.prototype.resolveFlexShrink = function() {
                return null == this.owner_ ? 0 : this.style_.flexShrink.isUndefined() ? !this.config_.useWebDefaults && !this.style_.flex.isUndefined() && this.style_.flex.getValue() < 0 ? -this.style_.flex.getValue() : this.config_.useWebDefaults ? u.kWebDefaultFlexShrink : u.kDefaultFlexShrink : this.style_.flexShrink.getValue()
            }, e.prototype.isNodeFlexible = function() {
                return this.style_.positionType == n.YGPositionType.Relative && (0 != this.resolveFlexGrow() || 0 != this.resolveFlexShrink())
            }, e.prototype.didUseLegacyFlag = function() {
                var e = this.layout_.didUseLegacyFlag;
                if (e) return !0;
                for (var t = 0; t < this.children_.length; t++)
                    if (this.children_[t].getLayout().didUseLegacyFlag) {
                        e = !0;
                        break
                    } return e
            }, e.prototype.isLayoutTreeEqualToNode = function(e) {
                if (this.children_.length != e.getChildren().length) return !1;
                if (this.layout_.diff(e.getLayout())) return !1;
                if (0 == this.children_.length) return !0;
                for (var t = !0, i = 0; i < this.children_.length; ++i) {
                    var n = e.getChild(i);
                    if (!(t = this.children_[i].isLayoutTreeEqualToNode(n))) return !1
                }
                return t
            }, e
        }();
    t.YGNode = g
}, function(e, t, i) {
    "use strict";
    t.__esModule = !0;
    var n = i(0),
        o = i(3),
        r = i(7),
        a = i(2),
        s = function() {
            return new r.YGValue(0, n.YGUnit.Undefined)
        },
        l = function() {
            return new r.YGValue(0, n.YGUnit.Auto)
        },
        u = function() {
            return [s(), s(), s(), s(), s(), s(), s(), s(), s()]
        },
        d = function() {
            return [l(), l()]
        },
        g = function() {
            return [s(), s()]
        },
        G = function() {
            function e() {
                this.margin = new Array(n.YGEdgeCount), this.position = new Array(n.YGEdgeCount), this.padding = new Array(n.YGEdgeCount), this.border = new Array(n.YGEdgeCount), this.direction = n.YGDirection.Inherit, this.flexDirection = n.YGFlexDirection.Column, this.justifyContent = n.YGJustify.FlexStart, this.alignContent = n.YGAlign.FlexStart, this.alignItems = n.YGAlign.Stretch, this.alignSelf = n.YGAlign.Auto, this.positionType = n.YGPositionType.Relative, this.flexWrap = n.YGWrap.NoWrap, this.overflow = n.YGOverflow.Visible, this.display = n.YGDisplay.Flex, this.flex = new a.YGFloatOptional, this.flexGrow = new a.YGFloatOptional, this.flexShrink = new a.YGFloatOptional, this.flexBasis = l(), this.margin = u(), this.position = u(), this.padding = u(), this.border = u(), this.dimensions = d(), this.minDimensions = g(), this.maxDimensions = g(), this.aspectRatio = new a.YGFloatOptional
            }
            return e.prototype.isEqual = function(e) {
                var t = this.direction == e.direction && this.flexDirection == e.flexDirection && this.justifyContent == e.justifyContent && this.alignContent == e.alignContent && this.alignItems == e.alignItems && this.alignSelf == e.alignSelf && this.positionType == e.positionType && this.flexWrap == e.flexWrap && this.overflow == e.overflow && this.display == e.display && o.YGValueEqual(this.flexBasis, e.flexBasis) && o.YGValueArrayEqual(this.margin, e.margin) && o.YGValueArrayEqual(this.position, e.position) && o.YGValueArrayEqual(this.padding, e.padding) && o.YGValueArrayEqual(this.border, e.border) && o.YGValueArrayEqual(this.dimensions, e.dimensions) && o.YGValueArrayEqual(this.minDimensions, e.minDimensions) && o.YGValueArrayEqual(this.maxDimensions, e.maxDimensions);
                return !(t = t && this.flex.isUndefined() == e.flex.isUndefined()) || this.flex.isUndefined() || e.flex.isUndefined() || (t = t && this.flex.getValue() == e.flex.getValue()), (t = t && this.flexGrow.isUndefined() == e.flexGrow.isUndefined()) && !this.flexGrow.isUndefined() && (t = t && this.flexGrow.getValue() == e.flexGrow.getValue()), (t = t && this.flexShrink.isUndefined() == e.flexShrink.isUndefined()) && !e.flexShrink.isUndefined() && (t = t && this.flexShrink.getValue() == e.flexShrink.getValue()), this.aspectRatio.isUndefined() && e.aspectRatio.isUndefined() || (t = t && this.aspectRatio.getValue() == e.aspectRatio.getValue()), t
            }, e.prototype.isDiff = function(e) {
                return !this.isEqual(e)
            }, e.prototype.clone = function() {
                var t = new e;
                return t.direction = this.direction, t.flexDirection = this.flexDirection, t.justifyContent = this.justifyContent, t.alignContent = this.alignContent, t.alignItems = this.alignItems, t.alignSelf = this.alignSelf, t.positionType = this.positionType, t.flexWrap = this.flexWrap, t.overflow = this.overflow, t.display = this.display, t.flex = this.flex.clone(), t.flexGrow = this.flexGrow.clone(), t.flexShrink = this.flexShrink.clone(), t.flexBasis = this.flexBasis.clone(), t.margin = o.cloneYGValueArray(this.margin), t.position = o.cloneYGValueArray(this.position), t.padding = o.cloneYGValueArray(this.padding), t.border = o.cloneYGValueArray(this.border), t.dimensions = [this.dimensions[0].clone(), this.dimensions[1].clone()], t.minDimensions = [this.minDimensions[0].clone(), this.minDimensions[1].clone()], t.maxDimensions = [this.maxDimensions[0].clone(), this.maxDimensions[1].clone()], t.aspectRatio = this.aspectRatio.clone(), t
            }, e
        }();
    t.YGStyle = G
}]);