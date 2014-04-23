# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `ServerErrors.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import Glacier2_Session_ice
import omero_Collections_ice

# Included module Ice
_M_Ice = Ice.openModule('Ice')

# Included module Glacier2
_M_Glacier2 = Ice.openModule('Glacier2')

# Included module omero
_M_omero = Ice.openModule('omero')

# Included module omero.model
_M_omero.model = Ice.openModule('omero.model')

# Included module omero.sys
_M_omero.sys = Ice.openModule('omero.sys')

# Included module omero.api
_M_omero.api = Ice.openModule('omero.api')

# Start of module omero
__name__ = 'omero'

if not _M_omero.__dict__.has_key('ServerError'):
    _M_omero.ServerError = Ice.createTempClass()
    class ServerError(Ice.UserException):
        def __init__(self, serverStackTrace='', serverExceptionClass='', message=''):
            self.serverStackTrace = serverStackTrace
            self.serverExceptionClass = serverExceptionClass
            self.message = message

        def ice_name(self):
            return 'omero::ServerError'

        def __str__(self):
            return IcePy.stringifyException(self)

        __repr__ = __str__

    _M_omero._t_ServerError = IcePy.defineException('::omero::ServerError', ServerError, (), None, (
        ('serverStackTrace', (), IcePy._t_string),
        ('serverExceptionClass', (), IcePy._t_string),
        ('message', (), IcePy._t_string)
    ))
    ServerError.ice_type = _M_omero._t_ServerError

    _M_omero.ServerError = ServerError
    del ServerError

if not _M_omero.__dict__.has_key('SessionException'):
    _M_omero.SessionException = Ice.createTempClass()
    class SessionException(_M_omero.ServerError):
        def __init__(self, serverStackTrace='', serverExceptionClass='', message=''):
            _M_omero.ServerError.__init__(self, serverStackTrace, serverExceptionClass, message)

        def ice_name(self):
            return 'omero::SessionException'

        def __str__(self):
            return IcePy.stringifyException(self)

        __repr__ = __str__

    _M_omero._t_SessionException = IcePy.defineException('::omero::SessionException', SessionException, (), _M_omero._t_ServerError, ())
    SessionException.ice_type = _M_omero._t_SessionException

    _M_omero.SessionException = SessionException
    del SessionException

if not _M_omero.__dict__.has_key('RemovedSessionException'):
    _M_omero.RemovedSessionException = Ice.createTempClass()
    class RemovedSessionException(_M_omero.SessionException):
        def __init__(self, serverStackTrace='', serverExceptionClass='', message=''):
            _M_omero.SessionException.__init__(self, serverStackTrace, serverExceptionClass, message)

        def ice_name(self):
            return 'omero::RemovedSessionException'

        def __str__(self):
            return IcePy.stringifyException(self)

        __repr__ = __str__

    _M_omero._t_RemovedSessionException = IcePy.defineException('::omero::RemovedSessionException', RemovedSessionException, (), _M_omero._t_SessionException, ())
    RemovedSessionException.ice_type = _M_omero._t_RemovedSessionException

    _M_omero.RemovedSessionException = RemovedSessionException
    del RemovedSessionException

if not _M_omero.__dict__.has_key('SessionTimeoutException'):
    _M_omero.SessionTimeoutException = Ice.createTempClass()
    class SessionTimeoutException(_M_omero.SessionException):
        def __init__(self, serverStackTrace='', serverExceptionClass='', message=''):
            _M_omero.SessionException.__init__(self, serverStackTrace, serverExceptionClass, message)

        def ice_name(self):
            return 'omero::SessionTimeoutException'

        def __str__(self):
            return IcePy.stringifyException(self)

        __repr__ = __str__

    _M_omero._t_SessionTimeoutException = IcePy.defineException('::omero::SessionTimeoutException', SessionTimeoutException, (), _M_omero._t_SessionException, ())
    SessionTimeoutException.ice_type = _M_omero._t_SessionTimeoutException

    _M_omero.SessionTimeoutException = SessionTimeoutException
    del SessionTimeoutException

if not _M_omero.__dict__.has_key('ShutdownInProgress'):
    _M_omero.ShutdownInProgress = Ice.createTempClass()
    class ShutdownInProgress(_M_omero.SessionException):
        def __init__(self, serverStackTrace='', serverExceptionClass='', message=''):
            _M_omero.SessionException.__init__(self, serverStackTrace, serverExceptionClass, message)

        def ice_name(self):
            return 'omero::ShutdownInProgress'

        def __str__(self):
            return IcePy.stringifyException(self)

        __repr__ = __str__

    _M_omero._t_ShutdownInProgress = IcePy.defineException('::omero::ShutdownInProgress', ShutdownInProgress, (), _M_omero._t_SessionException, ())
    ShutdownInProgress.ice_type = _M_omero._t_ShutdownInProgress

    _M_omero.ShutdownInProgress = ShutdownInProgress
    del ShutdownInProgress

if not _M_omero.__dict__.has_key('AuthenticationException'):
    _M_omero.AuthenticationException = Ice.createTempClass()
    class AuthenticationException(_M_Glacier2.CannotCreateSessionException):
        def __init__(self, reason=''):
            _M_Glacier2.CannotCreateSessionException.__init__(self, reason)

        def ice_name(self):
            return 'omero::AuthenticationException'

        def __str__(self):
            return IcePy.stringifyException(self)

        __repr__ = __str__

    _M_omero._t_AuthenticationException = IcePy.defineException('::omero::AuthenticationException', AuthenticationException, (), _M_Glacier2._t_CannotCreateSessionException, ())
    AuthenticationException.ice_type = _M_omero._t_AuthenticationException

    _M_omero.AuthenticationException = AuthenticationException
    del AuthenticationException

if not _M_omero.__dict__.has_key('ExpiredCredentialException'):
    _M_omero.ExpiredCredentialException = Ice.createTempClass()
    class ExpiredCredentialException(_M_Glacier2.CannotCreateSessionException):
        def __init__(self, reason=''):
            _M_Glacier2.CannotCreateSessionException.__init__(self, reason)

        def ice_name(self):
            return 'omero::ExpiredCredentialException'

        def __str__(self):
            return IcePy.stringifyException(self)

        __repr__ = __str__

    _M_omero._t_ExpiredCredentialException = IcePy.defineException('::omero::ExpiredCredentialException', ExpiredCredentialException, (), _M_Glacier2._t_CannotCreateSessionException, ())
    ExpiredCredentialException.ice_type = _M_omero._t_ExpiredCredentialException

    _M_omero.ExpiredCredentialException = ExpiredCredentialException
    del ExpiredCredentialException

if not _M_omero.__dict__.has_key('WrappedCreateSessionException'):
    _M_omero.WrappedCreateSessionException = Ice.createTempClass()
    class WrappedCreateSessionException(_M_Glacier2.CannotCreateSessionException):
        def __init__(self, reason='', concurrency=False, backOff=0, type=''):
            _M_Glacier2.CannotCreateSessionException.__init__(self, reason)
            self.concurrency = concurrency
            self.backOff = backOff
            self.type = type

        def ice_name(self):
            return 'omero::WrappedCreateSessionException'

        def __str__(self):
            return IcePy.stringifyException(self)

        __repr__ = __str__

    _M_omero._t_WrappedCreateSessionException = IcePy.defineException('::omero::WrappedCreateSessionException', WrappedCreateSessionException, (), _M_Glacier2._t_CannotCreateSessionException, (
        ('concurrency', (), IcePy._t_bool),
        ('backOff', (), IcePy._t_long),
        ('type', (), IcePy._t_string)
    ))
    WrappedCreateSessionException.ice_type = _M_omero._t_WrappedCreateSessionException

    _M_omero.WrappedCreateSessionException = WrappedCreateSessionException
    del WrappedCreateSessionException

if not _M_omero.__dict__.has_key('InternalException'):
    _M_omero.InternalException = Ice.createTempClass()
    class InternalException(_M_omero.ServerError):
        def __init__(self, serverStackTrace='', serverExceptionClass='', message=''):
            _M_omero.ServerError.__init__(self, serverStackTrace, serverExceptionClass, message)

        def ice_name(self):
            return 'omero::InternalException'

        def __str__(self):
            return IcePy.stringifyException(self)

        __repr__ = __str__

    _M_omero._t_InternalException = IcePy.defineException('::omero::InternalException', InternalException, (), _M_omero._t_ServerError, ())
    InternalException.ice_type = _M_omero._t_InternalException

    _M_omero.InternalException = InternalException
    del InternalException

if not _M_omero.__dict__.has_key('ResourceError'):
    _M_omero.ResourceError = Ice.createTempClass()
    class ResourceError(_M_omero.ServerError):
        def __init__(self, serverStackTrace='', serverExceptionClass='', message=''):
            _M_omero.ServerError.__init__(self, serverStackTrace, serverExceptionClass, message)

        def ice_name(self):
            return 'omero::ResourceError'

        def __str__(self):
            return IcePy.stringifyException(self)

        __repr__ = __str__

    _M_omero._t_ResourceError = IcePy.defineException('::omero::ResourceError', ResourceError, (), _M_omero._t_ServerError, ())
    ResourceError.ice_type = _M_omero._t_ResourceError

    _M_omero.ResourceError = ResourceError
    del ResourceError

if not _M_omero.__dict__.has_key('NoProcessorAvailable'):
    _M_omero.NoProcessorAvailable = Ice.createTempClass()
    class NoProcessorAvailable(_M_omero.ResourceError):
        def __init__(self, serverStackTrace='', serverExceptionClass='', message='', processorCount=0):
            _M_omero.ResourceError.__init__(self, serverStackTrace, serverExceptionClass, message)
            self.processorCount = processorCount

        def ice_name(self):
            return 'omero::NoProcessorAvailable'

        def __str__(self):
            return IcePy.stringifyException(self)

        __repr__ = __str__

    _M_omero._t_NoProcessorAvailable = IcePy.defineException('::omero::NoProcessorAvailable', NoProcessorAvailable, (), _M_omero._t_ResourceError, (('processorCount', (), IcePy._t_int),))
    NoProcessorAvailable.ice_type = _M_omero._t_NoProcessorAvailable

    _M_omero.NoProcessorAvailable = NoProcessorAvailable
    del NoProcessorAvailable

if not _M_omero.__dict__.has_key('ConcurrencyException'):
    _M_omero.ConcurrencyException = Ice.createTempClass()
    class ConcurrencyException(_M_omero.ServerError):
        def __init__(self, serverStackTrace='', serverExceptionClass='', message='', backOff=0):
            _M_omero.ServerError.__init__(self, serverStackTrace, serverExceptionClass, message)
            self.backOff = backOff

        def ice_name(self):
            return 'omero::ConcurrencyException'

        def __str__(self):
            return IcePy.stringifyException(self)

        __repr__ = __str__

    _M_omero._t_ConcurrencyException = IcePy.defineException('::omero::ConcurrencyException', ConcurrencyException, (), _M_omero._t_ServerError, (('backOff', (), IcePy._t_long),))
    ConcurrencyException.ice_type = _M_omero._t_ConcurrencyException

    _M_omero.ConcurrencyException = ConcurrencyException
    del ConcurrencyException

if not _M_omero.__dict__.has_key('ConcurrentModification'):
    _M_omero.ConcurrentModification = Ice.createTempClass()
    class ConcurrentModification(_M_omero.ConcurrencyException):
        def __init__(self, serverStackTrace='', serverExceptionClass='', message='', backOff=0):
            _M_omero.ConcurrencyException.__init__(self, serverStackTrace, serverExceptionClass, message, backOff)

        def ice_name(self):
            return 'omero::ConcurrentModification'

        def __str__(self):
            return IcePy.stringifyException(self)

        __repr__ = __str__

    _M_omero._t_ConcurrentModification = IcePy.defineException('::omero::ConcurrentModification', ConcurrentModification, (), _M_omero._t_ConcurrencyException, ())
    ConcurrentModification.ice_type = _M_omero._t_ConcurrentModification

    _M_omero.ConcurrentModification = ConcurrentModification
    del ConcurrentModification

if not _M_omero.__dict__.has_key('DatabaseBusyException'):
    _M_omero.DatabaseBusyException = Ice.createTempClass()
    class DatabaseBusyException(_M_omero.ConcurrencyException):
        def __init__(self, serverStackTrace='', serverExceptionClass='', message='', backOff=0):
            _M_omero.ConcurrencyException.__init__(self, serverStackTrace, serverExceptionClass, message, backOff)

        def ice_name(self):
            return 'omero::DatabaseBusyException'

        def __str__(self):
            return IcePy.stringifyException(self)

        __repr__ = __str__

    _M_omero._t_DatabaseBusyException = IcePy.defineException('::omero::DatabaseBusyException', DatabaseBusyException, (), _M_omero._t_ConcurrencyException, ())
    DatabaseBusyException.ice_type = _M_omero._t_DatabaseBusyException

    _M_omero.DatabaseBusyException = DatabaseBusyException
    del DatabaseBusyException

if not _M_omero.__dict__.has_key('OptimisticLockException'):
    _M_omero.OptimisticLockException = Ice.createTempClass()
    class OptimisticLockException(_M_omero.ConcurrencyException):
        def __init__(self, serverStackTrace='', serverExceptionClass='', message='', backOff=0):
            _M_omero.ConcurrencyException.__init__(self, serverStackTrace, serverExceptionClass, message, backOff)

        def ice_name(self):
            return 'omero::OptimisticLockException'

        def __str__(self):
            return IcePy.stringifyException(self)

        __repr__ = __str__

    _M_omero._t_OptimisticLockException = IcePy.defineException('::omero::OptimisticLockException', OptimisticLockException, (), _M_omero._t_ConcurrencyException, ())
    OptimisticLockException.ice_type = _M_omero._t_OptimisticLockException

    _M_omero.OptimisticLockException = OptimisticLockException
    del OptimisticLockException

if not _M_omero.__dict__.has_key('LockTimeout'):
    _M_omero.LockTimeout = Ice.createTempClass()
    class LockTimeout(_M_omero.ConcurrencyException):
        def __init__(self, serverStackTrace='', serverExceptionClass='', message='', backOff=0, seconds=0):
            _M_omero.ConcurrencyException.__init__(self, serverStackTrace, serverExceptionClass, message, backOff)
            self.seconds = seconds

        def ice_name(self):
            return 'omero::LockTimeout'

        def __str__(self):
            return IcePy.stringifyException(self)

        __repr__ = __str__

    _M_omero._t_LockTimeout = IcePy.defineException('::omero::LockTimeout', LockTimeout, (), _M_omero._t_ConcurrencyException, (('seconds', (), IcePy._t_int),))
    LockTimeout.ice_type = _M_omero._t_LockTimeout

    _M_omero.LockTimeout = LockTimeout
    del LockTimeout

if not _M_omero.__dict__.has_key('TryAgain'):
    _M_omero.TryAgain = Ice.createTempClass()
    class TryAgain(_M_omero.ConcurrencyException):
        def __init__(self, serverStackTrace='', serverExceptionClass='', message='', backOff=0):
            _M_omero.ConcurrencyException.__init__(self, serverStackTrace, serverExceptionClass, message, backOff)

        def ice_name(self):
            return 'omero::TryAgain'

        def __str__(self):
            return IcePy.stringifyException(self)

        __repr__ = __str__

    _M_omero._t_TryAgain = IcePy.defineException('::omero::TryAgain', TryAgain, (), _M_omero._t_ConcurrencyException, ())
    TryAgain.ice_type = _M_omero._t_TryAgain

    _M_omero.TryAgain = TryAgain
    del TryAgain

if not _M_omero.__dict__.has_key('MissingPyramidException'):
    _M_omero.MissingPyramidException = Ice.createTempClass()
    class MissingPyramidException(_M_omero.ConcurrencyException):
        def __init__(self, serverStackTrace='', serverExceptionClass='', message='', backOff=0, pixelsID=0):
            _M_omero.ConcurrencyException.__init__(self, serverStackTrace, serverExceptionClass, message, backOff)
            self.pixelsID = pixelsID

        def ice_name(self):
            return 'omero::MissingPyramidException'

        def __str__(self):
            return IcePy.stringifyException(self)

        __repr__ = __str__

    _M_omero._t_MissingPyramidException = IcePy.defineException('::omero::MissingPyramidException', MissingPyramidException, (), _M_omero._t_ConcurrencyException, (('pixelsID', (), IcePy._t_long),))
    MissingPyramidException.ice_type = _M_omero._t_MissingPyramidException

    _M_omero.MissingPyramidException = MissingPyramidException
    del MissingPyramidException

if not _M_omero.__dict__.has_key('ApiUsageException'):
    _M_omero.ApiUsageException = Ice.createTempClass()
    class ApiUsageException(_M_omero.ServerError):
        def __init__(self, serverStackTrace='', serverExceptionClass='', message=''):
            _M_omero.ServerError.__init__(self, serverStackTrace, serverExceptionClass, message)

        def ice_name(self):
            return 'omero::ApiUsageException'

        def __str__(self):
            return IcePy.stringifyException(self)

        __repr__ = __str__

    _M_omero._t_ApiUsageException = IcePy.defineException('::omero::ApiUsageException', ApiUsageException, (), _M_omero._t_ServerError, ())
    ApiUsageException.ice_type = _M_omero._t_ApiUsageException

    _M_omero.ApiUsageException = ApiUsageException
    del ApiUsageException

if not _M_omero.__dict__.has_key('OverUsageException'):
    _M_omero.OverUsageException = Ice.createTempClass()
    class OverUsageException(_M_omero.ApiUsageException):
        def __init__(self, serverStackTrace='', serverExceptionClass='', message=''):
            _M_omero.ApiUsageException.__init__(self, serverStackTrace, serverExceptionClass, message)

        def ice_name(self):
            return 'omero::OverUsageException'

        def __str__(self):
            return IcePy.stringifyException(self)

        __repr__ = __str__

    _M_omero._t_OverUsageException = IcePy.defineException('::omero::OverUsageException', OverUsageException, (), _M_omero._t_ApiUsageException, ())
    OverUsageException.ice_type = _M_omero._t_OverUsageException

    _M_omero.OverUsageException = OverUsageException
    del OverUsageException

if not _M_omero.__dict__.has_key('QueryException'):
    _M_omero.QueryException = Ice.createTempClass()
    class QueryException(_M_omero.ApiUsageException):
        def __init__(self, serverStackTrace='', serverExceptionClass='', message=''):
            _M_omero.ApiUsageException.__init__(self, serverStackTrace, serverExceptionClass, message)

        def ice_name(self):
            return 'omero::QueryException'

        def __str__(self):
            return IcePy.stringifyException(self)

        __repr__ = __str__

    _M_omero._t_QueryException = IcePy.defineException('::omero::QueryException', QueryException, (), _M_omero._t_ApiUsageException, ())
    QueryException.ice_type = _M_omero._t_QueryException

    _M_omero.QueryException = QueryException
    del QueryException

if not _M_omero.__dict__.has_key('ValidationException'):
    _M_omero.ValidationException = Ice.createTempClass()
    class ValidationException(_M_omero.ApiUsageException):
        def __init__(self, serverStackTrace='', serverExceptionClass='', message=''):
            _M_omero.ApiUsageException.__init__(self, serverStackTrace, serverExceptionClass, message)

        def ice_name(self):
            return 'omero::ValidationException'

        def __str__(self):
            return IcePy.stringifyException(self)

        __repr__ = __str__

    _M_omero._t_ValidationException = IcePy.defineException('::omero::ValidationException', ValidationException, (), _M_omero._t_ApiUsageException, ())
    ValidationException.ice_type = _M_omero._t_ValidationException

    _M_omero.ValidationException = ValidationException
    del ValidationException

if not _M_omero.__dict__.has_key('ChecksumValidationException'):
    _M_omero.ChecksumValidationException = Ice.createTempClass()
    class ChecksumValidationException(_M_omero.ValidationException):
        def __init__(self, serverStackTrace='', serverExceptionClass='', message='', failingChecksums=None):
            _M_omero.ValidationException.__init__(self, serverStackTrace, serverExceptionClass, message)
            self.failingChecksums = failingChecksums

        def ice_name(self):
            return 'omero::ChecksumValidationException'

        def __str__(self):
            return IcePy.stringifyException(self)

        __repr__ = __str__

    _M_omero._t_ChecksumValidationException = IcePy.defineException('::omero::ChecksumValidationException', ChecksumValidationException, (), _M_omero._t_ValidationException, (('failingChecksums', (), _M_omero.api._t_IntStringMap),))
    ChecksumValidationException.ice_type = _M_omero._t_ChecksumValidationException

    _M_omero.ChecksumValidationException = ChecksumValidationException
    del ChecksumValidationException

if not _M_omero.__dict__.has_key('FilePathNamingException'):
    _M_omero.FilePathNamingException = Ice.createTempClass()
    class FilePathNamingException(_M_omero.ValidationException):
        def __init__(self, serverStackTrace='', serverExceptionClass='', message='', illegalFilePath='', illegalCodePoints=None, illegalPrefixes=None, illegalSuffixes=None, illegalNames=None):
            _M_omero.ValidationException.__init__(self, serverStackTrace, serverExceptionClass, message)
            self.illegalFilePath = illegalFilePath
            self.illegalCodePoints = illegalCodePoints
            self.illegalPrefixes = illegalPrefixes
            self.illegalSuffixes = illegalSuffixes
            self.illegalNames = illegalNames

        def ice_name(self):
            return 'omero::FilePathNamingException'

        def __str__(self):
            return IcePy.stringifyException(self)

        __repr__ = __str__

    _M_omero._t_FilePathNamingException = IcePy.defineException('::omero::FilePathNamingException', FilePathNamingException, (), _M_omero._t_ValidationException, (
        ('illegalFilePath', (), IcePy._t_string),
        ('illegalCodePoints', (), _M_omero.api._t_IntegerList),
        ('illegalPrefixes', (), _M_omero.api._t_StringSet),
        ('illegalSuffixes', (), _M_omero.api._t_StringSet),
        ('illegalNames', (), _M_omero.api._t_StringSet)
    ))
    FilePathNamingException.ice_type = _M_omero._t_FilePathNamingException

    _M_omero.FilePathNamingException = FilePathNamingException
    del FilePathNamingException

if not _M_omero.__dict__.has_key('SecurityViolation'):
    _M_omero.SecurityViolation = Ice.createTempClass()
    class SecurityViolation(_M_omero.ServerError):
        def __init__(self, serverStackTrace='', serverExceptionClass='', message=''):
            _M_omero.ServerError.__init__(self, serverStackTrace, serverExceptionClass, message)

        def ice_name(self):
            return 'omero::SecurityViolation'

        def __str__(self):
            return IcePy.stringifyException(self)

        __repr__ = __str__

    _M_omero._t_SecurityViolation = IcePy.defineException('::omero::SecurityViolation', SecurityViolation, (), _M_omero._t_ServerError, ())
    SecurityViolation.ice_type = _M_omero._t_SecurityViolation

    _M_omero.SecurityViolation = SecurityViolation
    del SecurityViolation

if not _M_omero.__dict__.has_key('GroupSecurityViolation'):
    _M_omero.GroupSecurityViolation = Ice.createTempClass()
    class GroupSecurityViolation(_M_omero.SecurityViolation):
        def __init__(self, serverStackTrace='', serverExceptionClass='', message=''):
            _M_omero.SecurityViolation.__init__(self, serverStackTrace, serverExceptionClass, message)

        def ice_name(self):
            return 'omero::GroupSecurityViolation'

        def __str__(self):
            return IcePy.stringifyException(self)

        __repr__ = __str__

    _M_omero._t_GroupSecurityViolation = IcePy.defineException('::omero::GroupSecurityViolation', GroupSecurityViolation, (), _M_omero._t_SecurityViolation, ())
    GroupSecurityViolation.ice_type = _M_omero._t_GroupSecurityViolation

    _M_omero.GroupSecurityViolation = GroupSecurityViolation
    del GroupSecurityViolation

if not _M_omero.__dict__.has_key('PermissionMismatchGroupSecurityViolation'):
    _M_omero.PermissionMismatchGroupSecurityViolation = Ice.createTempClass()
    class PermissionMismatchGroupSecurityViolation(_M_omero.SecurityViolation):
        def __init__(self, serverStackTrace='', serverExceptionClass='', message=''):
            _M_omero.SecurityViolation.__init__(self, serverStackTrace, serverExceptionClass, message)

        def ice_name(self):
            return 'omero::PermissionMismatchGroupSecurityViolation'

        def __str__(self):
            return IcePy.stringifyException(self)

        __repr__ = __str__

    _M_omero._t_PermissionMismatchGroupSecurityViolation = IcePy.defineException('::omero::PermissionMismatchGroupSecurityViolation', PermissionMismatchGroupSecurityViolation, (), _M_omero._t_SecurityViolation, ())
    PermissionMismatchGroupSecurityViolation.ice_type = _M_omero._t_PermissionMismatchGroupSecurityViolation

    _M_omero.PermissionMismatchGroupSecurityViolation = PermissionMismatchGroupSecurityViolation
    del PermissionMismatchGroupSecurityViolation

if not _M_omero.__dict__.has_key('ReadOnlyGroupSecurityViolation'):
    _M_omero.ReadOnlyGroupSecurityViolation = Ice.createTempClass()
    class ReadOnlyGroupSecurityViolation(_M_omero.SecurityViolation):
        def __init__(self, serverStackTrace='', serverExceptionClass='', message=''):
            _M_omero.SecurityViolation.__init__(self, serverStackTrace, serverExceptionClass, message)

        def ice_name(self):
            return 'omero::ReadOnlyGroupSecurityViolation'

        def __str__(self):
            return IcePy.stringifyException(self)

        __repr__ = __str__

    _M_omero._t_ReadOnlyGroupSecurityViolation = IcePy.defineException('::omero::ReadOnlyGroupSecurityViolation', ReadOnlyGroupSecurityViolation, (), _M_omero._t_SecurityViolation, ())
    ReadOnlyGroupSecurityViolation.ice_type = _M_omero._t_ReadOnlyGroupSecurityViolation

    _M_omero.ReadOnlyGroupSecurityViolation = ReadOnlyGroupSecurityViolation
    del ReadOnlyGroupSecurityViolation

if not _M_omero.__dict__.has_key('OmeroFSError'):
    _M_omero.OmeroFSError = Ice.createTempClass()
    class OmeroFSError(_M_omero.ServerError):
        def __init__(self, serverStackTrace='', serverExceptionClass='', message='', reason=''):
            _M_omero.ServerError.__init__(self, serverStackTrace, serverExceptionClass, message)
            self.reason = reason

        def ice_name(self):
            return 'omero::OmeroFSError'

        def __str__(self):
            return IcePy.stringifyException(self)

        __repr__ = __str__

    _M_omero._t_OmeroFSError = IcePy.defineException('::omero::OmeroFSError', OmeroFSError, (), _M_omero._t_ServerError, (('reason', (), IcePy._t_string),))
    OmeroFSError.ice_type = _M_omero._t_OmeroFSError

    _M_omero.OmeroFSError = OmeroFSError
    del OmeroFSError

# End of module omero
