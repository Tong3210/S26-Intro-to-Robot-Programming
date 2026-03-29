# generated from rosidl_generator_py/resource/_idl.py.em
# with input from turtle_interfaces:srv/SetColors.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'turtle_rgb'
# Member 'pen_rgb'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetColors_Request(type):
    """Metaclass of message 'SetColors_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('turtle_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'turtle_interfaces.srv.SetColors_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_colors__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_colors__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_colors__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_colors__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_colors__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetColors_Request(metaclass=Metaclass_SetColors_Request):
    """Message class 'SetColors_Request'."""

    __slots__ = [
        '_turtle_rgb',
        '_pen_rgb',
    ]

    _fields_and_field_types = {
        'turtle_rgb': 'float[3]',
        'pen_rgb': 'float[3]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'turtle_rgb' not in kwargs:
            self.turtle_rgb = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.turtle_rgb = numpy.array(kwargs.get('turtle_rgb'), dtype=numpy.float32)
            assert self.turtle_rgb.shape == (3, )
        if 'pen_rgb' not in kwargs:
            self.pen_rgb = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.pen_rgb = numpy.array(kwargs.get('pen_rgb'), dtype=numpy.float32)
            assert self.pen_rgb.shape == (3, )

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if all(self.turtle_rgb != other.turtle_rgb):
            return False
        if all(self.pen_rgb != other.pen_rgb):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def turtle_rgb(self):
        """Message field 'turtle_rgb'."""
        return self._turtle_rgb

    @turtle_rgb.setter
    def turtle_rgb(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'turtle_rgb' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'turtle_rgb' numpy.ndarray() must have a size of 3"
            self._turtle_rgb = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'turtle_rgb' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._turtle_rgb = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def pen_rgb(self):
        """Message field 'pen_rgb'."""
        return self._pen_rgb

    @pen_rgb.setter
    def pen_rgb(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'pen_rgb' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'pen_rgb' numpy.ndarray() must have a size of 3"
            self._pen_rgb = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'pen_rgb' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._pen_rgb = numpy.array(value, dtype=numpy.float32)


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_SetColors_Response(type):
    """Metaclass of message 'SetColors_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('turtle_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'turtle_interfaces.srv.SetColors_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_colors__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_colors__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_colors__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_colors__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_colors__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetColors_Response(metaclass=Metaclass_SetColors_Response):
    """Message class 'SetColors_Response'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


class Metaclass_SetColors(type):
    """Metaclass of service 'SetColors'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('turtle_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'turtle_interfaces.srv.SetColors')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_colors

            from turtle_interfaces.srv import _set_colors
            if _set_colors.Metaclass_SetColors_Request._TYPE_SUPPORT is None:
                _set_colors.Metaclass_SetColors_Request.__import_type_support__()
            if _set_colors.Metaclass_SetColors_Response._TYPE_SUPPORT is None:
                _set_colors.Metaclass_SetColors_Response.__import_type_support__()


class SetColors(metaclass=Metaclass_SetColors):
    from turtle_interfaces.srv._set_colors import SetColors_Request as Request
    from turtle_interfaces.srv._set_colors import SetColors_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
