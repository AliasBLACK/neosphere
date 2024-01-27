#include "node.h"
#include "api.h"
#include "jsal.h"

void
yoga_init()
{
	// Enums.
	api_define_const("Yoga", "ALIGN_AUTO", YGAlignAuto);
	api_define_const("Yoga", "ALIGN_FLEX_START", YGAlignFlexStart);
	api_define_const("Yoga", "ALIGN_CENTER", YGAlignCenter);
	api_define_const("Yoga", "ALIGN_FLEX_END", YGAlignFlexEnd);
	api_define_const("Yoga", "ALIGN_STRETCH", YGAlignStretch);
	api_define_const("Yoga", "ALIGN_BASELINE", YGAlignBaseline);
	api_define_const("Yoga", "ALIGN_SPACE_BETWEEN", YGAlignSpaceBetween);
	api_define_const("Yoga", "ALIGN_SPACE_AROUND", YGAlignSpaceAround);
	api_define_const("Yoga", "DIMENSION_WIDTH", YGDimensionWidth);
	api_define_const("Yoga", "DIMENSION_HEIGHT", YGDimensionHeight);
	api_define_const("Yoga", "DIRECTION_INHERIT", YGDirectionInherit);
	api_define_const("Yoga", "DIRECTION_LTR", YGDirectionLTR);
	api_define_const("Yoga", "DIRECTION_RTL", YGDirectionRTL);
	api_define_const("Yoga", "DISPLAY_FLEX", YGDisplayFlex);
	api_define_const("Yoga", "DISPLAY_NONE", YGDisplayNone);
	api_define_const("Yoga", "EDGE_LEFT", YGEdgeLeft);
	api_define_const("Yoga", "EDGE_TOP", YGEdgeTop);
	api_define_const("Yoga", "EDGE_RIGHT", YGEdgeRight);
	api_define_const("Yoga", "EDGE_BOTTOM", YGEdgeBottom);
	api_define_const("Yoga", "EDGE_START", YGEdgeStart);
	api_define_const("Yoga", "EDGE_END", YGEdgeEnd);
	api_define_const("Yoga", "EDGE_HORIZONTAL", YGEdgeHorizontal);
	api_define_const("Yoga", "EDGE_VERTICAL", YGEdgeVertical);
	api_define_const("Yoga", "EDGE_ALL", YGEdgeAll);
	api_define_const("Yoga", "FLEX_DIRECTION_COLUMN", YGFlexDirectionColumn);
	api_define_const("Yoga", "FLEX_DIRECTION_COLUMN_REVERSE", YGFlexDirectionColumnReverse);
	api_define_const("Yoga", "FLEX_DIRECTION_ROW", YGFlexDirectionRow);
	api_define_const("Yoga", "FLEX_DIRECTION_ROW_REVERSE", YGFlexDirectionRowReverse);
	api_define_const("Yoga", "GUTTER_COLUMN", YGGutterColumn);
	api_define_const("Yoga", "GUTTER_ROW", YGGutterRow);
	api_define_const("Yoga", "GUTTER_ALL", YGGutterAll);
	api_define_const("Yoga", "JUSTIFY_FLEX_START", YGJustifyFlexStart);
	api_define_const("Yoga", "JUSTIFY_CENTER", YGJustifyCenter);
	api_define_const("Yoga", "JUSTIFY_FLEX_END", YGJustifyFlexEnd);
	api_define_const("Yoga", "JUSTIFY_SPACE_BETWEEN", YGJustifySpaceBetween);
	api_define_const("Yoga", "JUSTIFY_SPACE_AROUND", YGJustifySpaceAround);
	api_define_const("Yoga", "JUSTIFY_SPACE_EVENLY", YGJustifySpaceEvenly);
	api_define_const("Yoga", "OVERFLOW_VISIBLE", YGOverflowVisible);
	api_define_const("Yoga", "OVERFLOW_HIDDEN", YGOverflowHidden);
	api_define_const("Yoga", "OVERFLOW_SCROLL", YGOverflowScroll);
	api_define_const("Yoga", "POSITION_TYPE_STATIC", YGPositionTypeStatic);
	api_define_const("Yoga", "POSITION_TYPE_RELATIVE", YGPositionTypeRelative);
	api_define_const("Yoga", "POSITION_TYPE_ABSOLUTE", YGPositionTypeAbsolute);
	api_define_const("Yoga", "UNIT_UNDEFINED", YGUnitUndefined);
	api_define_const("Yoga", "UNIT_POINT", YGUnitPoint);
	api_define_const("Yoga", "UNIT_PERCENT", YGUnitPercent);
	api_define_const("Yoga", "UNIT_AUTO", YGUnitAuto);
	api_define_const("Yoga", "WRAP_NO_WRAP", YGWrapNoWrap);
	api_define_const("Yoga", "WRAP_WRAP", YGWrapWrap);
	api_define_const("Yoga", "WRAP_WRAP_REVERSE", YGWrapWrapReverse);

	// Functions.
	api_define_class("Node", YOGA_NODE, js_new_node, js_node_finalize, 0);
	api_define_method("Node", "insertChild", js_Node_insert_child, 0);
	api_define_method("Node", "swapChild", js_Node_swap_child, 0);
	api_define_method("Node", "removeChild", js_Node_remove_child, 0);
	api_define_method("Node", "removeAllChildren", js_Node_remove_all_children, 0);
	api_define_method("Node", "getChild", js_Node_get_child, 0);
	api_define_method("Node", "getOwner", js_Node_get_owner, 0);
	api_define_method("Node", "getParent", js_Node_get_parent, 0);
	api_define_method("Node", "getChildCount", js_Node_get_child_count, 0);
	api_define_method("Node", "setChildren", js_Node_set_children, 0);
	api_define_method("Node", "setIsReferenceBaseline", js_Node_set_is_reference_baseline, 0);
	api_define_method("Node", "isReferenceBaseline", js_Node_is_reference_baseline, 0);
	api_define_method("Node", "calculateLayout", js_Node_calculate_layout, 0);
	api_define_method("Node", "markDirty", js_Node_mark_dirty, 0);
	api_define_method("Node", "markDirtyAndPropagateToDescendants", js_Node_mark_dirty_and_propagate_to_descendants, 0);
	api_define_method("Node", "copyStyle", js_Node_copy_style, 0);
	api_define_method("Node", "getHasNewLayout", js_Node_get_has_new_layout, 0);
	api_define_method("Node", "setHasNewLayout", js_Node_set_has_new_layout, 0);
	api_define_method("Node", "isDirty", js_Node_is_dirty, 0);
	api_define_method("Node", "setDirection", js_Node_set_direction, 0);
	api_define_method("Node", "getDirection", js_Node_get_direction, 0);
	api_define_method("Node", "setFlexDirection", js_Node_set_flex_direction, 0);
	api_define_method("Node", "getFlexDirection", js_Node_get_flex_direction, 0);
	api_define_method("Node", "setJustifyContent", js_Node_set_justify_content, 0);
	api_define_method("Node", "getJustifyContent", js_Node_get_justify_content, 0);
	api_define_method("Node", "setAlignContent", js_Node_set_align_content, 0);
	api_define_method("Node", "getAlignContent", js_Node_get_align_content, 0);
	api_define_method("Node", "setAlignItems", js_Node_set_align_items, 0);
	api_define_method("Node", "getAlignItems", js_Node_get_align_items, 0);
	api_define_method("Node", "setAlignSelf", js_Node_set_align_self, 0);
	api_define_method("Node", "getAlignSelf", js_Node_get_align_self, 0);
	api_define_method("Node", "setPositionType", js_Node_set_position_type, 0);
	api_define_method("Node", "getPositionType", js_Node_get_position_type, 0);
	api_define_method("Node", "setFlexWrap", js_Node_set_flex_wrap, 0);
	api_define_method("Node", "getFlexWrap", js_Node_get_flex_wrap, 0);
	api_define_method("Node", "setOverflow", js_Node_set_overflow, 0);
	api_define_method("Node", "getOverflow", js_Node_get_overflow, 0);
	api_define_method("Node", "setDisplay", js_Node_set_display, 0);
	api_define_method("Node", "getDisplay", js_Node_get_display, 0);
	api_define_method("Node", "setFlex", js_Node_set_flex, 0);
	api_define_method("Node", "getFlex", js_Node_get_flex, 0);
	api_define_method("Node", "setFlexGrow", js_Node_set_flex_grow, 0);
	api_define_method("Node", "getFlexGrow", js_Node_get_flex_grow, 0);
	api_define_method("Node", "setFlexShrink", js_Node_set_flex_shrink, 0);
	api_define_method("Node", "getFlexShrink", js_Node_get_flex_shrink, 0);
	api_define_method("Node", "setFlexBasis", js_Node_set_flex_basis, 0);
	api_define_method("Node", "setFlexBasisPercent", js_Node_set_flex_basis_percent, 0);
	api_define_method("Node", "setFlexBasisAuto", js_Node_set_flex_basis_auto, 0);
	api_define_method("Node", "getFlexBasis", js_Node_get_flex_basis, 0);
	api_define_method("Node", "setPosition", js_Node_set_position, 0);
	api_define_method("Node", "setPositionPercent", js_Node_set_position_percent, 0);
	api_define_method("Node", "getPosition", js_Node_get_position, 0);
	api_define_method("Node", "setMargin", js_Node_set_margin, 0);
	api_define_method("Node", "setMarginPercent", js_Node_set_margin_percent, 0);
	api_define_method("Node", "setMarginAuto", js_Node_set_margin_auto, 0);
	api_define_method("Node", "getMargin", js_Node_get_margin, 0);
	api_define_method("Node", "setPadding", js_Node_set_padding, 0);
	api_define_method("Node", "setPaddingPercent", js_Node_set_padding_percent, 0);
	api_define_method("Node", "getPadding", js_Node_get_padding, 0);
	api_define_method("Node", "setBorder", js_Node_set_border, 0);
	api_define_method("Node", "getBorder", js_Node_get_border, 0);
	api_define_method("Node", "setGap", js_Node_set_gap, 0);
	api_define_method("Node", "getGap", js_Node_get_gap, 0);
	api_define_method("Node", "setWidth", js_Node_set_width, 0);
	api_define_method("Node", "setWidthPercent", js_Node_set_width_percent, 0);
	api_define_method("Node", "setWidthAuto", js_Node_set_width_auto, 0);
	api_define_method("Node", "getWidth", js_Node_get_width, 0);
	api_define_method("Node", "setHeight", js_Node_set_height, 0);
	api_define_method("Node", "setHeightPercent", js_Node_set_height_percent, 0);
	api_define_method("Node", "setHeightAuto", js_Node_set_height_auto, 0);
	api_define_method("Node", "getHeight", js_Node_get_height, 0);
	api_define_method("Node", "setMinWidth", js_Node_set_min_width, 0);
	api_define_method("Node", "setMinWidthPercent", js_Node_set_min_width_percent, 0);
	api_define_method("Node", "getMinWidth", js_Node_get_min_width, 0);
	api_define_method("Node", "setMinHeight", js_Node_set_min_height, 0);
	api_define_method("Node", "setMinHeightPercent", js_Node_set_min_height_percent, 0);
	api_define_method("Node", "getMinHeight", js_Node_get_min_height, 0);
	api_define_method("Node", "setMaxWidth", js_Node_set_max_width, 0);
	api_define_method("Node", "setMaxWidthPercent", js_Node_set_max_width_percent, 0);
	api_define_method("Node", "getMaxWidth", js_Node_get_max_width, 0);
	api_define_method("Node", "setMaxHeight", js_Node_set_max_height, 0);
	api_define_method("Node", "setMaxHeightPercent", js_Node_set_max_height_percent, 0);
	api_define_method("Node", "getMaxHeight", js_Node_get_max_height, 0);
	api_define_method("Node", "setAspectRatio", js_Node_set_aspect_ratio, 0);
	api_define_method("Node", "getAspectRatio", js_Node_get_aspect_ratio, 0);
	api_define_method("Node", "layoutGetLeft", js_Node_layout_get_left, 0);
	api_define_method("Node", "layoutGetTop", js_Node_layout_get_top, 0);
	api_define_method("Node", "layoutGetRight", js_Node_layout_get_right, 0);
	api_define_method("Node", "layoutGetBottom", js_Node_layout_get_bottom, 0);
	api_define_method("Node", "layoutGetWidth", js_Node_layout_get_width, 0);
	api_define_method("Node", "layoutGetHeight", js_Node_layout_get_height, 0);
	api_define_method("Node", "layoutGetDirection", js_Node_layout_get_direction, 0);
	api_define_method("Node", "layoutGetHadOverflow", js_Node_layout_get_had_overflow, 0);
	api_define_method("Node", "layoutGetMargin", js_Node_layout_get_margin, 0);
	api_define_method("Node", "layoutGetBorder", js_Node_layout_get_border, 0);
	api_define_method("Node", "layoutGetPadding", js_Node_layout_get_padding, 0);
}

void
jsal_push_YGValue(YGValue value)
{
	jsal_push_new_object();
	jsal_push_number(value.value);
	jsal_put_prop_string(-2, "value");
	jsal_push_uint(value.unit);
	jsal_put_prop_string(-2, "unit");
}

static bool
js_new_node(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	js_ref_t* ref;

	node = YGNodeNew();
	jsal_push_class_obj(YOGA_NODE, node, is_ctor);
	ref = jsal_ref(-1);
	YGNodeSetContext(node, ref);
	jsal_unref(ref);
	return true;
}

static void
js_node_finalize(void* host_ptr)
{
	printf("node freed");
	YGNodeFree(host_ptr);
}

static bool
js_Node_insert_child(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	YGNodeRef child;
	uint32_t index;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	child = jsal_require_class_obj(0, YOGA_NODE);
	index = jsal_require_uint(1);
	YGNodeInsertChild(node, child, index);
	jsal_push_this();
	return true;
}

static bool
js_Node_swap_child(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	YGNodeRef child;
	uint32_t index;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	child = jsal_require_class_obj(0, YOGA_NODE);
	index = jsal_require_uint(1);
	YGNodeSwapChild(node, child, index);
	jsal_push_this();
	return true;
}

static bool
js_Node_remove_child(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	YGNodeRef child;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	child = jsal_require_class_obj(0, YOGA_NODE);
	YGNodeRemoveChild(node, child);
	jsal_push_this();
	return true;
}

static bool
js_Node_remove_all_children(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	
	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	YGNodeRemoveAllChildren(node);
	jsal_push_this();
	return true;
}

static bool
js_Node_get_child(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	YGNodeRef child;
	uint32_t index;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	index = jsal_require_uint(0);
	child = YGNodeGetChild(node, index);
	if (child)
		jsal_push_ref_weak(YGNodeGetContext(child));
	else
		jsal_push_null();
	return true;
}

static bool
js_Node_get_owner(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	YGNodeRef owner;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	owner = YGNodeGetOwner(node);
	if (owner)
		jsal_push_class_obj(YOGA_NODE, owner, false);
	else
		jsal_push_null();
	return true;
}

static bool
js_Node_get_parent(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	YGNodeRef parent;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	parent = YGNodeGetParent(node);
	if (parent)
		jsal_push_class_obj(YOGA_NODE, parent, false);
	else
		jsal_push_null();
	return true;
}

static bool
js_Node_get_child_count(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	jsal_push_int(YGNodeGetChildCount(node));
	return true;
}

static bool
js_Node_set_children(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	int size;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	jsal_require_array(0);
	size = jsal_get_length(0);
	if (size > 0)
	{
		YGNodeRef* children = calloc(size, sizeof(YGNodeRef));
		if (children)
		{
			int i;
			for (i = 0; i < size; ++i)
			{
				jsal_get_prop_index(0, i);
				children[i] = jsal_require_class_obj(-1, YOGA_NODE);
				jsal_pop(0);
			}
			YGNodeSetChildren(node, children, size);
			free(children);
		}
	}
	jsal_push_this();
	return true;
}

static bool
js_Node_set_is_reference_baseline(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	bool isReferenceBaseline;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	isReferenceBaseline = jsal_require_boolean(0);
	YGNodeSetIsReferenceBaseline(node, isReferenceBaseline);
	jsal_push_this();
	return true;
}

static bool
js_Node_is_reference_baseline(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	jsal_push_boolean(YGNodeIsReferenceBaseline(node));
	return true;
}

static bool
js_Node_calculate_layout(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	float width;
	float height;
	YGDirection direction;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	width = jsal_require_number(0);
	height = jsal_require_number(1);
	direction = jsal_require_uint(2);
	YGNodeCalculateLayout(node, width, height, direction);
	jsal_push_this();
	return true;
}

static bool
js_Node_mark_dirty(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	YGNodeMarkDirty(node);
	jsal_push_this();
	return true;
}

static bool
js_Node_mark_dirty_and_propagate_to_descendants(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	YGNodeMarkDirtyAndPropagateToDescendants(node);
	jsal_push_this();
	return true;
}

static bool
js_Node_copy_style(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	YGNodeRef source;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	source = jsal_require_class_obj(0, YOGA_NODE);
	YGNodeCopyStyle(node, source);
	jsal_push_this();
	return true;
}

static bool
js_Node_get_has_new_layout(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	jsal_push_boolean(YGNodeGetHasNewLayout(node));
	return true;
}

static bool
js_Node_set_has_new_layout(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	bool hasNewLayout;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	hasNewLayout = jsal_require_boolean(0);
	YGNodeSetHasNewLayout(node, hasNewLayout);
	jsal_push_this();
	return true;
}

static bool
js_Node_is_dirty(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	jsal_push_boolean(YGNodeIsDirty(node));
	return true;
}

static bool
js_Node_set_direction(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	YGDirection direction;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	direction = jsal_require_uint(0);
	YGNodeStyleSetDirection(node, direction);
	jsal_push_this();
	return true;
}

static bool
js_Node_get_direction(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	jsal_push_uint(YGNodeStyleGetDirection(node));
	return true;
}

static bool
js_Node_set_flex_direction(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	YGFlexDirection flexDirection;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	flexDirection = jsal_require_uint(0);
	YGNodeStyleSetFlexDirection(node, flexDirection);
	jsal_push_this();
	return true;
}

static bool
js_Node_get_flex_direction(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	jsal_push_uint(YGNodeStyleGetFlexDirection(node));
	return true;
}

static bool
js_Node_set_justify_content(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	YGJustify justify;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	justify = jsal_require_uint(0);
	YGNodeStyleSetJustifyContent(node, justify);
	jsal_push_this();
	return true;
}

static bool
js_Node_get_justify_content(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	jsal_push_uint(YGNodeStyleGetJustifyContent(node));
	return true;
}

static bool
js_Node_set_align_content(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	YGAlign align;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	align = jsal_require_uint(0);
	YGNodeStyleSetAlignContent(node, align);
	jsal_push_this();
	return true;
}

static bool
js_Node_get_align_content(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	jsal_push_uint(YGNodeStyleGetAlignContent(node));
	return true;
}

static bool
js_Node_set_align_items(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	YGAlign align;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	align = jsal_require_uint(0);
	YGNodeStyleSetAlignItems(node, align);
	jsal_push_this();
	return true;
}

static bool
js_Node_get_align_items(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	jsal_push_uint(YGNodeStyleGetAlignItems(node));
	return true;
}

static bool
js_Node_set_align_self(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	YGAlign align;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	align = jsal_require_uint(0);
	YGNodeStyleSetAlignSelf(node, align);
	jsal_push_this();
	return true;
}

static bool
js_Node_get_align_self(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	jsal_push_uint(YGNodeStyleGetAlignSelf(node));
	return true;
}

static bool
js_Node_set_position_type(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	YGPositionType positionType;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	positionType = jsal_require_uint(0);
	YGNodeStyleSetPositionType(node, positionType);
	jsal_push_this();
	return true;
}

static bool
js_Node_get_position_type(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	jsal_push_uint(YGNodeStyleGetPositionType(node));
	return true;
}

static bool
js_Node_set_flex_wrap(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	YGWrap wrap;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	wrap = jsal_require_uint(0);
	YGNodeStyleSetFlexWrap(node, wrap);
	jsal_push_this();
	return true;
}

static bool
js_Node_get_flex_wrap(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	jsal_push_uint(YGNodeStyleGetFlexWrap(node));
	return true;
}

static bool
js_Node_set_overflow(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	YGOverflow overflow;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	overflow = jsal_require_uint(0);
	YGNodeStyleSetOverflow(node, overflow);
	jsal_push_this();
	return true;
}

static bool
js_Node_get_overflow(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	jsal_push_uint(YGNodeStyleGetOverflow(node));
	return true;
}

static bool
js_Node_set_display(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	YGDisplay display;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	display = jsal_require_uint(0);
	YGNodeStyleSetDisplay(node, display);
	jsal_push_this();
	return true;
}

static bool
js_Node_get_display(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	jsal_push_uint(YGNodeStyleGetDisplay(node));
	return true;
}

static bool
js_Node_set_flex(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	float flex;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	flex = jsal_require_number(0);
	YGNodeStyleSetFlex(node, flex);
	jsal_push_this();
	return true;
}

static bool
js_Node_get_flex(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	jsal_push_number(YGNodeStyleGetFlex(node));
	return true;
}

static bool
js_Node_set_flex_grow(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	float flexGrow;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	flexGrow = jsal_require_number(0);
	YGNodeStyleSetFlexGrow(node, flexGrow);
	jsal_push_this();
	return true;
}

static bool
js_Node_get_flex_grow(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	jsal_push_number(YGNodeStyleGetFlexGrow(node));
	return true;
}

static bool
js_Node_set_flex_shrink(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	float flexShrink;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	flexShrink = jsal_require_number(0);
	YGNodeStyleSetFlexShrink(node, flexShrink);
	jsal_push_this();
	return true;
}

static bool
js_Node_get_flex_shrink(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	jsal_push_number(YGNodeStyleGetFlexShrink(node));
	return true;
}

static bool
js_Node_set_flex_basis(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	float flexBasis;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	flexBasis = jsal_require_number(0);
	YGNodeStyleSetFlexBasis(node, flexBasis);
	jsal_push_this();
	return true;
}

static bool
js_Node_set_flex_basis_percent(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	float flexBasisPercent;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	flexBasisPercent = jsal_require_number(0);
	YGNodeStyleSetFlexBasisPercent(node, flexBasisPercent);
	jsal_push_this();
	return true;
}

static bool
js_Node_set_flex_basis_auto(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	YGNodeStyleSetFlexBasisAuto(node);
	jsal_push_this();
	return true;
}

static bool
js_Node_get_flex_basis(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	jsal_push_YGValue(YGNodeStyleGetFlexBasis(node));
	return true;
}

static bool
js_Node_set_position(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	YGEdge edge;
	float position;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	edge = jsal_require_uint(0);
	position = jsal_require_number(1);
	YGNodeStyleSetPosition(node, edge, position);
	jsal_push_this();
	return true;
}

static bool
js_Node_set_position_percent(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	YGEdge edge;
	float positionPercent;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	edge = jsal_require_uint(0);
	positionPercent = jsal_require_number(1);
	YGNodeStyleSetPositionPercent(node, edge, positionPercent);
	jsal_push_this();
	return true;
}

static bool
js_Node_get_position(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	YGEdge edge;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	edge = jsal_require_uint(0);
	jsal_push_YGValue(YGNodeStyleGetPosition(node, edge));
	return true;
}

static bool
js_Node_set_margin(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	YGEdge edge;
	float margin;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	edge = jsal_require_uint(0);
	margin = jsal_require_number(1);
	YGNodeStyleSetMargin(node, edge, margin);
	jsal_push_this();
	return true;
}

static bool
js_Node_set_margin_percent(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	YGEdge edge;
	float marginPercent;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	edge = jsal_require_uint(0);
	marginPercent = jsal_require_number(1);
	YGNodeStyleSetMarginPercent(node, edge, marginPercent);
	jsal_push_this();
	return true;
}

static bool
js_Node_set_margin_auto(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	YGEdge edge;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	edge = jsal_require_uint(0);
	YGNodeStyleSetMarginAuto(node, edge);
	jsal_push_this();
	return true;
}

static bool
js_Node_get_margin(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	YGEdge edge;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	edge = jsal_require_uint(0);
	jsal_push_YGValue(YGNodeStyleGetMargin(node, edge));
	return true;
}

static bool
js_Node_set_padding(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	YGEdge edge;
	float padding;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	edge = jsal_require_uint(0);
	padding = jsal_require_number(1);
	YGNodeStyleSetPadding(node, edge, padding);
	jsal_push_this();
	return true;
}

static bool
js_Node_set_padding_percent(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	YGEdge edge;
	float paddingPercent;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	edge = jsal_require_uint(0);
	paddingPercent = jsal_require_number(1);
	YGNodeStyleSetPaddingPercent(node, edge, paddingPercent);
	jsal_push_this();
	return true;
}

static bool
js_Node_get_padding(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	YGEdge edge;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	edge = jsal_require_uint(0);
	jsal_push_YGValue(YGNodeStyleGetPadding(node, edge));
	return true;
}

static bool
js_Node_set_border(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	YGEdge edge;
	float border;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	edge = jsal_require_uint(0);
	border = jsal_require_number(1);
	YGNodeStyleSetBorder(node, edge, border);
	jsal_push_this();
	return true;
}

static bool
js_Node_get_border(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	YGEdge edge;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	edge = jsal_require_uint(0);
	jsal_push_number(YGNodeStyleGetBorder(node, edge));
	return true;
}

static bool
js_Node_set_gap(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	YGGutter gutter;
	float gap;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	gutter = jsal_require_uint(0);
	gap = jsal_require_number(1);
	YGNodeStyleSetGap(node, gutter, gap);
	jsal_push_this();
	return true;
}

static bool
js_Node_get_gap(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	YGGutter gutter;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	gutter = jsal_require_uint(0);
	jsal_push_number(YGNodeStyleGetGap(node, gutter));
	return true;
}

static bool
js_Node_set_width(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	float width;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	width = jsal_require_number(0);
	YGNodeStyleSetWidth(node, width);
	jsal_push_this();
	return true;
}

static bool
js_Node_set_width_percent(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	float widthPercent;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	widthPercent = jsal_require_number(0);
	YGNodeStyleSetWidthPercent(node, widthPercent);
	jsal_push_this();
	return true;
}

static bool
js_Node_set_width_auto(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	YGNodeStyleSetWidthAuto(node);
	jsal_push_this();
	return true;
}

static bool
js_Node_get_width(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	jsal_push_YGValue(YGNodeStyleGetWidth(node));
	return true;
}

static bool
js_Node_set_height(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	float height;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	height = jsal_require_number(0);
	YGNodeStyleSetHeight(node, height);
	jsal_push_this();
	return true;
}

static bool
js_Node_set_height_percent(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	float heightPercent;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	heightPercent = jsal_require_number(0);
	YGNodeStyleSetHeightPercent(node, heightPercent);
	jsal_push_this();
	return true;
}

static bool
js_Node_set_height_auto(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	YGNodeStyleSetHeightAuto(node);
	jsal_push_this();
	return true;
}

static bool
js_Node_get_height(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	jsal_push_YGValue(YGNodeStyleGetHeight(node));
	return true;
}

static bool
js_Node_set_min_width(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	float minWidth;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	minWidth = jsal_require_number(0);
	YGNodeStyleSetMinWidth(node, minWidth);
	jsal_push_this();
	return true;
}

static bool
js_Node_set_min_width_percent(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	float minWidthPercent;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	minWidthPercent = jsal_require_number(0);
	YGNodeStyleSetMinWidthPercent(node, minWidthPercent);
	jsal_push_this();
	return true;
}

static bool
js_Node_get_min_width(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	jsal_push_YGValue(YGNodeStyleGetMinWidth(node));
	return true;
}

static bool
js_Node_set_min_height(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	float minHeight;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	minHeight = jsal_require_number(0);
	YGNodeStyleSetMinHeight(node, minHeight);
	jsal_push_this();
	return true;
}

static bool
js_Node_set_min_height_percent(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	float minHeight;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	minHeight = jsal_require_number(0);
	YGNodeStyleSetMinHeightPercent(node, minHeight);
	jsal_push_this();
	return true;
}

static bool
js_Node_get_min_height(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	jsal_push_YGValue(YGNodeStyleGetMinHeight(node));
	return true;
}

static bool
js_Node_set_max_width(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	float maxWidth;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	maxWidth = jsal_require_number(0);
	YGNodeStyleSetMaxWidth(node, maxWidth);
	jsal_push_this();
	return true;
}

static bool
js_Node_set_max_width_percent(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	float maxWidth;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	maxWidth = jsal_require_number(0);
	YGNodeStyleSetMaxWidthPercent(node, maxWidth);
	jsal_push_this();
	return true;
}

static bool
js_Node_get_max_width(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	jsal_push_YGValue(YGNodeStyleGetMaxWidth(node));
	return true;
}

static bool
js_Node_set_max_height(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	float maxHeight;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	maxHeight = jsal_require_number(0);
	YGNodeStyleSetMaxHeight(node, maxHeight);
	jsal_push_this();
	return true;
}

static bool
js_Node_set_max_height_percent(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	float maxHeight;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	maxHeight = jsal_require_number(0);
	YGNodeStyleSetMaxHeightPercent(node, maxHeight);
	jsal_push_this();
	return true;
}

static bool
js_Node_get_max_height(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	jsal_push_YGValue(YGNodeStyleGetMaxHeight(node));
	return true;
}

static bool
js_Node_set_aspect_ratio(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	float aspectRatio;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	aspectRatio = jsal_require_number(0);
	YGNodeStyleSetAspectRatio(node, aspectRatio);
	jsal_push_this();
	return true;
}

static bool
js_Node_get_aspect_ratio(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	jsal_push_number(YGNodeStyleGetAspectRatio(node));
	return true;
}

static bool
js_Node_layout_get_left(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	jsal_push_number(YGNodeLayoutGetLeft(node));
	return true;
}

static bool
js_Node_layout_get_top(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	jsal_push_number(YGNodeLayoutGetTop(node));
	return true;
}

static bool
js_Node_layout_get_right(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	jsal_push_number(YGNodeLayoutGetRight(node));
	return true;
}

static bool
js_Node_layout_get_bottom(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	jsal_push_number(YGNodeLayoutGetBottom(node));
	return true;
}

static bool
js_Node_layout_get_width(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	jsal_push_number(YGNodeLayoutGetWidth(node));
	return true;
}

static bool
js_Node_layout_get_height(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	jsal_push_number(YGNodeLayoutGetHeight(node));
	return true;
}

static bool
js_Node_layout_get_direction(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	jsal_push_uint(YGNodeLayoutGetDirection(node));
	return true;
}

static bool
js_Node_layout_get_had_overflow(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	jsal_push_boolean(YGNodeLayoutGetHadOverflow(node));
	return true;
}

static bool
js_Node_layout_get_margin(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	YGEdge edge;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	edge = jsal_require_uint(0);
	jsal_push_number(YGNodeLayoutGetMargin(node, edge));
	return true;
}

static bool
js_Node_layout_get_border(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	YGEdge edge;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	edge = jsal_require_uint(0);
	jsal_push_number(YGNodeLayoutGetBorder(node, edge));
	return true;
}

static bool
js_Node_layout_get_padding(int num_args, bool is_ctor, intptr_t magic)
{
	YGNodeRef node;
	YGEdge edge;

	jsal_push_this();
	node = jsal_require_class_obj(-1, YOGA_NODE);
	edge = jsal_require_number(0);
	jsal_push_number(YGNodeLayoutGetPadding(node, edge));
	return true;
}


